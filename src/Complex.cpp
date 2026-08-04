#include "Complex.h"

Complex::Complex(){
    _real = 1;
    _imaginary = 1;
    __i_sign = '+';
    __fraction_form = false;
    
}

Complex::Complex(int n1, int d1, int n2, int d2){
    _real = n1 + n2;     /*for erros*/
    _imaginary = d1 + d2;
    __r_num = n1;
    __r_den = d1;
    __i_num = n2;
    __i_den = d2;
    int _mcd1 = MCD(__r_num, __r_den);
    int _mcd2 = MCD(__i_num, __i_den);

    __r_num /= _mcd1;
    __r_den /= _mcd1;
    __i_num /= _mcd2;
    __i_den /= _mcd2;
    __i_sign_num = n2 >= 0 ? '+' : '\0';
    __fraction_form = true;
}

Complex::Complex(int a, int b){
    _real = a;
    _imaginary = b;
    __i_sign = (_imaginary < 0) ? '\0' : '+';
    __fraction_form = false;
}

Complex Complex::conjugate() const{
    return Complex(_real, _imaginary * -1);
}

Complex Complex::opposite() const{
    return Complex(_real * -1, _imaginary * -1);
}

Complex Complex::operator+(const Complex &complex) const{
    return Complex(_real + complex._real, _imaginary + complex._imaginary);
}

Complex Complex::operator-(const Complex &complex) const{
    return Complex(_real - complex._real, _imaginary - complex._imaginary);
}

Complex Complex::operator-() const{
    return Complex(_real * -1, _imaginary * -1);
}

bool Complex::operator==(const Complex &complex) const{
    return (_real == complex._real) && (_imaginary == complex._imaginary);
}

bool Complex::operator!=(const Complex &complex) const{
    return (_real != complex._real) && (_imaginary != complex._imaginary);
}

bool Complex::operator>(const Complex &complex) const{
    return (_real > complex._real) && (_imaginary > complex._imaginary);
}

bool Complex::operator>=(const Complex &complex) const{
    return (_real >= complex._real) && (_imaginary >= complex._imaginary);
}

bool Complex::operator<(const Complex &complex) const{
    return (_real < complex._real) && (_imaginary < complex._imaginary);
}

bool Complex::operator<=(const Complex &complex) const{
    return (_real <= complex._real) && (_imaginary <= complex._imaginary);
}

Complex Complex::operator*(const Complex &complex) const{
    int factor1 = ((_real * complex._real) - (_imaginary * complex._imaginary));
    int factor2 = ((_real * complex._imaginary) + (_imaginary * complex._real));

    return Complex(factor1, factor2);
}

Complex Complex::operator/(const Complex &complex) const{
    Complex complex_conjugate = complex.conjugate();
    int r_num = ((_real * complex_conjugate._real) - (_imaginary * complex_conjugate._imaginary));
    int r_den = ((complex_conjugate._real * complex_conjugate._real) + (complex_conjugate._imaginary * complex_conjugate._imaginary));
    int i_num = ((_imaginary * complex_conjugate._real) + (_real * complex_conjugate._imaginary));
    int i_den = ((complex_conjugate._real * complex_conjugate._real) + (complex_conjugate._imaginary * complex_conjugate._imaginary));

    return Complex(r_num, r_den, i_num, i_den);
}

std::ostream& operator<<(std::ostream& out, const Complex &complex){
    if (complex.__fraction_form){
        if (complex._real != 0 && complex._imaginary != 0){
            out << complex.__r_num << "/" << complex.__r_den << complex.__i_sign_num << complex.__i_num << "/" << complex.__i_den << j;
        }else{
            out << "";
        }
    }else{
        out << complex._real << complex.__i_sign << complex._imaginary << j;
    }

    return out;
}

int MCD(int a, int b){
    int _MCD;
    a = a < 0 ? a*-1 : a;
    b = b < 0 ? b*-1 : b;
    int res;

    while (b != 0){
        res = a % b;
        a = b;
        b = res;
    }
    
    _MCD = a;

    return _MCD;
}