class Test{
    static int x;            //������̬���ݳ�Ա
    int n;
public:
    Test( ){ }      //�����޲�����Test��Ĺ��캯��
    Test(int a,int b){x=a;n=b;}  //���庬����������Test��Ĺ��캯��TestΪ��������
    static int func( ){return x;}  //���徲̬��Ա����funcΪ��������
    static void sfunc(Test&r,int a){r.n=a;}  //���徲̬��Ա����sfuncΪ��������,������Test�������r��������aΪ����
    int Getn( ){return n;}  //�����Ա����GetnΪ��������
};                    //��Test����������
int Test::x=25;    //��ʼ����̬���ݳ�Ա
#include <iostream>
using namespace std;
void main( ){
    cout<<Test::func( );    //x�ڶ������֮ǰ�ʹ��ڣ����"25"
    Test b,c;       //�����޲����Ĺ��캯������Test��Ķ���b��c
    b.sfunc(b,58);  //���ö���b�����ݳ�Աn��nֵΪ58��rΪb������
    cout<<" "<<b.Getn( );  //���" 58"
    cout<<" "<<b.func( );  //x�������ж������" 25"
    cout<<" "<<c.func( );  //x�������ж������" 25"
    Test a(24,56);  //���ú����������Ĺ��캯������Test��Ķ���a������x��ֵ��Ϊ24����a��˽�����ݳ�Աn��ֵ56
    cout<<" "<<a.func( )<<" "<<b.func( )<<" "<<c.func( )<<endl; 
}