#include <iostream>
using namespace std;
class Point {
private:
	 int X,Y;
public:
	 Point(int a=0,int b=0){X=a;Y=b;cout<<"��ʼ����"<<endl;}
          //������Ĭ�ϲ����Ĺ��캯������Ϊ�������г�Ա������
Point(const Point &p);      //�������ƹ��캯��
int GetX( ){return X;}
int GetY( ){return Y;}
void Show( ){cout<<"X="<<X<<",Y="<<Y<<endl;}  
~Point( ){cout<<"ɾ����"<<X<<","<<Y<<endl;}  
};
Point::Point(const Point &p){X=p.X;Y=p.Y;cout<<"������ʼ����"<<endl;}
      //�������ʹ�ö�����������βεĸ��ƹ��캯��
void display(Point p){p.Show( );}    //��������������β�
void disp(Point &p){p.Show( );}      //�������������������β�
Point fun( ){Point A(101,202);return A;}  //��������ֵΪ�������

void main( ){
   Point A(42,35);    //����������A����ֵ
   Point B(A);       //����������B�����ø��ƹ��캯����A��ʼ��B
   Point C(58,94);   //����������C����ֵ
   cout<<"called display(B)"<<endl;
   display(B);    
   cout<<"��һ����"<<endl;
   cout<<"called disp(B)"<<endl;
   disp(B);
   cout<<"call C �� fun( )"<<endl;
   C=fun( );
   cout<<"called disp( C )"<<endl;
   disp(C);
   cout<<"out��"<<endl;
}
