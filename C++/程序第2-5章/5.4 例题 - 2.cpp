#include <iostream>
using namespace std;
class Base{
private:
    double x,y;
    const double p;
public:
    Base(double m,double n,double d):p(d) {x=m;y=n;}  
//���1�������ݳ�Աֻ��ͨ����ʼ���б�����ó�ֵ
    void Show( );
    void Show( ) const;    //��������Ա����
};
    void Base::Show( ){cout<<x<<","<<y<<" p="<<p<<endl;}  //���2
    void Base::Show( ) const {cout<<x<<","<<y<<" const p="<<p<<endl;}  //���3

void main( ){
    Base a(8.9,2.5,3.1416);    //���4���������1���г�ʼ��
    const Base b(2.5,8.9,3.14);      //���5���������1���г�ʼ��
    b.Show( );       //���6���������3�����"2.5,8,9 const p=3.14"
    a.Show( );       //���7���������2�����"2.5,8,9 p=3.1416"
}
