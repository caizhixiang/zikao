#include <iostream>
using namespace std;
class object{
private:
    int val;  //����int�͵�object���˽�����ݳ�Աval
public:
    object( ):val(0) {cout<<"��Ϣһ"<<endl;}  //���岻��������object��Ĺ��캯��objectΪ��������
    object(int i):val(i) {cout<<"��Ϣ��"<<val<<endl;}  //�����һ��������object��Ĺ��캯��objectΪ��������
    ~object( ) {cout<<"��Ϣ��"<<val<<endl;}  //����object�����������Ϊ��������
};                               //��object����������
class container{
private:
    object one;  //����object��Ķ���oneΪcontainer��Ķ����Ա����ʼ��˳��Ϊ��һ
    object two;  //����object��Ķ���twoΪcontainer��Ķ����Ա����ʼ��˳��Ϊ�ڶ�
    int data;    //����int�͵�container���˽�����ݳ�Աdata����ʼ��˳��Ϊ����
public:
    container( ):data(0) {cout<<"��Ϣ��"<<endl;}  //���岻��������container��Ĺ��캯��containerΪ��������
    container(int i,int j,int k);  //������3��int�Ͳ�����container��Ĺ��캯��container
    ~container( ) {cout<<"��Ϣ��"<<data<<endl;}  //����container�����������Ϊ��������
};                           //��container����������
container::container(int i,int j,int k):two(i),one(j) 
{data=k;cout<<"��Ϣ��"<<data<<endl;}  //�����3��int�Ͳ�����container��Ĺ��캯��
void main( )
{
	container obj,anObj(5,6,10);
} 