#include <iostream>
#include <string>
using namespace std;

string input(const int);     //��������string��Ķ���ĺ���

void main( ){
    int n;
    cout<<"Input n=";
    cin>>n;                    //����Ҫ������ַ�������n
    string str=input(n);       //���������صĶ��󸳸�����str
    cout<<str<<endl;
}
string input(const int n) 
{   
	string s1,s2;              //��������string��Ķ��󣨾�Ϊ�մ���
    for(int i=0;i<n;i++)       //��ν���n���ַ���
	{cin>>s1;s2=s2+s1+" ";}    //��ν����յ��ַ�������
    return s2;                 //�����ַ��������������
}   