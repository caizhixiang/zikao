#include <iostream>
#include <string>
using namespace std;
void swap(string *,string *); //���庯��swap��ʹ��string���ָ����Ϊ�����β�
void main( ){
    string str1("����"),str2("��ȥ");  //�������str1��str2
    swap(&str1,&str2);  // ����ԭ���в�����������ָ�룬����string *s1=&str1��
//����ȫ��ȷ�ģ��������������пɽ�����str1��str2���׵�ֵַ&str1��&str2��Ϊʵ�Σ������ݸ��β�
    cout<<"���غ�str1��"<<str1<<"str2="<<str2<<endl;
}

void swap(string *s1,string *s2) //string��Ķ���ָ��s1��s2��Ϊ�����β�
{
    string temp=*s1;*s1=*s2;*s2=temp;
    cout<<"����Ϊ��str1��"<<*s1<<"str2="<<*s2<<endl;
}