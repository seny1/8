#include <iostream>
#include <string>

using namespace std;

class Students
{
public:
	int age = 0, group = 0;
	double height = 0;
	string name = "Dima";
	bool lesson = true;
	void operator=(const Students&);
};

ostream& operator<<(ostream&, const Students&);
istream& operator>>(istream&, Students&);