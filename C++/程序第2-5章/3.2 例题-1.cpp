#include <iostream>
using namespace std;

int a[ ]={2,4,6,8,10,12};    //����ȫ������a
int & index(int i);         //�������õĺ���index��ԭ������

void main( ){
index(3)=16;             //��a[3]��ֵ��Ϊ16
cout<<index(3)<<endl;    //���a[3]��ֵ16
}

int &index(int i)            //���巵�����õĺ���index
{
	return a[i];}   
