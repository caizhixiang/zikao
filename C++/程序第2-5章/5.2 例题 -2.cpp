#include <iostream>
using namespace std;
class test{
private:
    int n;    //����test���˽�����ݳ�Աn
public:
    test(int i){ n=i;cout<<"����:"<<i<<endl;}  //���庬һ�����Ͳ�����test����������캯��Ϊ���г�Ա����
    ~test( ){cout<<"����:"<<n<<endl;}  //����test���������������
    int getn( ){return n;}     //����test�����������getn
    void inc( ){++n;}    //��������Ϊ��ʹ��n֮ǰ��ʹn��ֵ��1
};
void main( )
{
    cout<<"ѭ����ʼ:"<<endl;
    for(int i=0;i<3;i++){
      static test a(3);  //����test��ľ�̬����a����ʼ��
      test b(3);  //����test�����ͨ����b����ʼ��
      a.inc( );  //test��ľ�̬����a������ͬ��ĳ�Ա����inc
      b.inc( );  //test�����ͨ����b������ͬ��ĳ�Ա����inc
      cout<<"a.n="<<a.getn( )<<endl;
      cout<<"b.n="<<b.getn( )<<endl; 
	}
    cout<<"ѭ������"<<endl;
    cout<<"�˳�������"<<endl;
}
