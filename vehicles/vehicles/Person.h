#ifndef _PERSON_H_
#define	_PERSON_H_

using namespace std;

class Person {
	public:
		Person();
		Person(string the_name);
		string getName() const;
		void setName(string the_name);
		friend ostream& operator <<(ostream& out_stream, const Person& person_object);
	private:
		string name;
};
#endif