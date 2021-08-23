#include <iostream>
using namespace std;
typedef struct complex_numb
{
 double real, imag;
} complex_numb;
complex_numb sum(complex_numb a, complex_numb b)
{
 complex_numb c;
 c.real = a.real + b.real;
 c.imag = a.imag + b.imag;
 return c;
}
int main()
{
 complex_numb a, b, c;
 cout << "For 1st complex number \nEnter real and imaginary part respectively :\n";
 cin >> a.real >> a.imag;
 cout << "FOr 2nd complex number \nEnter real and imaginary part recpectively :\n";
 cin >> b.real >> b.imag;
 c = sum(a, b);
 cout << "sum = " << c.real << " " << showpos << c.imag << "i";
 return 0;
}
