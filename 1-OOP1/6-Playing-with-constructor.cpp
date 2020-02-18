#include <iostream>
using namespace std;
#include "1-Student.cpp"

int main()
{
	Student s1; // Constructor 1 called

	Student s2(101); // Constructor 2 called

	Student s3(20,202); // Constructor 3 called

	Student s4(s3); // Copy constructor

	s1=s2;// copy assignment operator(can only be used jb dono ke dono objects memory m exit kr rhe h)

	Student s5=s4;//Student s5; s5=s4;
	//it will be intepreted as Student s5(s4) which is copy consturctor
}