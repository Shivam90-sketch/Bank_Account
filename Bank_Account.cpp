#include<iostream>
using namespace std;
int saving_acc();
int current_acc();
int buiness_acc();
int basic_detail();
int msg();
int main(){
	int n,n1,bal,amt;
	char ch;
	cout<<"\t\t\t\t\t\t\tWelcome Mybank!!!\n\n\n";
	cout<<"Do You want to 'Open' Account!!!";
	cout<<"\nIf YES then press 1 For opening Account \n Press 2 for Atm Machine \t";
	cin>>n1;
	switch(n1){
		case 1:
		       cout<<"Which type of Account do you want to open ";
			   cout<<"\n 1 Saving Account ";
			   cout<<"\n 2 Current Account ";
			   cout<<"\n 3 Business Account ";
			   cout<<"\n Enter your choice : \t";
		       cin>>n;
		       switch(n)
		       		{
		       			case 1:
		       				saving_acc();
		       				break;
		       			case 2:
		       				current_acc();
		       				break;
		       			case 3:
		       				buiness_acc();
		       				break;
		       			default :
		       				cout<<"oop's\n You have input wrong input...!!!!";
		       				cout<<"Visit Again :)";
		       				break;
			   			}
			   		break;
		case 2:
			do{
			
					cout<<"\t\t\t\t\t\t\tWelcome to Mybank Atm Machine :)";
					cout<<"Enter Your balance :    ";
					cin>>bal;
					cout<<"\n\n";
					cout<<"Enter your Amount to widrawal :    ";
					cin>>amt;
					cout<<"\n\n";
						if(amt>bal){
								cout<<"\noop's..!!! \n You do not have enough credit";
								cout<<bal;
								cout<<"\nThanks for using this Atm ";
								cout<<"\nVisit Again :) :)";
							}
						else
							{
								cout<<"\nPlease wait !!!";
								cout<<"\nYour trancation is in under process ...";
								msg();
								cout<<"\nPlease collect your cash ==";
								cout<<"\nThanks for using this Atm ";
								cout<<"\nVisit Again :) :)";
							}
				cout<<"\n \n Do you want to do Again Transaction ? Y / N    ";
				cin>>ch;
			}while(ch=='Y' || ch=='y');
			break;
	}
}


int saving_acc(){
	//int ac;
	//cout<<"Enter your name :    ";
	//cin>>ac;
	basic_detail();
	}
int current_acc(){
	//basic_detail(int);
}
int buiness_acc(){
	//basic_detail(int);
}
int msg(){
	
}
int basic_detail(){
	int age,dd,mm,yy,r,sum,count=1;
	char name[10];
 string pan,add;
	long long num;
	cout<<"\n\n";
	cout<<"\nEnter your name : ";
	cin>>name;
	
	//cout<<"\nEnter your Last name : ";
    //cin>>mdname;
    
	cout<<"\n\n";
	
	cout<<"Enter your Age : ";
	cin>>age;
	
	cout<<"\n\n";
	
	cout<<"Enter your Contact Number : ";
	cin>>num;
	//num_check();
	cout<<"\n\n";
	
	cout<<"\nEnter your Date of Birth in dd/mm/yyyy : ";
	cout<<"\nEnter your Date of DOB ";
	cin>>dd;
	if(dd>0 && dd<=31){
		cout<<"\nEnter your Month of DOB ";
		cin>>mm;
			if(mm>=1 && mm<=12)
				{
					cout<<"\nEnter your Year of DOB ";
					cin>>yy;
					while(yy>0)
					{
						r=yy%10;
						sum=sum+r;
						yy/=10;
						count++; //cout should be start with 1
					}
					if(count==5)
					{
						cout<<"\nPlease Wait..!!!";
						cout<<"Your detail is saving .";
					}
					else
						cout<<"\n\nWrong Input ...!!!";
				}
				else
					cout<<"\n\nWrong Input ...!!!";
			}
			else
				cout<<"\n\nWrong Input ...!!!";
	cout<<"\n\nEnter your Addhar Number : ";
	cin>>add;
//	if(add!=12)
//	{
//		cout<<"\n you have enter Wrong addhar number .!!!!";
//	}
	cout<<"\n\n";
	cout<<"\nEnter your Pan Card";
	getline(cin,pan);
	
	cout<<"\n\n";
	
	cout<<"\nPlease wait..!!!";
	cout<<"\nYour detail is saving....";
}


// This is message which appear when transaction is done or money widdraw
int nsg(int tran_bal){
cout<<tran_bal;
cout<<"\n \t\t\t\tAmount "<<tran_bal<<"Is widdraw form ATM if it is \n\t\t\t\t not you then Immdetly call  9028705939 ";
cout<<"\n \t\t\t\t Transaction id is :- ";  //there a work is pending and the work generat
} 
