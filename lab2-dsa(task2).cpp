#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    virtual double calculateSalary() const = 0;
    virtual void printDetails() const = 0; 
    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
private:
    string name;
    double fixedSalary;

public:
    FullTimeEmployee(const string& name, double salary)
        : name(name), fixedSalary(salary) {}

    double calculateSalary() const override {
        return fixedSalary; 
    }

    void printDetails() const override {
        cout << "Full-Time Employee: " << name << ", Salary: " << calculateSalary() << endl;
    }
};

class PartTimeEmployee : public Employee {
private:
    string name;
    double hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(const std::string& name, double rate, int hours)
        : name(name), hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const override {
        return hourlyRate * hoursWorked; 
    }

    void printDetails() const override {
        cout << "Part-Time Employee: " << name << ", Salary: " << calculateSalary() << endl;
    }
};

int main() {
  
    FullTimeEmployee fullTimeEmp("Alice", 10000);
    fullTimeEmp.printDetails();

  
    PartTimeEmployee partTimeEmp("Bob", 21.0, 24); 
    partTimeEmp.printDetails();

    return 0;
}
