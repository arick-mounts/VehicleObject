#ifndef _TRUCK_H_
#define _TRUCK_H_


using namespace std;

class Truck : public Vehicle{
	public:
		Truck();
		Truck(string manuN, string ownerN, int numCyl, double loadIn, int towIn);
		double getLoad();
		int getTow();
		void setLoad(double loadIn);
		vot setTow(int towIn);
		friend ostream& operator<<(ostream& os, const Truck& tru);
	protected:
		double load;
		int tow;
}


#endif
