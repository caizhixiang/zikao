#include <iostream>
using namespace std;
class A{
private:
    int val;
public:
    A(int i){val=i;}    //��һ�����Ͳ�������A�Ĺ��캯��
    int value(int a){return val+a;}
};
void main( ){
    int(A::*pfun)(int);    //����ָ����A�ĳ�Ա������ָ��pfun
    pfun=A::value;    //ָ��ָ��A�ľ���ĳ�Ա����value
    A obj(10);    //������A�Ķ���obj�������ù��캯����ʼ��
    cout<<(obj.*pfun)(15)<<endl;  //����obj����ָ��ָ��ĳ�Ա����value�����25
    A *pc=&obj;    //��������ΪA��ָ��pc����ָ��ָ����A�Ķ���obj
    cout<<(pc->*pfun)(15)<<endl;  //ָ��pc���ó�Ա����value�����25
}
