#include <iostream>
using namespace std;
class Two;  //��������Two���Ա���One����Two&
class One {
private:
    int x;
public:
    One(int a){x=a;}  //������One�Ĺ��캯��Ϊ�������к���
    int Getx( ){return x;}  
    void func(Two&);  //��������ĳ�Ա����������Ϊ��Two������
};           //��One��������
class Two{
private:
    int y;
public:
    Two(int b){y=b;}  //������Two�Ĺ��캯��Ϊ�������к���
    int Gety( ){return y;} 
    friend void One::func(Two&);  //������One�ĳ�Ա����Ϊ�������Ԫ����
};            //��Two��������
void One::func(Two& r) {r.y=x;}  
void main( ){
    One Obj1(5);    //������One�Ķ���Obj1
    Two Obj2(8);    //������Two�Ķ���Obj2
    cout<<Obj1.Getx( )<<" "<<Obj2.Gety( )<<endl;  //���5 8
    Obj1.func(Obj2);   
    cout<<Obj1.Getx( )<<" "<<Obj2.Gety( )<<endl; //���5 5
}