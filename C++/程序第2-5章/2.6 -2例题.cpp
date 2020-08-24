#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

void main( )
{
    string str1="wearehere!",str2(str1);
    reverse(str1.begin( ),str1.end( ));  //str1����
    cout<<str1<<endl;     //���str1="!ereheraew"

    copy(str1.begin( ),str1.end( ),str2.begin( ));
    sort (str1.begin( ),str1.end( ));  //��Ĭ����������str1
    cout<<str1<<endl;            //���str1��"!aeeeehrrw"
    cout<<str2<<endl;            //���str2��"!ereheraew"

    reverse_copy(str1.begin( ),str1.end( ),str2.begin( ));
    cout<<str2<<endl;            //���str2��"wrrheeeea!"

    reverse(str2.begin( )+2,str2.begin( )+8); //��ʱstr2��"wreeeehra!"
    copy(str2.begin( )+2,str2.begin( )+8,ostream_iterator<char>(cout));  
    //���"eeeehr"

    sort(str1.begin( ),str1.end( ),greater<char>( ));  //str1��������
    cout<<str1<<endl;            //���str1��"wrrheeeea��"

    str1.swap(str2);             //��������
    cout<<str1<<" "<<str2<<endl;
      //���wreeeehra!(str1)  wrrheeeea!(str2)

    cout<<(*find(str1.begin( ),str1.end( ),'e')=='e')<<" "
        <<(*find(str1.begin( ),str1.end( ),'e')=='o')<<endl;
}            //���1 0 ��ע�������find���ǳ�Ա����find
