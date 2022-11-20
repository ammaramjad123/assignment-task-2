#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	mychar obj('a', 'b');
	char abc;

	mychar ob1;
	cout << "Enter any character upper or lower case:";
	cin >> abc;
	ob1.setcharacter(abc);
	cout << "The character is :" << ob1.getcharacter() << endl;
	ob1.upcase();
	ob1.lowcase();

	cout << "****** Coming to second part of Question ******" << endl;
	int n;
	cout << "Enter how many charcters you want to enter :";
	cin >> n;

	// mychar ob[n];    It's Giving Error in visual studio but in online compiler it's running properly //
	mychar ob[5]; // So, i have no choice rather than choosing default objects //

	// for (int i = 0; i < n; i++) // Can't run 'n' number of times //
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter any character upper or lower case  :";
		cin >> abc;
		ob[i].setcharacter(abc);
	}

	cout << endl;
	// for (int i = 0; i < n; i++)//
	for (int i = 0; i < 5; i++)
	{
		ob[i].display();
		ob[i].sortdisplay();
	}
	system("pause");
	return 0;
}