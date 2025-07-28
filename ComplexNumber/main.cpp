#include <iostream>

#include "Complex.h"

void test_complex();
void test_complex_constructor();
void test_complex_add();
void test_complex_sub();
void test_complex_mul();
void test_complex_div();
void test_complex_get_conjugate();
void test_complex_get_modulus();

int main() {
    test_complex();
    return 0;
}

void test_complex() {
    test_complex_constructor();
    test_complex_add();
    test_complex_sub();
    test_complex_mul();
    test_complex_div();
    test_complex_get_conjugate();
    test_complex_get_modulus();
}

void test_complex_constructor() {
    std::cout << "TEST CONSTRUCTOR:\n";

    Complex a{ 13.0f, -5.0f };
    std::cout << a.to_string() << "\n\n";
}

void test_complex_add() {
    std::cout << "TEST ADD:\n";

    Complex a{ 13.0f, -5.0f };
    Complex b{ 4.0f, 7.0f };
    Complex c = a + b;

    std::cout << std::format("({}) + ({}) = {}", a.to_string(), b.to_string(), c.to_string()) << "\n\n";
}

void test_complex_sub() {
    std::cout << "TEST SUB:\n";

    Complex a{ 13.0f, -5.0f };
    Complex b{ 4.0f, 7.0f };
    Complex c = a - b;

    std::cout << std::format("({}) - ({}) = {}", a.to_string(), b.to_string(), c.to_string()) << "\n\n";
}

void test_complex_mul() {
    std::cout << "TEST MUL:\n";

    Complex a{ 13.0f, -5.0f };
    Complex b{ 4.0f, 7.0f };
    Complex c = a * b;

    std::cout << std::format("({}) * ({}) = {}", a.to_string(), b.to_string(), c.to_string()) << "\n\n";
}

void test_complex_div() {
    std::cout << "TEST DIV:\n";

    Complex a{ 13.0f, -5.0f };
    Complex b{ 4.0f, 7.0f };
    Complex c = a / b;

    std::cout << std::format("({}) / ({}) = {}", a.to_string(), b.to_string(), c.to_string()) << '\n';
    std::cout << std::format("({}) * ({}) = {}", c.to_string(), b.to_string(), (c * b).to_string()) << "\n\n";
}

void test_complex_get_conjugate() {
    std::cout << "TEST CONJUGATE:\n";

    Complex a{ 13.0f, -5.0f };
    Complex a_conjugate = a.get_conjugate();

    std::cout << std::format("a = {}", a.to_string()) << '\n';
    std::cout << std::format("a* = {}", a_conjugate.to_string()) << "\n\n";
}

void test_complex_get_modulus() {
    std::cout << "TEST MODULUS:\n";

    Complex a{ 13.0f, -5.0f };
    float a_modulus = a.get_modulus();

    std::cout << std::format("a = {}", a.to_string()) << '\n';
    std::cout << std::format("|a| = {}", a_modulus) << "\n\n";
}
