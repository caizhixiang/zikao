#include<iostream>

//int max(int, int); // ���������������������ĺ���ԭ��
// ���庬���������������ĺ���
int max(int m1, int m2)
{
	return (m1>m2)? m1:m2;
}
//�ȶԱ�25��39�����ô�ֵ��55�Ա�
void main()
{
	cout <<max(55,max(25,39))<<endl;
}
