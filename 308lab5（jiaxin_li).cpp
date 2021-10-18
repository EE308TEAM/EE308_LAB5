#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<time.h>
using namespace std;

void fun3(int numq,double OneQue);
int main(){
	fun3(3,100);
	return 0;
}

void fun3(int numq,double OneQue){
	double num2,num3;
	int num4;
    int count=0;
    double inValue;
    	
	for(int i=0;i<numq;i++){
		srand((unsigned)time(NULL));
		num2=rand();
		num3=rand();
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
