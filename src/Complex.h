#ifndef Complex_h
#define Complex_h

#include <iostream>

class Complex{//A Complex class for operations with numbers.
    private:
        char __i_sign;
        Complex(int r_num, int r_den, int i_num, int i_den); // For complex division only.
        int __r_num, __r_den, __i_num, __i_den;
        bool __fraction_form;
        char __i_sign_num;
    public:
        int _real;
        int _imaginary;
        Complex();
        Complex(int real, int imaginary); // Creates a complex number.
        Complex conjugate() const; // Returns it's conjugate.
        Complex opposite() const; // Returns it's oppsited.
        Complex operator+(const Complex &complex) const; // Add two complex numbers.
        Complex operator-(const Complex &complex) const; // Subtract two complex numbers.
        Complex operator-() const; // Same as the opposite method.
        Complex operator*(const Complex &complex) const;
        friend Complex operator*(int number, const Complex &complex);
        Complex mult_by_i();// Multiply this complex number by the constant i.
        Complex operator/(const Complex &complex) const;
        bool operator==(const Complex &complex) const;
        bool operator!=(const Complex &complex) const;
        bool operator>(const Complex &complex) const;
        bool operator>=(const Complex &complex) const;
        bool operator<(const Complex &complex) const;
        bool operator<=(const Complex &complex) const;
        friend std::ostream& operator<<(std::ostream& out, const Complex &complex);
};

int MCD(int a, int b);// Yes, it does what you think it does.

#endif
