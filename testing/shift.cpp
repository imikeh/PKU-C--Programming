#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


int main(){

	int n = n & 0xffffff00; // 將n的低8位全置成0 而其他不變
		n &= 0xffffff00; // same as above

		if((n & 0x80) == 0x80){}//判斷n的第七位從右往左是否為1，成立則第七位為1

		n |= 0xff; //將n的低8位全置成1 而其他不變

		n ^= 0xff //兩個不相同1 相同0，將某變量中的某些位取反，其他保留不變，如這個是將n的低8位取反

		int a = 5, b = 7;
		a = a ^ b;
		b = b ^ a;
		a = a ^ b; //不通過變量交換

		n = ~21 //將0變1 1變0 21=0xffffffea

		n = 9 << 4 //將a 二進位 全部左移 b位 高位丟棄 低位補0，左移一位等於乘以2

		n = //將a 二進位 全部右移 b位 移出最右邊位就丟棄 a 的值不因運算而改變，左邊原符號為1 則右移高位捕1 反之亦然，右移除以2


	return 0;
}