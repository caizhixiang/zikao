#include <iostream>
#include <complex>
#include <string>
using namespace std;
template <class T>
void printer(complex <T> a)
{
    string str1("real is "),str2="imag is ";
    cout<<str1<<a.real( )<<','<<str2<<a.imag( )<<endl;
}

void main( ){
    int i(0);
    complex <int> num1(2,3);
    complex <double> num2(3.5,4.5);//�ù��캯��complex��ʼ��num2����ֵ
    printer(num1);
    printer(num2);
}
