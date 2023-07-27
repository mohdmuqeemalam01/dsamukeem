/*switch statement 8*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    char ch;
 
cout<<"Enter value for Addition 1.\n Enter value for subtraction 2.\n Enter value for division 3 \n Enter vlaue for multiplication 4  "<<endl ;
cin>>ch;
 
switch(ch)
{
    case '1':{
       cout<<"Enter value A and B"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"Answer is "<<c;
    }
    break;
    case '2':
    {
       cout<<"Enter value A and B"<<endl;
    cin>>a>>b;
    c=a-b;
     cout<<"Answer is "<<c;
    }
     break;
     case '3':
     {
        cout<<"Enter value A and B"<<endl;
    cin>>a>>b;
     c=a/b;
      cout<<"Answer is "<<c;
     }

      break;
     case '4':{
        cout<<"Enter value A and B"<<endl;
    cin>>a>>b;
     c=a*b;
      cout<<"Answer is "<<c;
     }
      break;
      default: cout<<"you Enter wrong choose \n please try again" <<endl;

      
      }
      return 0;

}