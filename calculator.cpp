#include<iostream>
using namespace std;
int add(int a,int b){
		cout<<"first value:";
		cin>>a;
		cout<<"second value:";
		cin>>b;
	return a+b;
}
int sub(int a,int b){
		cout<<"first value:";
		cin>>a;
		cout<<"second value:";
		cin>>b;
		if(a>b){ 
				return a-b;
		}
		else
	        return b-a;
}
int main(){
		int choice,x,y,z;
	do{
	cout<<"\a**********WELCOME HOME!!***************\nCHOOSE FROM:\n\t1.ADDITION\n\t2.SUBTRACTION\n\t3.MULTIPLICATION\n\t4.COMPARE\n\t5.EVEN OR ODD\n\t6.EXIT\nYOUR CHOICE:";

		cin>>choice;
		switch(choice){
			case 1:
				cout<<"SUM:"<<add(x,y);
				break;
			case 2:
			    cout<<"DIFFERENCE:"<<sub(x,y);
				break;	
		}
	}while(choice !=6);

	
	return 0;
}
