#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;

string convertDoubleTostring(double number, int precision) {
	stringstream stream;
	stream << fixed << setprecision(precision) << number;
	return stream.str();


}

int main() {
	double number = 12.34;
	string str = convertDoubleTostring(number, 1);
	cout << str << endl;
	return 0;

}
