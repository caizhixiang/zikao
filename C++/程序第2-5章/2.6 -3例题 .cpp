#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main( )
{
     string str[ ]={"we are here!","where are you?","welcome"};
     for(int i = 0;i<3;i++)
	 {
        copy(str[i].begin( ),str[i].end( ),ostream_iterator<char>(cout));
        cout<<endl;
	 }    //forѭ�������зֱ����we are here!  Where are you?  Welcome!
     
	 str[0].swap(str[2]);  //������str[0]��"Welcome!" str[2]��"we are here!"
     str[0].swap(str[1]);  //������str[0]��"Where are you?" str[1]��"Welcome!"
     
	 for(i=0;i<3;i++)
        cout<<str[i]<<endl;      //forѭ�������зֱ����Where are you?
}      
