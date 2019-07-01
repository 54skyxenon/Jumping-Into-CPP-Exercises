template <typename Type> 
class Calc
{
public:
	Calc ();
	Type multiply (Type x, Type y);
	Type add (Type x, Type y);
};

template <typename Type> Calc<Type>::Calc ()
{}

template <typename Type> Type Calc<Type>::multiply (Type x, Type y)
{
	return x * y;
}

template <typename Type> Type Calc<Type>::add (Type x, Type y)
{
	return x + y;
}

int main ()
{
    // demonstrate a declaration
    Calc<int> c;
}
