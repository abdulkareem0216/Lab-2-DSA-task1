#include <iostream>
using namespace std;

class shape {
public:

	virtual double area() const = 0;
};
class circle : public shape {
private:
	double r;
public:

	circle(double r) : r(r) {}

	double area() const override {
		return 3.14 * r * r;
	}
};


class rectangle : public shape {
private:
	double length;
	double width;
public:

	rectangle(double l, double w) : length(l), width(w) {}

	double area() const override {
		return length * width;
	}
};

int main() {

	circle circle(8);
	rectangle rectangle(10, 1);
	cout << "area of circle: " << circle.area() << endl;
	cout << "area of rectangle: " << rectangle.area() << endl;

	system("pause");
	return 0;
}
