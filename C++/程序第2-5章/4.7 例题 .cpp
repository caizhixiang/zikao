#include <iostream>
using namespace std;
class Point{                        //�������Point
int x,y;                    //û��˵���ģ�Ĭ��������private
public:
void Set(int a,int b){x=a;y=b;}  //���������Ĺ��г�Ա����
int Getx( ){return x;}           //���������Ĺ��г�Ա����
int Gety( ){return y;}           //���������Ĺ��г�Ա����
};
class Rectangle{                            //���������Rectangle
Point Loc;                           
int H,W;                            //���������ĸ�H�Ϳ�W
public:
void Set(int x,int y,int h,int w);    
	 Point * GetLoc( );     //��������Point��ָ��ĳ�Ա����GetLoc
	 int GetHeight( ){return H;}         //���������Ĺ��г�Ա����
	 int GetWidth( ){return W;}          //���������Ĺ��г�Ա����
};
void Rectangle::Set(int x,int y,int h,int w){Loc.Set(x,y); H=h;W=w;}
Point * Rectangle::GetLoc( ){return &Loc;}        
void main( ){
Rectangle rect;              //����Rectangle��Ķ���rect
rect.Set(10,2,25,20);        
cout<<rect.GetHeight( )<<","<<rect.GetWidth( )<<","; //���"25,20,"
Point * p=rect.GetLoc( );                      
cout<<p->Getx( )<<","<<p->Gety( )<<endl;    //���"10,2"
}