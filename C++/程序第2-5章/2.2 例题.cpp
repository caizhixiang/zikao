#include <iostream>
using namespace std;

class Point
{      //������Point
private:
	double x,y;  //��Point�����ݳ�Ա
public:
	Point( ){ };  //��Point���޲������캯��
	Point(double a,double b) {x=a;y=b;}   //�������������Ĺ��캯��
	void Setxy(double a,double b) {x=a;y=b;} //��Ա���������������������ݳ�Ա
	void Display( ){cout<<x<<"\t"<<y<<endl;} //��Ա��������ָ����ʽ������ݳ�Ա
};
void main( )
{
	Point a;  //������Point�Ķ���a
	Point b(18.5,10.6);  //������Point�Ķ���b����ʼ��
	a.Setxy(10.6,18.5);  //Ϊ����a�����ݳ�Ա��ֵ
	a.Display();  //��ʾ����a�����ݳ�Ա
	b.Display();  //��ʾ����b�����ݳ�Ա
}