#include <iostream>
using namespace std;
class ConstFun{
public:
    int f5( ) const{return 5;}    //����Ա���������س�������
    int Obj( ){return 45;}        //һ���Ա����
};
void main( ){
    ConstFun s;  //����ConstFun���һ�����s
    const int i=s.f5( );  //����sʹ�ó���Ա����f5( )��ʼ��������i
    const int j=s.Obj( ); //����sʹ��һ���Ա����Obj( )��ʼ��������j
    int x=s.Obj( );  //����sʹ��һ���Ա����Obj( )��ʼ������x
    int y=s.f5( );  //����sʹ�ó���Ա����f5( )��ʼ������y
    cout<<i<<" "<<j<<" "<<x<<" "<<y<<endl;  //���"5 45 45 5"
    ConstFun const d;  //����ConstFun��ĳ�����d
    int k=d.f5( );    //������dֻ�ܵ��ó���Ա����f5( )
    cout<<"k="<<k<<endl;    //���"k=5"
}
