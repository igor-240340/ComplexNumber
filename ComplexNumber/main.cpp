#include <iostream>

#include "Complex.h"

void test_complex();
void test_complex_constructor();
void test_complex_add();
void test_complex_sub();
void test_complex_mul();

int main() {
    test_complex();

    return 0;
}

void test_complex() {
    test_complex_constructor();
    test_complex_add();
    test_complex_sub();
    test_complex_mul();
}

void test_complex_constructor() {
    Complex a{ 13.0f, -5.0f };
    std::cout << a.to_string() << '\n';
}

void test_complex_add() {
    Complex a{ 13.0f, -5.0f };
    Complex b{ 4.0f, 7.0f };
    Complex c = a + b;

    std::cout << std::format("({}) + ({}) = {}", a.to_string(), b.to_string(), c.to_string()) << '\n';
}

void test_complex_sub() {
    Complex a{ 13.0f, -5.0f };
    Complex b{ 4.0f, 7.0f };
    Complex c = a - b;

    std::cout << std::format("({}) - ({}) = {}", a.to_string(), b.to_string(), c.to_string()) << '\n';
}

void test_complex_mul() {
    Complex a{ 13.0f, -5.0f };
    Complex b{ 4.0f, 7.0f };
    Complex c = a * b;
    
    std::cout << std::format("({}) * ({}) = {}", a.to_string(), b.to_string(), c.to_string()) << '\n';
}
