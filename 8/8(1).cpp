#include "8.h"

ostream& operator<<(ostream& out, const Students& dima)
{
	out << "Name: " << dima.name << "\nGroup: " << dima.group << "\nAge: " << dima.age << "\nHeight: " << dima.height << "\nOn lesson or not: " << dima.lesson;
	return out;
}

istream& operator>>(istream& in, Students& dima)
{
	cout << "Enter Name: ";
	in >> dima.name;
	cout << "Enter Group: ";
	in >> dima.group;
	cout << "Enter Age: ";
	in >> dima.age;
	cout << "Enter Height: ";
	in >> dima.height;
	cout << "On lesson or not (0/1): ";
	in >> dima.lesson;
	return in;
}

void Students::operator=(const Students& student)
{
	this->name = student.name;
	this->age = student.age;
	this->group = student.group;
	this->height = student.height;
	this->lesson = student.lesson;
}

