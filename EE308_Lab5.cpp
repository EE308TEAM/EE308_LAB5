#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip> 
#include <time.h>
using namespace std;
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

