#include "dog.h"

int dog::dogs = 0;

dog::dog()
{
	annoying = true;
	size = 10;
	dogs++;
}


dog::~dog()
{
}


dog& dog::operator++(int) {
	size++;
	return *this;
}
void dog::setSize(int s) {
	size = s;
}
void dog::setAnnoying(bool b) {
	annoying = b;
}
dog& dog::operator--() {
	--size;
	return *this;

}

bool dog::operator==(const dog& other) const {
	return(size == other.size && annoying == other.annoying);
}

bool dog::operator>(const dog& other) const {

	return(size < other.size && annoying < other.annoying);
}

