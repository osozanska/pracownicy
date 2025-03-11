#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string lastName;
    float hRate;

public:
    Employee(string nameE, string lastNameE, float hRateE) : name(nameE), lastName(lastNameE), hRate(hRateE) {
        //cout << "Employee constructor called!" << endl;
        //cout << "Name: " << name << ", last name: " << lastName << " and rate " << hRate << endl;
    }

    string getName() const { return name; }
    string getLastName() const { return lastName; }
    float getHRate() const { return hRate; }

    void setName(string nameE) { name = nameE; }
    void setLastName(string lastNameE) { lastName = lastNameE; }
    void setHRate(float hRateE) { hRate = hRateE; }


    void showInfo() {
        //cout << "------------Info about Employee---------" << endl;
        cout << "Name: " << name << endl;
        cout << "Last name: " << lastName << endl;
        cout << "Rate (hour): " << hRate << endl;
    }
    double calculate(double n) {
        return hRate * n;
    }
};


class Manager : public Employee {
private:
    double bonus;
    int numberOfEmployee;

public:
    Manager(string nameE, string lastNameE, float hRateE, double bonusE, int numberOfEmployeeE)
        : Employee(nameE, lastNameE, hRateE), bonus(bonusE), numberOfEmployee(numberOfEmployeeE) {
    }

    double getBonus() const { return bonus; }
    int getNumberOfEmployee() const { return numberOfEmployee; }

    void setBonus(double bonusE) { bonus = bonusE; }
    void setNumberOfEmployee(int numberOfEmployeeE) { numberOfEmployee = numberOfEmployeeE; }

    void showInfo() {
        cout << endl;
        cout << "------------Info about Manager---------" << endl;
        Employee::showInfo();
        cout << "Bonus: " << bonus << endl;
        cout << "Number of Employee: " << numberOfEmployee << endl;
    }
};

int main() {
    Employee employee("Ola", "Kot", 20);
    employee.showInfo();

    Manager manager("Jakub", "Nowak", 23, 40, 56);
    manager.showInfo();
    return 0;
}