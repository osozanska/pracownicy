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
        cout << "Pensja wynosi: ";
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

    void calculate(double n) {
        double wynik = Employee::calculate(n) * bonus;
        cout << wynik << endl;
    }
};

class Worker : public Employee {
private:
    string department;
public:
    Worker(string nameE, string lastNameE, float hRateE, string departmentE)
        : Employee(nameE, lastNameE, hRateE), department(departmentE) {
    }

    string getDepartment() const { return department; }

    void setDepartment(string departmentE) { department = departmentE; }


    void showInfo() {
        cout << endl;
        cout << "------------Info about Worker---------" << endl;
        Employee::showInfo();
        cout << "Department: " << department << endl;
    }

};

int main() {
    //Employee employee("Ola", "Kot", 20);
    //employee.showInfo();

    //int opcja;
    //cout << "Jesteś pracownikiem (wpisz 1) czy menagerem (wpisz 2)? " << endl;
   // cin >> opcja;
    //if (opcja == 1) }
    Manager manager("Ola", "Kot",23, 40 , 50);
    //Worker worker; 
   // cout << "Podaj imię: " << endl;
    //worker.setName("Oliwia");
    //("Marta", "Bak", 23, "it");
    }
    //("Jakub", "Nowak", 23, 40, 56);
    manager.showInfo();
    manager.calculate(100);
   
    //manager.setBonus(20);
    //manager.calculate(40);
    Worker worker("Marta", "Bak", 23,"it");
    worker.showInfo();

    

    //string name;
    //string lastName;
    ////double hRate;
   // double bonus;
    //int numberOfEmployee;
    //string department;

    //int wybor;

    //cout << "----------------------------" << endl;
    //cout << "Wybierz 1, jeśli jesteś pracownikiem lub 2 jak jesteś menagerem" << endl;
  
    //do {
       // switch (wybor) {
       // case 1:
          //  cout << "Pracowniku, podaj swoje imię: ";
          //  cin >> name;
           // cout << "Nazwisko: ";
           // cin >> name;
           // cout << "Pracowniku, podaj swoje imię: ";
           // cin >> name;

       // }
  //  }
    return 0;
}