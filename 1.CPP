#include<iostream.h>
#include<conio.h>
class Complex
{
private:
int real, imag;
public:
Complex(int r = 0, int i =0)
{
real = r;
imag = i;
}
Complex operator + (Complex const &o)
{
Complex c;
c.real = real + obj.real;
c.imag = imag + obj.imag;
return c;
}
void print()
{ cout << real << " + i" << imag << endl;
}
};

int main()
{
clrscr();
Complex c1(10, 5), c2(2, 4);
Complex c3 = c1 + c2;
c3.print();
getch();
return 0;
}
