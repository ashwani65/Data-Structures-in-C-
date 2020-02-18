//Student-Use
#include <iostream>
using namespace std;
#include "1-Student.cpp"//complete code has been copied here of class.

int  main() 
{
	// Creates Object Statically
	Student s1;
	Student s2,s3;

	// s1.age=24; 
	s1.rollNumber=101;

	cout<<"s1 age "<<s1.getAge()<<endl;
	cout<<"s1.rollNumber"<<s1.rollNumber<<endl;
    s1.display();

	// s2.age=24;
	// s2.rollNumber=101;	

	s2.display();
	
	// Creating objects dynamically
	Student *s5=new Student;
	//accessing properties of dynamically allocated objects
	// (*s5).age=23;
	(*s5).rollNumber=106;

	//same as using derefrencing ,-> is doing exactly the same thing that *s3. was doing in above case
	// s5->age=23;
	s5->rollNumber=106;

	s5->display();
	cout<<"S5 age: "<<s5->getAge();

}