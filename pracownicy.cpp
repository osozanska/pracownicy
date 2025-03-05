#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string lastName;
    float hRate;

public:
    Employee(string nameE, string lastNameE, int hRateE) : nameE(name), lastNameE(lastName), hRateE(hRate) {
        cout << "Employee constructor called!" << endl;
        cout << "Name: " << name << ", last name: " << lastName << "and rate" << hRate << endl;
    }

    string getName() const { return name; }
    string getLastName() const { return lastName; }
    int getHRate() const { return hRate; }
   
    void setName(string name) { name = nameE; }
    void setLastName(string lastName) { lastName = lastNameE; }
    void setName(int hRate) { hRate = hRateE; }
    

    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "Last name: " << lastName << endl;
        cout << "Rate (hour): " << hRate << endl;
    }
    double calculate(double n) {
        n = 23, 50;
        return hRate * n;
    }
};


class Menager : public Employee {
private:
    string Bonus;
    double Number;

public:
