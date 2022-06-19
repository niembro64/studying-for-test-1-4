#pragma once
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class dog
{
private:
	bool annoying;
	int size;


public:
	dog();
	~dog();

	static int dogs;

	void setSize(int);
	void setAnnoying(bool);


	dog& operator ++(int);
	dog& operator --();
	bool operator ==(const dog& other) const;
	bool operator >(const dog& other) const;
	friend ostream& operator <<(ostream& output, const dog& other) {
		cout << other.annoying << " " << other.size;
		return output;
	}
};

