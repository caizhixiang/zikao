#include <iostream>
using namespace std;
class Point {              //ʹ����������������point
private:
	int x,y;              //˽�����ݳ�Ա
public:
	void Setxy(int a,int b)	{x=a;y=b;}
	void Move(int a,int b)	{x=x+a;y=y+b;}
	void Display( )  {cout<<x<<","<<y<<endl;}
	int Getx( ) {return x;}
	int Gety( ) {return y;}
};      //�ඨ���ԷֺŽ���
void print(Point *a){a->Display( );}
void print(Point&a){a.Display( );}
void main( ){
	Point A,B,*p;  //���������ָ��
	Point &RA=A;  //��������RAΪ����A������
	A.Setxy(25,55);           //ʹ�ó�Ա����Ϊ����A��ֵ
	B=A;         //����ͨ��int x��25��y��55�������˽�����ݸ�ֵ�Ǵ����
	p=&B;
	p->Setxy(112,115);  //ʹ��ָ����ú���setxy����B��ֵ
	print (p);          //����ָ����ʾ����B������
	p->Display( );       //ʹ��ָ�����display������ʾ����B������
	RA.Move(-80,23);
	print(A);           //ʹ�ö���Ͷ���ָ���Ч��һ��
	print(RA);
}