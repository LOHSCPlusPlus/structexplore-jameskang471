#include <iostream>
using namespace std;

// Put the person struct here
struct Person {
  string firstName;
  string lastName;
  Person();
};

Person::Person() {
  firstName = "unkown";
  lastName = "unkown";
}
int main() {
	// Create two instances of person here, and assign the names.
  Person person1;
  cout << "Person one name is " << person1.firstName << " " << person1.lastName << endl;
  person1.firstName = "Dorian";
  person1.lastName = "Gray";


  Person person2;

  cout << "Person two name is " << person2.firstName << " " << person2.lastName << endl;
    person2.firstName = "Charlie";
  person2.lastName = "Brown";



	// Add the prints here




	return 0;
}
