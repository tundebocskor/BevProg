#include "std_lib_facilities.h"
int main () {

	cout << "Please enter your name and age: \n";
	string first_name;
	string second_name;
	int age; 
	
	cin >> first_name >> second_name >> age;
	string name=first_name + "  "+second_name;
	cout<< "Welcome " << name <<", age is : " << age <<"\n";

	/*
	cout << "Add meg hány éves vagy: \n";
	
	if (age>20)
	{
		cout << "Húú de öreg vagy \n";

	}
	else
		cout << "De kis fiatal vagy! \n";
	
*/
	return 0;
}