#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
using namespace std;

void Grade34(int q){
	
	double result;
	int n, num1, num2, ans, i;
    int c = 0, w = 0;
    
    for(i = 0;i < q;i++){
    	n = rand() % 5;
    	srand((unsigned)time(NULL));
		num1 = rand();
    	num2 = rand();
    	if(n == 1){
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
		}else if(n == 2){
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
		}else if(n == 3){
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
    	    result = (num1 / num2)*100/100.00;
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
		cout << "end! Wrong question, your score is 50" << result << "." << endl;
	}
	
}
