#include <iostream>
using namespace std;
float * input(int&);      //��������ָ��ĺ���input

void main( )
{
    int num;
    float *data;          //������input����һ�µ�ָ�����data
    data=input(num);      //���ú���������ָ�븳��data
    if(data){             //data���գ�������ָ����
         for(int i=0;i<num;i++)     //ʹ��ָ����±���ʽ
         cout<<data[i]<<" ";    //ѭ�����data����
    delete data;               //�ͷ�ָ��ռ�õ��ڴ�
	}
}

float *input(int& n)               //���ݣ����巵��ָ��ĺ���input
{   
	cout<<"Input number:";         //ѯ���������ݵĸ���
    cin>>n;
    if(n<=0) return NULL;          //����ĸ������������˳�
    float * buf=new float[n];      //�����������ݵĸ�����������ռ�
    if(buf==0) return NULL;       //���벻���ռ����˳�
    for(int i=0;i<n;i++)
         cin>>buf[i];
    return buf;                    //����ָ��
}
