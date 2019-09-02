#include <iostream>
#include "Person.h"
#include "Vehicle.h"
#include "Truck.h"
#include "Person.cpp"
#include "Vehicle.cpp"
#include "Truck.cpp"

using namespace std;

/*
 *This is a program made to give me a bettergrasp of classes and objects, 
 *and how they can interact with each other
 *C @ TCC
 *Arick Mounts
 */

public static void main() {

	string in;

	Vehicle ve = new Vehicle("Ford", "Steve", 6);
	Truck tr = new Truck("Ford", "Joe", 4, 5.10, 85);

	cout << tr << endl;
	cout << ve << endl;

	cin << in;

}


