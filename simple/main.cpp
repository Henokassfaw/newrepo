#include <iostream>

using namespace std;

int main()
{

 for (int i = 1;i<3;)
 {
	double num1,num2,num3,num4,num5,sum;
	short int chk;
	char ne;
    cout << "******************************************THIS IS HENOK SIMPLE CALLCULATOR****************************************" << endl;
    cout << endl;
    cout << "YOU CAN DO MULTIPLCATION,ADDITION,SUBSTRACTION,DIVSION"<<endl;
    cout << endl;
    cout <<" press the character you want to calculate"<<endl;
    cin >> ne;
      if (ne == '+')  {
		cout << "please enter how many number you want to add"<<endl;
		cin >>chk;
		     if(chk ==2){
			  cout <<" please enter two number "<<endl;
			   cin >>num1>>num2;
		      sum =num1+num2;
		cout <<"the sum of two numbers is " <<sum<<endl;
		cout << "if you want to quit press &" <<endl;
		    }

		    else if(chk == 3) {
				cout <<"please enter three numbers " <<endl;
				cin>>num1>>num2>>num3;
				sum=num1+num2+num3;
				cout <<"the sum of the three numbers is "<<sum<<endl;
				cout << "if you want to quit press &" <<endl;
		    }
		        else if (chk == 4)  {
					cout <<"please enter four numbers is " <<endl;
					cin >>num1>>num2>>num3>>num4;
					sum=num1+num2+num3+num4;
					cout <<"the sum of the four numbers is "<<sum<<endl;
					cout << "if you want to quit press &" <<endl;
		        }
	                else if ( chk == 5) {
						cout <<"please enter five numbers " <<endl;
						cin>>num1>>num2>>num3>>num4>>num5;
						sum=num1+num2+num3+num4+num5;
						cout <<"the sum of five numbers is " <<sum<<endl;
						cout << "if you want to quit press &" <<endl;

	                }

      }

		 if ( ne == '-'){
		cout <<"please enter how many numbers you want to substract " <<endl;
		cin>>chk;
		        if (chk == 2){
				cout <<"please enter two number" <<endl;
				cin>>num1>>num2;
				sum =num1-num2;
				cout <<"the substraction of two number is" <<sum;
				cout << "if you want to quit press &" <<endl;
		       }

		             else if(chk == 3) {
						 cout <<"please enter three numbers" <<endl;
						cin>>num1>>num2>>num3;
						sum =num1-num2-num3;
						cout <<"the substraction of the three numbers is "<<sum<<endl;
						cout << "if you want to quit press &" <<endl;
						}
						  else if (chk == 4){
							  cout <<"please enter four numbers"<<endl;
							  cin>>num1>>num2>>num3>>num4;
							  sum=num1-num2-num3-num4;
							cout <<"the substractiion of four number is" <<sum<<endl;
							cout << "if you want to quit press &" <<endl;
						}

		}
		   if (ne == '*')
		{
          cout <<"please enter how many number you want to multiplay" <<endl;
          cin>>chk;
			 if (chk == 2) {
				cout << "please enter two number"<<endl;
			cin >>num1>>num2;
			sum=num1 * num2;
			cout << "the two numbers multiplication is  " <<sum;
			cout << "if you want to quit press &" <<endl;
			}
			   else if(chk == 3){
				cout <<"please enter three numbers"<<endl;
				cin>>num1>>num2>>num3;
				sum=num1*num2*num3;
				cout <<"the three number multiple is" <<sum<<endl;
				cout << "if you want to quit press &" <<endl;
			   }
			       else if (chk == 4){
					cout <<"please enter four numbers"<<endl;
					cin>>num1>>num2>>num3>>num4;
					sum=num1*num2*num3*num4;
					cout <<"the multiple of the four number is "<<sum <<endl;
					cout << "if you want to quit press &" <<endl;
			       }
			           else if(chk == 5){
						cout <<"please enter five numbers"<<endl;
						cin>>num1>>num2>>num3>>num4>>num5;
						sum=num1*num2*num3*num4*num5;
						cout <<"the multiple of five numbers is "<<sum<<endl;;
						cout << "if you want to quit press &" <<endl;
			           }

		}
		    if (ne == '/'){
			cout <<"please enter the number you wants to divide"<<endl;
            cin>>chk;
                 if(chk == 2) {
					cout <<"please enter the number you want to divide"<<endl;
					cout << "please enter two number"<<endl;
					cin >>num1>>num2;
			         sum = num1 / num2;
			         cout <<"the division of two number is " <<sum<<endl;;
			         cout << "if you want to quit press &" <<endl;
                }
                      else if(chk==3){
						 cout<<"please enter three numbers"<<endl;
						 cin>>num1>>num2>>num3;
						 sum=num1/num2/num3;
						 cout <<"the division of three number is "<<sum<<endl;
						 cout << "if you want to quit press &" <<endl;
                     }
                            else if(chk == 4){
							  cout<<"please enter four numbers "<<endl;
							   cin>>num1>>num2>>num3>>num4;
							   sum=num1/num2/num3/num4;
							   cout <<"the division of four numbers is "<<sum<<endl;
							   cout << "if you want to quit press &" <<endl;
                           }
                                else if(chk==5){
								  cout<<"please enter five numbers"<<endl;
								  cin>>num1>>num2>>num3>>num4>>num5;
								  sum=num1/num2/num3/num4/num5;
								  cout <<"the division of five numbers is "<<sum<<endl;
								  cout << "if you want to quit press &" <<endl;
                               }


		}

		if ( ne == '&'){
			break ;
		}


 }




    return 0;
}
