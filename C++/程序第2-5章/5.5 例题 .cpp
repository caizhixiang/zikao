class Test{
    int num;
    double f1;
public:
    Test (int n){num=n;}  //���1��һ�������Ĺ��캯��
    Test(int n,double f){num=n;f1=f;}  //���2�����������Ĺ��캯��
    int GetNum( ){return num;}
    float GetF( ){return f1;}
};
#include <iostream>
using namespace std;
void main( ){
    Test one[2]={2,4},*p;  //���庬����Ԫ�ص�Test���������one��һ��ָ��Test��Ķ���ָ��p��one������Ԫ�ص������1��ʼ��
    Test two[2]={Test(1,3.2),Test(5,9.5)};  //���庬����Ԫ�ص�Test��Ķ�������two��two������Ԫ�ص������2��ʼ��
    for (int i=0;i<2;i++)
       cout<<"one["<<i<<"]="<<one[i].GetNum( )<<",";
    p=two;  //�������������������׵�ַ�����Կ�������������ָ��p��ֵ
    for(i=0;i<2;i++,p++)
       cout<<"two["<<i<<"]=("<<p->GetNum( )<<","<<p->GetF( )<<"),";
}