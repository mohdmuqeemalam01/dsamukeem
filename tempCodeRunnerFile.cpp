/*find combination  nCr*/
#include<iostream>
using namespace std;
int factorail(int n){
    int i;
    int fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;

    }
    return fact;
}
int ncr(int n, int r){
    
      int num=factorail(n);
      int domain=factorail(r)*factorail(n-r);
      return (num/domain);
}
int main(){
    int n,r;
    cout<<"Enter value  of n and r for for calculating combination"<<endl;
    cin>>n>>r;
   int combination= ncr( n,r);
    cout<<"The value of combination is "<<combination;
    return 0;
}