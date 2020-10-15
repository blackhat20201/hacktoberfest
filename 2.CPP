#include<iostream.h>
#include<conio.h>
class Complex
{
private:
int real, img;
public:
Complex(int r = 0, int i =0)
{
real = r;
img = i;
}
void print()
{
cout << real<< "+" << img<< "i" << endl;
}
friend Complex operator + (Complex const &, Complex const &);
};
Complex operator + (Complex const &c1, Complex const &c2)
{
return Complex(c1.real + c2.real, c1.img + c2.img);
}
int main()
{
clrscr();
Complex c1(1, 2), c2(10, 11);
Complex c3 = c1 + c2;
c3.print();
getch();
return 0;
}