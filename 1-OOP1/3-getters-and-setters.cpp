//getter and setter-for reading and writing in private properties
#include <iostream>
using namespace std;
#include "1-Student.cpp"

int  main() 
{
	// Creates Object Statically
	Student s1;

	// Creating objects dynamically
	Student *s2=new Student;
	
	s1.setAge(20);
	s2->setAge(24);

	s1.display();
	s2->display();
}