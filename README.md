## Complex Number

Implementation of complex number system.

## Features
- Addition.
- Subtraction.
- Multiplication.
- Division.
- Conjugate.
- Modulus.

### Usage

```cpp
#include <iostream>
#include <format>

#include "Complex.h"

int main() {
    Complex a{ 3.0f, -4.3f };
    Complex b{ -7.13f, 2.223f };

    std::cout << std::format("({}) + ({}) = {}\n", a.to_string(), b.to_string(), (a + b).to_string());
    std::cout << std::format("({}) - ({}) = {}\n", a.to_string(), b.to_string(), (a - b).to_string());
    std::cout << std::format("({}) * ({}) = {}\n", a.to_string(), b.to_string(), (a * b).to_string());
    std::cout << std::format("({}) / ({}) = {}\n", a.to_string(), b.to_string(), (a / b).to_string());

    std::cout << '\n';

    Complex a_conjugate = a.get_conjugate();
    float a_modulus = a.get_modulus();
    std::cout << std::format("a = {}\n", a.to_string());
    std::cout << std::format("*a = {}\n", a_conjugate.to_string());
    std::cout << std::format("|a| = {}\n\n", a_modulus);

    return 0;
}
```

## Documentation
/docs contains some theory and derivations on complex numbers.
