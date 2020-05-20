class Superclass
{
public:
	// note that since we are declaring the copy constructor we now
	// need to provide our own default constructor
	Superclass () {}
private:
    Superclass (const Superclass& other);
	// prohibited, we will not define this method
};

class Subclass : public Superclass
{
	int val;
};

int main ()
{
	Subclass sub;
	Superclass super = sub; // now this line of code causes a compilation error
}
