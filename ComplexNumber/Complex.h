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
        float new_re = re * b.re - im * b.im;
        float new_im = im * b.re + re * b.im;
        return Complex{ new_re, new_im };
    };

    // NOTE: Определение деления комплексных чисел.
    // b * x = a | * b', где b' - сопряжённое к b.
    // b * b' * x = a * b'.
    // |b|^2 * x = a * b'.
    // x = a * b' * (1 / |b|^2).
    Complex operator/(const Complex& b) const {
        Complex b_conj = b.get_conjugate();
        float b_modulus = b.get_modulus();
        Complex b_modulus_squared_inv = Complex{ 1.0f / (b_modulus * b_modulus), 0.0f };

        return *this * b_conj * b_modulus_squared_inv;
    };

    Complex get_conjugate() const {
        return Complex{ re, -im };
    }

    float get_modulus() const {
        return std::sqrt(re * re + im * im);
    }

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
