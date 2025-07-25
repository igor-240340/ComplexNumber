#include <iostream>

#include "Complex.h"

void test_complex();
void test_complex_constructor();

int main() {
    test_complex();

    return 0;
}

void test_complex() {
    test_complex_constructor();
}

void test_complex_constructor() {
    Complex a{ 13.0f, -5.0f };
    std::cout << a.to_string() << '\n';
}
