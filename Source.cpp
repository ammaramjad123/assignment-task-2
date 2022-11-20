#include <iostream>
#include "Header.h"
using namespace std;


mychar::mychar()
{
	c = '\0';
}

mychar::mychar(char a, char b)
{
	cout << "IT IS TASK 2" << endl;
}

void mychar::setcharacter(char v)
{
	c = v;
}

char mychar::getcharacter()
{
	return c;
}

void mychar::upcase()
{

	if (c >= 65 && c <= 90)
	{
		cout << "The character is Uper-case " << endl;
		Lcase = c + 32;
		cout << "The converted Lower-case character is : " << Lcase << endl;
		cout << endl;
	}

}

void mychar::lowcase()
{

	if (c >= 97 && c <= 122)
	{
		cout << "The character is Lower-case " << endl;
		Ucase = c - 32;
		cout << "The converted Upper-case character is : " << Ucase << endl;
		cout << endl;
	}

}

void mychar::display()
{

	cout << "The Character is " << c << endl;
}

void mychar::sortdisplay()
{
	upcase();
	lowcase();
}
