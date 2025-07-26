#pragma once

#include <string>
#include <format>

class Complex {
public:
    Complex() = default;
    Complex(float real, float imaginary) : re(real), im(imaginary) {};

    Complex operator+(const Complex& b) const {
        return Complex{ re + b.re, im + b.im };
    };

    Complex operator-(const Complex& b) const {
        return Complex{ re - b.re, im - b.im };
    };

    Complex operator*(const Complex& b) const {
        return Complex();
    };

    std::string to_string() const {
        std::string a_str = std::to_string(re);
        std::string b_abs_str = std::to_string(std::abs(im));
        std::string sign = im < 0 ? "-" : "+";
        return std::format("{} {} {}i", a_str, sign, b_abs_str);
    };

private:
    float re;
    float im;
};
