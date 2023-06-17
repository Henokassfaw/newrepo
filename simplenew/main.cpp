#include <iostream>
using namespace std;
double mul(double,double);
double mul2(double,double,double);
double add(double ,double );
double add2(double,double,double):
double sub(double ,double );
double div(double,double);
int    rem(int,int);

int main()
{
	 int cheak1,cheak2,cheak3;
	 int rem1,rem2,accpt1,accpt2,rem4,rem5,rem6;
	 short choice;
	 double a,b,c;
	 char tocontinue='c';
	 double reciv,reciv2;
	 double accept1,accept2,accept3,accept4;
  cout<<"********************************************THIS IS HENOK SIMPLE CALCULATOR******************************************"<<endl;
  cout<<endl;
  cout<<"you can addition ,multiplication and subtraction,division,reminder "<<endl;
  cout<<endl;
  cout<<" 1 for multiplication, 2 for addition , 3 for subtraction , 4 for division ,5 for reminder 8" <<endl;
  cin>>choice;
switch(choice) {

        case 1:
    	while(tocontinue=='c'){
		cout<<"how many number you want to multiply"<<endl;
		cin>>cheak1;
		 if(cheak1==2){
		cout<<"please enter two numbers"<<endl;
		cin>>accept2>>accept3;
		mul(accept2,accept3);
		reciv = mul(accept2,accept3);
		cout<<"the multiplication on two numbers "<<reciv<<endl;
		 }
		   else if(cheak1==3){
		cout<<"please enter 3 numbers"<<endl;
		cin>>a>>b>>c;
		mul2(a,b,c);
		reciv2=mul2(a,b,c);
		cout<<"the multiplication of three numbers is "<<reciv2<<endl;
		   }
		cout<<"please enter c to continue or press any char to quit"<<endl;
		cin>>tocontinue;
    	}while(tocontinue=='c');
    	break;
    	case 2:
				 do{
				cout<<"how many number you want to add"<<endl;
		        cin>>cheak1;
		        if(cheak1==2){
			    cout<<"please enter two numbers"<<endl;
			    cin>>accept2>>accept3;
			    add(accept2,accept3);
			    reciv=add(accept2,accept3);
			    cout<<"the sum of two numbers is "<<reciv<<endl;
		        }
		           else if(cheak1==3){
				cout<<"please enter three numbers"<<endl;
			    cin>>a>>b>>c;
		        add2(a,b,c);
			    reciv2=add2(a,b,c);
			    cout<<"the sum of three numbers is "<<reciv2<<endl;
		           }
			    cout<<"please enter c to continue or press any char to quit"<<endl;
			    cin>>tocontinue;
			    break;
			}while(tocontinue=='c');


	     case 3:
					do{
				    cout<<"please enter two numbers"<<endl;
				    cin>>accept2>>accept3;
				    sub1(accept2,accept3);
				    reciv = sub(accept2,accept3);
				    cout<<"the subtraction of two number is "<<reciv<<endl;
				    cout<<"please enter c to continue or press any char to quit"<<endl;
			        cin>>tocontinue;
			        }while(tocontinue=='c');
			        break;


	      case 4:
					do{
		            cout<<"please enter two numbers"<<endl;
		            cin>>accept2>>accept3;
		            reciv = div(accept2,accept3);
		            cout<<"the division of two numbers is "<<reciv<<endl;
					cout<<"please enter c to continue or press any char to quit"<<endl;
			        cin>>tocontinue;
			        break;
			        }while(tocontinue=='c');
		 case 5:
			        do{
						cout<<"please enter two numbers "<<endl;
						cin>>rem1>>rem2;
						rem4=rem(rem1,rem2);
						cout<<"the reminder of two numbers is "<<rem4<<endl;
						cout<<"please enter c to continue or press any char to quit"<<endl;
						cin>>tocontinue;
						break;
			        }while(tocontinue=='c');




		  default:
			cout<<"you enter wrong number";

}

    return 0;
}


double add(double num1,double num2){
	return num1 + num2;
}
double add2(double num1,double num2,double num3){

     return num1+num2+num3;
}
double mul(double num1,double num2){

    return num1 * num2 ;
}
double mul2(double num1,double num2,double num3){

    return num1 * num2 * num3;
}
double sub(double num1,double num2){

   return num1 - num2;
}
double div(double num1,double num2){
	return num1/num2;
}
int rem(int rem5,int rem6){
	return rem5 % rem6;
}

