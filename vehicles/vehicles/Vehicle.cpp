

#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle() {
	manuName = "none";
	cylinderNum = 4;
	owner = new Person();
}


Vehicle::Vehicle(string ownerN, string manuN, int numCyl){
	manuName = manuN;
	cylinderNum = numCyl;
	owner = new Person(ownerN);
}
Vehicle::setManuName(string i) {
	manuName = i;
}

Vehicle::setCylinderNum(int i) {
	cylinderNum = i;
}

Vehicle::setOwner(string i) {
	owner = new Person(i);
}

Vehicle::getManuName() {
	return manuName;
}

Vehicle::getCylinderNum() {
	return cylinderNum;
}

Vehicle::getOwner() {
	return owner;
}

ostream& operator<<(ostream& os, const Vehicle& ve){
	os << "Manufacturer's name: " << manuName << ", number of cylinders: " << cylinderNum << ", owner: " << owner;
	return os;
}