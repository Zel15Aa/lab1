#include <iostream>
#include <format>
#include <cmath>
#include <numbers>
using namespace std;

void header(); //print author and program information
double f(double x); //computes the mathematical expression for the given x

int main()
{
	header();
	double x;
	try {
		cout << "Enter x (x > 11): ";
		cin >> x;
		if (cin.fail()) { //check whether an error occurred during input
			throw invalid_argument("wrong input");
		}
		if (x <= 11) { //check whether a number is in the valid range
			throw out_of_range("wrong number");
		}
		cout << "\n***** do calculations ... ";
		double res = f(x);
		cout << "done" << endl;
		cout << format("for x = {:.7f}", x) << endl;
		cout << format("result = {:.8f}", res);
	}
	catch (invalid_argument) {
		cout << "wrong input";
	}
	catch(out_of_range){
		cout << "\n***** do calculations ... ";
		cout << "done" << endl;
		cout << format("for x = {:.7f}", x) << endl;
		cout << "result = undefinded";
	}
	return 0;
}
void header() {
	cout << "The author of this program Andrew Zelenko" << endl;
	cout << "The program calculate the value by given x. Variant 81" << endl;
}

double f(double x) {
	return sin(28.0 / 58.0)
		- 10 * numbers::pi
		- 49 * numbers::e * (8.0 / ((x + 7.0) * (x + 9.0)))
		- 12 * cos(x - 14.0)
		+ 1.0 / sqrt(x - 11.0);
}