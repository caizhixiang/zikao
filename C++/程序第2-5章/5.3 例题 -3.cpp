#include <iostream>
using namespace std;
class Two{
    int y;
public:
    friend class One;  //������OneΪ��Two����Ԫ
};
class One{                 //��One�ĳ�Ա����������Two����Ԫ����
    int x;
public:
    One(int a,Two&r,int b){x=a;r.y=b;}  //������One�Ĺ��캯�������༰��Two�Ķ���ֵ
    void Display(Two&);  //������Ont�ĳ�Ա���������ܷ�����Two�ĳ�Ա
};
void One::Display(Two&r){cout<<x<<" "<<r.y<<endl;}   
void main( ){
    Two Obj2;  
    One Obj1(23,Obj2,55);  
    Obj1.Display(Obj2);    
}
