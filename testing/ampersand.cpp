#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int m=3;

int & SetValue(){return m;} // SetValue 等價於 返回值 m

void swap(int & a, int & b){
	int tmp;
	tmp=a;a=b;b=tmp;
}

int main(){

	int n = 7;
	int & r = n;
	r = 4; 
	cout << n << endl; // output = 4
	n = 5 ;
	cout << r << endl; // output = 5
	int & r1 = r;
	cout << r1 << endl; // output = 5

	int n1=1,n2=2;
	swap(n1,n2); //a = n1, b = n2
	cout << n1 << " " << n2 << endl; 

	SetValue()=6; //可以對他賦值，等於對返回值m賦值
	cout << m << endl;

	return 0;
}