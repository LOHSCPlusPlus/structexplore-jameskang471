#include <iostream>
using namespace std;

// Put the person struct here
struct Person {
  string firstName;
  string lastName;
  Person();
  Person(string first, string last);
};

Person::Person() {
  firstName = "unkown";
  lastName = "unkown";
}
Person::Person(string first, string last) {
	cout << "In the other constructor" << endl;
	firstName = first;
	lastName = last;
}
  void PrintPerson(Person Person) {
  cout << "Name is" << Person.firstName << " " << Person.lastName << endl;
  }
int main() {
	// Create two instances of person here, and assign the names.
  Person person1;
  PrintPerson(Person person1);
  /*
  cout << "Person one name is " << person1.firstName << " " << person1.lastName << endl;
  person1.firstName = "Dorian";
  person1.lastName = "Gray";
*/

  Person person2("Linus", "Van Pelt");
  PrintPerson(Person person2);
/*
  cout << "Person two name is " << person2.firstName << " " << person2.lastName << endl;
*/
	// Add the prints here




	return 0;
}
