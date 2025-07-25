#pragma once

#include <string>
#include <format>

class Complex {
public:
    Complex() = default;
    Complex(float real, float imaginary) : a(real), b(imaginary) {};

    std::string to_string() const {
        std::string a_str = std::to_string(a);
        std::string b_abs_str = std::to_string(std::abs(b));
        std::string sign = b < 0 ? "-" : "+";
        return std::format("{} {} {}i", a_str, sign, b_abs_str);
    };

private:
    float a;
    float b;
};
