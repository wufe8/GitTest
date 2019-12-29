#include "test.h"

elephant::elephant(int Getage,bool Getsex)
{
	age = Getage;
	sex = Getsex;
	cout << "class : elephant has been created in "
	<< this;
}

void elephant::getSize()
{
	cout << "Size is " << size;
}