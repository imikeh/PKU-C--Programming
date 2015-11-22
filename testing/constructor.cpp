#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class student{
	public :
	student(string a="null", string b="null", string c="null", string d="null"){
		name = a;
		department = b;
		major = c;
		grade = d;
	}

	void print(){
		cout << name << " " << department << " " << major << " " << grade << endl;
	}
	private :
		string name;
		string department;
		string major;
		string grade;

};

int main(int argc, char const *argv[])
{
	
	student a("Mike","Engineering","Computer Science","Senior");
	a.print();
	
	student array[10];
	array[0].print();
	
	student * p = new student[10];
	p[0].print();
	delete [] p;
	

	return 0;
}