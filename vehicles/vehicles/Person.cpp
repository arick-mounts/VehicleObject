#include "Person.h"
#include <iostream>


using namespace std;
Person::Person() {
	name = "none";
}
Person::Person(string the_name) {
	name = the_name;
}
Person::getName() {
	return name;
}
void setName(string the_name) {
	name = the_name;
}
friend ostream& operator <<(ostream& out_stream, const Person& person_object) {
	os << name;
	return os;
}