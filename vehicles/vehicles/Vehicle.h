#ifndef _VEHICLE_H_
#define _VEHICLE_H_

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
	public:
		Vehicle();
		Vehicle(string ownerN, string manuN, int numCyl);
		void setManuName(string i);
		void setCylindersName(int i);
		void setOwner(Person i);
		string getManuName();
		int getCylindersName();
		Person getOwner();
		friend ostream& operator<<(ostream& os, const Vehicle& ve);
	protected:
		string manuName;
		int cylinderNum;
		Person owner;
};

#endif