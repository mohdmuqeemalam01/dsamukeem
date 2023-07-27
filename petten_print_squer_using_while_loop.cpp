#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of for printing number for pattern squer"<<endl;
    cin>>n;
   int i=1;
   
    while(i<=n){
         int j=1;
         while(j<=n){
            cout<<j; // opposite no ke liye cout<<n-j
            j++;
         }
         cout<<endl;
         i++;
    }
    return 0;
}