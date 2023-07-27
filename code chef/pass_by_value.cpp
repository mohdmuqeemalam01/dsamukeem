#include<iostream>
using namespace std;
void dummy(int n){
    n++;
    cout<<"The number is "<<n<<endl;

}
int main(){
    int n;
    dummy(n);
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<" value n is "<<n<<endl;
}