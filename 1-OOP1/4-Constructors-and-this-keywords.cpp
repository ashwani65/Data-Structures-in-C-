#include <iostream>
using namespace std;
#include "1-Student.cpp"

int  main() 
{

	Student s1(10,1001);
	cout<<"Address of s1 "<<&s1<<endl;

	Student s2(20);
	s2.display();
	// Creates Object Statically
	/*Student s1;
	s1.display();

	Student s2;

	// Creating objects dynamically
	Student *s3=new Student;
	s3->display();

	cout<<" Parametrized Constructor demo"<<endl;

	Student s4(10);
	s4.display();

	Student *s5=new Student(101);
	s5->display();

	Student s6(20,1002);
	s6.display();
	*/
}