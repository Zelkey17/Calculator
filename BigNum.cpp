//
// Created by ash on 23.11.22.
//

#include "BigNum.h"

namespace project {
    BigNum::BigNum(std::string value) {
        num = value;
        sign = value[0] == '-' ? Sign::Minus : Sign::Plus;
        if (sign == Sign::Minus)
            num.erase(0, 1);
    }

    BigNum::BigNum() {
        num = "0";
        sign = Sign::Plus;
    }

    BigNum::BigNum(long long int value) {
        num = std::to_string(value);
        sign = value < 0 ? Sign::Minus : Sign::Plus;
        if (sign == Sign::Minus)
            num.erase(0, 1);
    }

    BigNum &BigNum::operator+=(const BigNum &value) {
        return *this = (*this + value);
    }

    BigNum &BigNum::operator-=(const BigNum &value) {
        return *this = (*this - value);
    }

    BigNum &BigNum::operator*=(const BigNum &value) {
        return *this = (*this * value);
    }

    BigNum &BigNum::operator/=(const BigNum &value) {
        return *this = (*this / value);
    }

    BigNum &BigNum::operator%=(const BigNum &value) {
        return *this = (*this % value);
    }

    BigNum BigNum::operator++(int d) {
        auto tmp = *this;
        *this += BigNum(1);
        return tmp;
    }

    BigNum BigNum::operator--(int d) {
        auto tmp = *this;
        *this -= BigNum(1);
        return tmp;
    }

    BigNum &BigNum::operator++() {
        return *this += BigNum(1);
    }

    BigNum &BigNum::operator--() {
        return *this -= BigNum(1);
    }

    bool BigNum::operator==(BigNum val) {
        std::string num1 = num, num2 = std::string(val);
        return num1 == num2;
    }

    bool BigNum::operator!=(BigNum val) {
        std::string num1 = num, num2 = std::string(val);
        return num1 != num2;
    }

    bool BigNum::operator<=(const BigNum &val) {
        return BigNum((sign == Minus ? "-" : "") + num) < val || BigNum((sign == Minus ? "-" : "") + num) == val;
    }

    bool BigNum::operator>=(const BigNum &val) {
        return BigNum((sign == Minus ? "-" : "") + num) > val || BigNum((sign == Minus ? "-" : "") + num) == val;
    }

    bool BigNum::operator>(BigNum val) {
        if (val.sign != sign)
            return sign == Sign::Plus;
        bool isMinus = val.sign == Sign::Minus;
        std::string num1 = num, num2 = std::string(val);
        if (num1.length() != num2.length())
            return isMinus ? num1.length() < num2.length() : num1.length() > num2.length();
        else if (num1 == num2)
            return false;
        for (int i = 0; i < num1.length(); i++) {
            if (num1[i] != num2[i])
                return isMinus ? num1[i] < num2[i] : num1[i] > num2[i];
        }
    }

    bool BigNum::operator<(BigNum val) {
        if (val.sign != sign)
            return sign == Sign::Minus;
        bool isMinus = val.sign == Sign::Minus;
        std::string num1 = num, num2 = std::string(val);
        if (num1.length() != num2.length())
            return isMinus ? num1.length() > num2.length() : num1.length() < num2.length();
        else if (num1 == num2)
            return false;
        for (int i = 0; i < num1.length(); i++) {
            if (num1[i] != num2[i])
                return isMinus ? num1[i] > num2[i] : num1[i] < num2[i];
        }
    }

    BigNum BigNum::operator+(BigNum val) {
        if (val.sign != sign)
            return val.sign == Sign::Plus ? val - BigNum(num) : BigNum(num) - BigNum(std::string(val));
        bool isMinus = val.sign == Sign::Minus;
        std::string num2 = std::string(val), num1 = num;;
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        unsigned long long n = std::max(num1.length(), num2.length()) + 1;
        num1 += std::string(n - num1.length(), '0');
        num2 += std::string(n - num2.length(), '0');
        std::string ans = std::string(n, '0');
        for (int i = 0; i < n; i++) {
            ans[i] += num1[i] + num2[i] - 2 * '0';
            if (ans[i] > '9') {
                ans[i + 1]++;
                ans[i] -= 10;
            }
        }
        if (ans[n - 1] == '0') ans.erase(n - 1, 1);
        reverse(ans.begin(), ans.end());
        if (isMinus)
            ans = "-" + ans;
        return ans;
    }

