#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no for counting";
    cin>>n;
    int count=1;
    int i=1;
    //int j=1;
    while(i<n){
        
        while(j<n){
            cout<<count;
           count= count+1;
           j+1;

        }
        cout<<endl;
        i++;
    }
    return 0;
}