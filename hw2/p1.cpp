#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
class A {
public:
    int val;
    A(int v=0){val = v;};
    int & GetObj(){ 
       	return val;
    }
};
int main()  {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5; // 5 對 函數返回值val 附值 
    cout << a.val << endl;
    return 0;
}

