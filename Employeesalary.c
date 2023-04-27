#include<iostream>
using namespace std;

class Employee {
   private:
    float salary;
    int hoursPerDay;

   public:
    void getInfo(float s, int h) {
        salary = s;
        hoursPerDay = h;
    }

    void AddSal() {
        if (salary < 500) {
            salary += 10;
        }
    }

    void AddWork() {
        if (hoursPerDay > 6) {
            salary += 5;
        }
    }

    float getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;
    float salary;
    int hoursPerDay;

    cout << "Enter employee's salary: ";
    cin >> salary;
    cout << "Enter employee's hours of work per day: ";
    cin >> hoursPerDay;

    emp.getInfo(salary, hoursPerDay);
    emp.AddSal();
    emp.AddWork();

    cout << "Final salary of employee: $" << emp.getSalary() << endl;

    return 0;
}
