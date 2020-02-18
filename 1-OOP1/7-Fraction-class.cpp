class Fraction{
	private:
		int numerator;
		int denominator;

    public:
    	Fraction(int numerator,int denominator){
    		this->numerator=numerator;
    		this->denominator=denominator;
    	}

    	void print(){
    		cout<<this->numerator<<" / "<<this->denominator<<endl;//writing this keyword here is optional 
    	}

    	void simplify(){
    		int gcd=1;
    		int j=min(this->numerator,this->denominator);
    		for(int i=1;i<=j;i++){
    			if(this->numerator%i==0 && this->denominator%i==0){
    				gcd=i;
    			}
    		}
    		this->numerator=this->numerator/gcd;
    		this->denominator=this->denominator/gcd;
    	}

    	void add(const Fraction &f2){
    		int lcm=this->denominator*f2.denominator;
    		int x=lcm/this->denominator;
    		int y=lcm/f2.denominator;

    		int num=x*this->numerator+y*f2.numerator;

    		this->numerator=num;//or numerator=num
    		this->denominator=lcm;// or denominator = lcm

    		this->simplify();
    	}

        void multiply(const Fraction &f2){
            numerator=numerator*f2.numerator;
            denominator=denominator*f2.denominator;

            simplify();
        }

};