class  Student{
	public:
	int rollNumber;

	private: 
	int age;

	public:
         ~Student(){
         	cout<<"Destructor called "<<endl;
         }
		// Default Constructor
		Student(){
			cout<<"Constructor 1 called"<<endl;
		}

		// Parametrized Constructor
		Student(int rollNumber){
			cout<<"Constructor 2 called "<<endl;
			this->rollNumber=rollNumber;
		}  

		Student (int a,int r){
			cout<<"this:"<<this<<endl;
			cout<<"Constructor 3 called "<<endl;
			age=a;
			rollNumber=r;
		}


		void display(){
			cout<<age<<" "<<rollNumber<<endl;
		} 

		//getter
		int getAge(){
			return  age;
		}

		//setter
		void setAge(int a,int password){
			if(password !=123){
				return ;
			}
			if(a<0){
				return ;
			}
			age=a;
		}

};

class Product{
	int id;
	int weight;
	char name[100];
};//means class bnane pr hamare pass template ready ho gya
