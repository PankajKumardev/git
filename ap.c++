#include <iostream>
using namespace std;

	void swapbyreference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

	void swapbyvalue(int a , int b) {
		int temp = a;
	    a = b;
	    b = temp;
	} 
	
	
	void swapbypointer (int *a , int *b) {
		int temp = *a;
	    *a = *b;
	    *b = temp;
	} 

int main() {

	
	int a = 10; int b= 20;
	cout << endl <<"Before swap";
	cout <<endl << a <<endl;
	cout << b <<endl;


	swapbyvalue(a,b);
		
		cout << "After swap";
		cout <<endl << a <<endl;
		cout << b <<endl;

cout <<"swap by value " << endl;

    swapbypointer(&a,&b);
	
	cout << "After swap";
	cout <<endl << a <<endl;
	cout << b <<endl;
	
}