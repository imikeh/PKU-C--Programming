#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
	// 分配一個變量
	// P = new T T為任意類型名，P是類行為 T * 的pointer，動態分配出一片大小為sizeof(T)的內存空間，並將該空間的起始位置給P
	int *p;
	p = new int;
	* p = 5;

	// 分配一個數組
	// P = new T[n] 動態分配出 n*sizeof(T)的空間
	int *pn;
	int i = 5;
	pn = new int[i*20];
	pn[0]=20;

	// new 的返回值 皆為 T * ex : int *
	int * pp = new int;

	// 釋放 是釋放動態分配的空間
	delete p;
	delete pp; // 不能重複delete

	delete [] pn; //該pointer必須指向new出來的數組 


	return 0;
}