#include <iostream>
using namespace std;
class Point {
private:
	int x,y;
public:
	Point( );  //�������������Ĺ��캯��
	Point(int,int);  //���������������Ĺ��캯��
	~Point(){
		cout<<"xigouhanshu"<<endl;}
};
Point::Point( ):x(0),y(0)  {
	cout<<"Initializing default"<<endl;}
//���岻�������Ĺ��캯��
Point::Point(int a,int b):x(a),y(b)  //��������������Ĺ��캯��
{
	cout<<"Initializing"<<a<<","<<b<<endl;}
void main( ){
	Point A;  //ʹ�ò��������Ĺ��캯����������A
	Point B(15,25);  //ʹ�ô������Ĺ��캯����������B
	Point C[2];  //ʹ�ò��������Ĺ��캯��������������C
	Point D[2]={Point(5,7),Point(8,12)};  //ʹ�ô������Ĺ��캯��������������D
	Point *ptr1=new Point;  //ʹ�ò��������Ĺ��캯��������̬����ptr1
	Point *ptr2=new Point(5,7);  //ʹ�ô������Ĺ��캯��������̬����ptr2
	delete ptr1;  //ɾ����̬����ptr1���ͷ��ڴ�ռ�
	delete ptr2;  //ɾ����̬����ptr1���ͷ��ڴ�ռ�
}