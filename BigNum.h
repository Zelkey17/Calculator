//
// Created by ash on 23.11.22.
//

#ifndef CALCULATOR_BIGNUM_H
#define CALCULATOR_BIGNUM_H

#include <string>
#include<vector>
#include <stdexcept>

namespace calculator {

    enum Sign {
        Plus, Minus
    };

    class BigNum {
    private:
        std::string num;
    public:
        Sign sign;

        BigNum();

        [[nodiscard]] BigNum(std::string value);

        [[nodiscard]] BigNum(long long value);

        BigNum &operator+=(const BigNum &value);

        BigNum &operator-=(const BigNum &value);

        BigNum &operator*=(const BigNum &value);

        BigNum &operator/=(const BigNum &value);

        BigNum &operator%=(const BigNum &value);

        BigNum operator++(int d);

        BigNum operator--(int d);

        BigNum &operator++();

        BigNum &operator--();

        bool operator==(BigNum val);

        bool operator!=(BigNum val);

        bool operator<=(const BigNum &val);

        bool operator>=(const BigNum &val);

        bool operator>(BigNum val);

        bool operator<(BigNum val);

        BigNum operator+(BigNum val);

        BigNum operator-(BigNum val);

        BigNum operator*(BigNum val);

        BigNum operator/(long long val);

        BigNum operator/(BigNum val);

        BigNum operator%(BigNum val);

        [[nodiscard]] operator std::string();

        std::string Tostring();

        BigNum pow(BigNum val);

        friend std::istream &operator>>(std::istream &is, BigNum &lg);

        friend std::ostream &operator<<(std::ostream &os, BigNum lg);
    };

} // calculator

#endif //CALCULATOR_BIGNUM_H
