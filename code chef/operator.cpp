#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=4;
    cout<<"a&b : "<<(a&b)<<endl; //and operator
    cout<<"a|b :"<<(a|b)<<endl;//or operator
    cout<<"~a:  "<<~a<<endl;// not operator
    cout<<"a^b: "<<(a^b)<<endl;// xor operator
    cout<<(20>>2)<<endl;// Right shift
    cout<<(20<<2)<<endl;//there are left shift
    return 0;
}