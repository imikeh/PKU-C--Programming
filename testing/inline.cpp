#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

inline int Max(int a, int b){
	if(a > b)return a;
	return b;
}

	int Max(double f1, double f2);
	int Max(int n1, int n2);
	int Max(int n1, int n2, int n3);

	void func(int x, int y=2, int z=3){}

int main(){
	// 缺省可提高擴充性
	func(10); // 會自動補2,3
	func(10,8); // 會自懂補3
//  func(10,,8); // error 只能最右邊的連續幾個參數缺

	return 0;
}