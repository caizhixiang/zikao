#include <iostream>
#include <string>       //�ڳ����а���string���ͷ�ļ�
using namespace std;

void main( )
{
	string str1("We are here!"); //�ù��캯��string�������str1����ֵ
	string str2="Where are you?";//�ù��캯��string�������str2����ֵ
	cout<<str1[0]<<str1[11]<<","<<str1<<endl;
	cout<<str2[0]<<str2[13]<<","<<str2<<endl;
	cout<<"please input a word:";
	cin>>str1;    //����good
	cout<<"lenght of the "<<str1<<" is "<<str1.size( )<<"."<<endl;
}