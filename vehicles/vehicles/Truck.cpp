#include "Truck.h"
#include <iostream>


using namespace std;

Truck::Truck() {
	Vehicle::Vehicle();
	load = 0
	tow = 0
}

Truck::Truck(string manuN, string ownerN, int numCyl, double loadIn, int towIn) {
	Vehicle::Vehicle(manuN, ownerN, numCyl);
	load = loadIn;
	tow=towIn
}

Truck::getLoad() {
	return load;
}

Truck::getTow() {
	return tow;
}

Truck::setLoad(double loadIn) {
	load = loadIn;
}

Truck:setTow() {
	tow = towIn;
}

friend ostream& operator<<(ostream& os, const Truck& tru) {
	os << "Manufacturer's name: " << manuName << ", number of cylinders: " << cylinderNum << ", owner: " << owner << ", load capacity: " << load << " tons, towing capacity: " << tow << " Lbs";
	return os;
}