#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

const int Max = 23; //少用define
const char * schoolname = "PKU";

int main(){

	int n,m;
	const int *p = &n;
//	*p = 5; //error 不能改變所指向的值
	n = 4; //ok
	p = &m ; //ok 可轉指向別人

	const int *p1;
		  int *p2;
	p1 = p2; //ok
//	p2 = p1; //error
	p2 = (int *)p1; //ok casting

	return 0;
}