#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
class Sample{
public:
    int v;
    Sample(int n):v(n) { }
    Sample(const Sample & a){
    	v=(a.v)*2;
    }
};
int main() {
    Sample a(5);
    Sample b = a;
    cout << b.v;
    return 0;
}