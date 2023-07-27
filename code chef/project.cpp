#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class bank{
	char Name[100],add[100],y;
	int balance;
	public:
		void open_account();
		void deposite_money();
		void withdraw_money();
		void display_account();
};
void bank::open_account(){
	cout<<"Enter your Full Name: "<<endl;
	cin.ignore();
	cin.getline(Name,100);
	cout<<"Enter your Address: "<<endl;
	cin.getline(add ,100);
	cout<<"What type of account you want to open  saving account  currunt account"<<endl;
	cin>>y;
	cout<<"Enter amount for deposite: "<<endl;
	cin>>balance;
	cout<<"Your account is created: "<<endl;	
}
void bank::deposite_money(){
	int a;
	cout<<"How much you deposite: "<<endl;
	cin>>a;
	balance+=a;
	cout<<"Total amount your is deposite: "<<" "<< balance<<endl;
	}
void bank::display_account(){
		cout<<"Your full is: "<<Name<<endl;
		cout<<"Your address is "<<add<<endl;
		cout<<"Types of account that you open: "<<y<<endl;
		cout<<"Amount your are deposite: "<<balance<<endl;
	}
void bank::withdraw_money(){
	float amount;
	cout<<"Withdraw "<<endl;
	cout<<"Enter amount to withdraw: "<<endl;
	cin>>amount;
	balance=balance-amount;
	cout<<"Now total amount is left: "<<balance<<endl;
	}
int main(){ 
    int x, ch;
    do{
	
    bank obj;
	cout<<"1.) Open Account "<<endl;
	cout<<"2.) Deposite money"<<endl;
	cout<<"3.) Withdraw money"<<endl;
	cout<<"4.) Display Account"<<endl;
	cout<<"5.) Exit"<<endl;	
	switch(ch){
		case 1: cout<<"Open Account "<<endl;
	           obj.open_account();
		break;
		case 2: cout<<"Deposite money "<<endl;
		obj.deposite_money();
		break;
		case 3: cout<<"withdraw money"<<endl;
		obj.withdraw_money();
		break;
		case 4: cout<<"Display account "<<endl;
			obj.display_account();
			break;
        case 5: 
		 if(ch==5){
		 	exit(1);
		 	
		 }	
		 default:
		 	cout<<"This is not exist try again "<<endl;
	}
	cout<<"Do you select next option then press: y"<<endl;
	cout<<"if you want to exit then press: N"<<endl;
	x=getch();
	if(x=='n'|| x=='N'){
		exit(0);
	}
}
	while(x=='y'|| x=='Y');
	
	getch();
       
       
	return 0;
}