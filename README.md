# Complex
Operations with complex numbers, C++

## Features:
- Easy to use.

## Example of use:
```c++
#include "Complex.h"

int main(void){

    Complex z0(4, 2), z1(2, -2);
    
    std::cout << "Z0 = " << z0 << std::endl;
    std::cout << "Z1 = " << z1 << std::endl;
    std::cout << "\tZ0 + Z1 = " << z0 + z1 << std::endl;
    std::cout << "\tZ0 - Z1 = " << z0 - z1 << std::endl;
    std::cout << "\tZ0* = " << z0.conjugate() << std::endl;
    std::cout << "\tZ1* = " << z1.conjugate() << std::endl;
    std::cout << "\tZ0 × Z1 = " << z0 * z1 << std::endl;
    std::cout << "\t-Z0 = " << -z0 << std::endl;
    std::cout << "\tZ0 ÷ Z1 = " << z0 / z1 << std::endl;
    std::cout << "\tZ0 ≠ Z1 -> " << std::boolalpha << (z0 != z1) << std::endl;
    std::cout << "\tZ0 = Z1 -> " << std::boolalpha << (z0 == z1) << std::endl;
    std::cout << "\tZ0 > Z1 -> " << std::boolalpha << (z0 > z1) << std::endl;
    std::cout << "\tZ0 >= Z1 -> " << std::boolalpha << (z0 >= z1) << std::endl;
    std::cout << "\tZ0 < Z1 -> " << std::boolalpha << (z0 < z1) << std::endl;
    std::cout << "\tZ0 <= Z1 -> " << std::boolalpha << (z0 <= z1) << std::endl;

    return 0;
}
```

## Output:
```consolas
Z0 = 4+2j
Z1 = 2-2j
        Z0 + Z1 = 6+0j
        Z0 - Z1 = 2+4j
        Z0* = 4-2j
        Z1* = 2+2j
        Z0 × Z1 = 12-4j
        -Z0 = -4-2j
        Z0 ÷ Z1 = 1/2+3/2j
        Z0 ≠ Z1 -> true
        Z0 = Z1 -> false
        Z0 > Z1 -> true
        Z0 >= Z1 -> true
        Z0 < Z1 -> false
        Z0 <= Z1 -> false
```
