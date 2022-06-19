#include "dog.h"

struct person {
	int height = 0;
	int weight = 10;
};

void main() {

	dog pig;
	dog whit;
	person eric;
	person kat;

	cout << eric.height << endl << endl;

	eric.height = 10;

	cout << eric.height << endl << endl;

	pig.setAnnoying(false);
	whit.setAnnoying(false);
	pig.setSize(10);
	whit.setSize(5);

	cout << "Pig:  " << pig << endl;
	cout << "Whit: " << whit << endl;
	cout << "Pig > Whit? : " << (pig > whit) << endl;
	cout << "# of dogs: " << pig.dogs << endl;
	cout << "# of dogs: " << whit.dogs << endl;
	cout << endl;

	pig.setAnnoying(false);
	whit.setAnnoying(false);
	pig.setSize(10);
	whit.setSize(5);

	dog bark;

	whit.setAnnoying(true);
	whit.setSize(20);

	cout << "Pig:  " << pig << endl;
	cout << "Whit: " << whit << endl;
	cout << "Pig > Whit? : " << (pig > whit) << endl;
	cout << "# of dogs: " << whit.dogs << endl;
	cout << "# of dogs: " << pig.dogs << endl;

	cout << endl;

	system("pause");
}
