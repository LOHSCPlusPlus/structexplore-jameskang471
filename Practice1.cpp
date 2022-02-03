#include <iostream>
using namespace std;

// Put the person struct here
struct Person {
  string firstName;
  string lastName;
};





int main() {
	// Create two instances of person here, and assign the names.
  Person one;
  one.firstName = "Dorian";
  one.lastName = "Gray";
  Person two;
  two.firstName = "Charlie";
  two.lastName = "Brown";

  cout << "Person one name is " << one.firstName << " " << one.lastName << endl;
  cout << "Person two name is " << two.firstName << " " << two.lastName << endl;



	// Add the prints here




	return 0;
}
