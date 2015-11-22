#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

class student{
	private :
	char name[100];
	char id[100];
	int age;
	unsigned int grade1, grade2, grade3, grade4;
	public :
	student (char a[], int b, char c[], unsigned int d, unsigned int e, unsigned int f, unsigned int g){
		strcpy(name,a);
		age = b;
		strcpy(id,c);
		grade1 = d;
		grade2 = e;
		grade3 = f;
		grade4 = g;
		cout << name << "," << age << "," << id << "," << (grade1+grade2+grade3+grade4)/4 << endl;
	}
};

int main(){

	char name[100], id[100];
	int age;
	unsigned int grade1, grade2, grade3, grade4;
	char a;
    cin.getline(name, 100, ',');
    cin >> age;
    a = getchar();
    cin.getline(id, 100, ',');
    cin >> grade1 >> a >> grade2 >> a >> grade3 >> a >> grade4;
 
	student A(name,age,id,grade1,grade2,grade3,grade4);

	return 0;
}