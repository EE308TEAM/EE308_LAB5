#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

void fun3(int numq,double OneQue);
int main(){
	fun3(1,100);
	return 0;
}

void fun3(int numq,double OneQue){
	double num2,num3;
	int num4;
    int count=0;
    double inValue;
    
	for(int i=0;i<numq;i++){
		num2=rand()%10;
		num3=rand()%10;
		num4=rand()%4;
		if(num4==1){
			cout << "Output: " << num2 << "+" << num3 << "=?" << endl;
			cout << "Input: ";
			cin >> inValue;
			if(inValue==(num2+num3))
			    count++;
		}else if(num4==2){
			cout << "Output: " << num2 << "-" << num3 << "=?" << endl;
			cout << "Input: ";
			cin >> inValue;
			if(inValue==(num2-num3))
			    count++;
		}else if(num4==3){
			cout << "Output: " << num2 << "*" << num3 << "=?" << endl;
			cout << "Input: ";
			cin >> inValue;
			if(inValue==(num2*num3))
			    count++;
		}else if(num4==0){
			cout << "Output: " << num2 << "/" << num3 << "=?" << endl;
			cout << "Input: ";
			cin >> inValue;
			if(inValue==(num2/num3))
			    count++;
		}
	}
	if(count==numq)
	   cout << "end!All right,that's great!You score is 100." << endl;
	else{
		cout << "end!Wrong question,your score is " << count*OneQue << "." << endl;
	}
}
