class Drawable
{
public:
	virtual void draw () = 0;
};

class  MyDrawable : public Drawable
{
	public:
	virtual void draw ();
	MyDrawable ();
	// Note: to make this work correctly, this must be virtual!
	/* virtual */ ~MyDrawable ();

private:
	int *_my_data; 
};

MyDrawable::MyDrawable ()
{
	_my_data = new int;
}

MyDrawable::~MyDrawable ()
{
	delete _my_data;
}

void deleteDrawable (Drawable *drawable)
{
	delete drawable;
}

int main ()
{
	deleteDrawable( new MyDrawable() );
}