    BigNum BigNum::operator-(BigNum val) {
        if (sign == Sign::Minus && val.sign == Sign::Plus)
            return BigNum("-" + std::string(val)) + *this;
        else if (sign == Sign::Plus && val.sign == Sign::Minus)
            return *this + BigNum(std::string(val));
        else if (sign == Sign::Minus && val.sign == Sign::Minus)
            return BigNum(std::string(val)) - BigNum(num);
        std::string num1 = num, num2 = std::string(val);
        if (num1 == num2) {
            return 0;
        }
        bool isMinus = val > *this;
        if (isMinus)
            swap(num1, num2);
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        std::string ans = std::string(num1.length(), '0');
        num2 += std::string(num1.length() - num2.length(), '0');
        for (int i = 0; i < num1.length(); i++) {
            ans[i] += num1[i] - num2[i];
            if (ans[i] < '0') {
                ans[i] += 10;
                ans[i + 1]--;
            }
        }
        reverse(ans.begin(), ans.end());
        int i = 0;
        while (ans[i] == '0') i++;
        return BigNum((isMinus ? "-" : "") + ans.substr(i));
    }

    BigNum BigNum::operator*(BigNum val) {
        bool isMinus = val.sign != sign;
        std::string num1 = num, num2 = std::string(val);
        BigNum ans;
        if (num1 == "0" || num2 == "0")
            return 0;
        if (num2.length() > 1) {
            std::vector<BigNum> nums;
            for (long long i = (long long) num2.length() - 1; i >= 0; i--) {
                nums.push_back(*this * BigNum(num2.substr(i, 1)));
                if (nums[num2.length() - 1 - i] != BigNum(0))
                    nums[num2.length() - 1 - i] = BigNum(
                            std::string(nums[num2.length() - 1 - i]) + std::string(num2.length() - 1 - i, '0'));
            }
            for (auto &el : nums) ans += el;
            return BigNum((isMinus ? "-" : "") + std::string(ans));
        } else {
            for (int i = 0; i < std::atoi(num2.c_str()); i++)
                ans = ans + *this;
            return BigNum((isMinus ? "-" : "") + std::string(ans));
        }
    }

    BigNum BigNum::operator/(long long int val) {
        bool isMinus = val >= 0 != sign == Sign::Plus;
        std::string num1 = num, num2 = std::to_string(val), ans;
        val = std::abs(val);
        long long tmp, i = 1;
        for (; (i < num1.length()) && (tmp = std::atoi(num1.substr(0, i).c_str()), tmp < val); i++) {}
        tmp = std::atoi(num1.substr(0, i).c_str());
        if (val > tmp)
            return 0;
        else {
            ans += std::to_string(tmp / val);
            tmp = tmp % val;
            num1.erase(0, i);
            while (num1.length() > 0) {
                if (tmp == 0 && num1 == std::string(num1.length(), '0'))
                    return ans + num1;
                if (tmp != 0) {
                    tmp *= 10;
                    tmp += std::atoi(num1.substr(0, 1).c_str());
                    num1.erase(0, 1);
                    ans += std::to_string(tmp / val);
                    tmp = tmp % val;
                } else {
                    ans += std::to_string(std::atoi(num1.substr(0, 1).c_str()) / val);
                    tmp = std::atoi(num1.substr(0, 1).c_str()) % val;
                    num1.erase(0, 1);
                }
            }
        }
        return (isMinus ? "-" : "") + ans;
    }

    BigNum BigNum::operator/(BigNum val) {
        if (std::string(val) == "0")
            throw std::invalid_argument("Division by zero");
        bool isMinus = val.sign != sign;
        std::string num1 = num, num2 = std::string(val);
        BigNum L = BigNum(0), R = BigNum(num1), m;
        while (L < R - BigNum(1)) {
            m = L + (R - L) / 2;
            if (m * BigNum(num2) >= BigNum(this->num)) R = m;
            else L = m;
        }
        if (R * BigNum(num2) > BigNum(this->num))
            R -= BigNum(1);
        return (isMinus && R != BigNum(0) ? "-" : "") + std::string(R);
    }

    BigNum BigNum::operator%(BigNum val) {
        bool isMinus = val.sign != sign;
        val = BigNum(std::string(val));
        auto ans = BigNum(this->num) - BigNum(this->num) / val * val;
        return (isMinus && ans != BigNum(0) ? "-" : "") + std::string(ans);
    }

    BigNum::operator std::string() {
        return num;
    }

    std::string BigNum::Tostring() {
        return (sign == Sign::Minus ? "-" : "") + num;
    }

    BigNum BigNum::pow(BigNum val) {
        BigNum ans = 1;
        bool isMinus = sign == Sign::Minus && BigNum(std::string(val)) % BigNum(2) != BigNum(0);
        if (val.sign == Sign::Plus) {
            for (BigNum i; i < val; i = i + BigNum(1))
                ans = ans * BigNum(this->num);
        } else {
            for (BigNum i; i < BigNum(std::string(val)); i++)
                ans = ans / BigNum(this->num);
        }
        if (isMinus && std::string(ans) != "0")
            ans.sign = Sign::Minus;
        return ans;
    }

    std::istream &operator>>(std::istream &is, BigNum &lg) {
        std::string s;
        is >> s;
        lg = s;
        return is;
    }

    std::ostream &operator<<(std::ostream &os, BigNum lg) {
        return os << lg.Tostring();
    }
} // project