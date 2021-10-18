#include <iostream>
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
//fun level 1
//fun level 2
//fun level 3
