#include <iostream>
using namespace std;
/*
// Simple class
class A {
public:
	int x;

	// COnstructor initializing
	// the data members
	A() { x = 0; }

	A(int a)
	{
		cout << "Constructor A(int a) is invoked" << endl;
		x = a;
	}
};

// Complex class
class B {
	int data;
	class A objA;

public:
	// COnstructor initializing the
	// data members
	B(int a)
	{
		data = a;
        objA=a;
	}

	// Function to print values
	// of data members in class
	// A and B
	void display()
	{
		cout << "Data in object of class B = " << data
			<< endl;
		cout << "Data in member object of "
			<< "class A in class B = " << objA.x;
	}
};

// Driver code
int main()
{
	// Creating object of class B
	B objb(25);

	// Invoking display function
	objb.display();
	return 0;
}
*/


class address {
public:
    string city, state, locality;
    address(string city_c, string state_c, string locality_c) {
        city = city_c;
        state = state_c;
        locality = locality_c;
    }
};

class student {
    address* adrs;

public:
    int id;
    string name;
    student(int i, string nm, address* ad) {
        id = i;
        name = nm;
        adrs = ad;
    }
    void display() {
        cout << id << " " << name << " " << adrs->locality << " " << adrs->city << " " << adrs->state << endl;
    }
};

int main() {
    address a1 = address("Noida", "UP", "C-146, Sec-15");
    student s1 = student(101, "Nakul", &a1);
    s1.display();
    return 0;
}
