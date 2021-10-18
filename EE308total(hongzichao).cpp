#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
void Grade12(int);
void Grade34(int);
void Grade56(int);
int main()
{
	int grade;
	int num;
	cout << "Please enter your grade?"<<endl;
	cin>>grade;//get grade
	cout <<"Please enter the number of questions?"<<endl;
	cin>>num;//get the number of questions
	if(grade==1|grade==2)Grade12(num);
	if(grade==3|grade==4)Grade34(num);
	if(grade==5|grade==6)Grade56(num);
	return 0;
	
}
void Grade12(int numq){
	double oneque=100.00/numq;
	double score=0;
	int count=0;
	int answer;
	for (int i=1;i<=numq;i++){
		srand((unsigned)time(NULL)); 
		int number1 = rand() % 100;
		int number2 = rand() % 100;
		int sign= rand()%2;
		if(sign==0){
			cout<<number1<<"+"<<number2<<"=?";
			answer=number1+number2;
		}else if(sign==1){
			cout<<number1<<"-"<<number2<<"=?";
			answer=number1-number2;
 		}/*else if(sign==2){
			cout<<number1<<"*"<<number2<<"=?";
			answer=number1*number2;			
		}else if(sign==3){
			cout<<number1<<"/"<<number2<<"=?";
			answer=number1/number2;
		}*/
		int ans;
		cin>>ans;
		if(ans==answer){
			score+=oneque;
			count++;
		}
	}
	if(count==numq){
		cout<<"end!All right,that's great!your score is 100";
	}else{
		cout<<"end!Wrong question,your score is ";
		cout<<fixed<<setprecision(2)<<score;	
	}
	
}

void Grade34(int q){
	
	double result, ans, num1, num2;
	int n, i;
    int c = 0, w = 0;
    
    for(i = 0;i < q;i++){
    	n = rand() % 4;
    	srand((unsigned)time(NULL));
		num1 = rand();
    	num2 = rand();
    	if(n == 0){
    		num1 = rand();
    	    num2 = rand();
    	    result = num1 + num2;
            cout << num1 << "+" << num2 << "=?" << endl;
            cin >> ans;
            if(ans == result){
				c++;
			}else{
				w++;
			}
		}else if(n == 1){
			num1 = rand();
    	    num2 = rand();
    	    result = num1 - num2;
            cout << num1 << "-" << num2 << "=?" << endl;
            cin >> ans;
            if(ans == result){
				c++;
			}else{
				w++;
			}
		}else if(n == 2){
			num1 = rand();
    	    num2 = rand();
    	    result = num1 * num2;
            cout << num1 << "*" << num2 << "=?" << endl;
            cin >> ans;
            if(ans == result){
				c++;
			}else{
				w++;
			}
		}else{
			num1 = rand();
    	    num2 = rand();
    	    result = ((double)((int)((num1/num2+0.005)*100)))/100;
            cout << num1 << "/" << num2 << "=?" << endl;
            cin >> ans;
            if(ans == result){
				c++;
			}else{
				w++;
			}
		}
	}
	
	result = c * 100 / q;
		
	if(c == q){
		cout << "Output: end! All right, that's great! Your score is 100." << endl;
	}else{
		cout << "end! Wrong question, your score is " << result << "." << endl;
	}
	
}

void Grade56(int numq){
	double num2,num3;
	int num4;
    int count=0;
    double inValue;
    double OneQue=100/numq;	
	for(int i=0;i<numq;i++){
		srand((unsigned)time(NULL));
		num2=rand()/100.00;
		num3=rand()/100.00;
		num4=rand()%4;
		if(num4==1){
			cout << "Output: " << num2 << "+" << num3 << "=?" << endl;
			cout << "Input: ";
			cin >> inValue;
			double a=((double)((int)((num2+num3+0.005)*100)))/100;
			if(inValue==a)
			    count++;
		}else if(num4==2){
			cout << "Output: " << num2 << "-" << num3 << "=?" << endl;
			cout << "Input: ";
			cin >> inValue;
			double a=((double)((int)((num2-num3+0.005)*100)))/100;
			if(inValue==a)
			    count++;
		}else if(num4==3){
			cout << "Output: " << num2 << "*" << num3 << "=?" << endl;
			cout << "Input: ";
			cin >> inValue;
			double a=((double)((int)((num2*num3+0.005)*100)))/100;
			if(inValue==a)
			    count++;
		}else if(num4==0){
			cout << "Output: " << num2 << "/" << num3 << "=?" << endl;
			cout << "Input: ";
			cin >> inValue;
			double a=((double)((int)((num2/num3+0.005)*100)))/100;
			if(inValue==a)
			    count++;
		}
	}
	if(count==numq)
	   cout << "end!All right,that's great!You score is 100." << endl;
	else{
		cout << "end!Wrong question,your score is " << count*OneQue << "." << endl;
	}
}
