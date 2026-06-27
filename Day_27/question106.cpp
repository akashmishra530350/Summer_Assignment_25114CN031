// write a program to create employee maanagement system.
#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX_EMPLOYEES = 100;
    struct Employee {
        int id;
        string name;
        string position;
        double salary;
    };

    Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;

    int choice;
    do {
        cout << "Employee Management System" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employees" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (employeeCount < MAX_EMPLOYEES) {
                    cout << "Enter Employee ID: ";
                    cin >> employees[employeeCount].id;
                    cout << "Enter Employee Name: ";
                    cin.ignore(); // to ignore the newline character left in the buffer
                    getline(cin, employees[employeeCount].name);
                    cout << "Enter Employee Position: ";
                    getline(cin, employees[employeeCount].position);
                    cout << "Enter Employee Salary: ";
                    cin >> employees[employeeCount].salary;
                    employeeCount++;
                } else {
                    cout << "Employee limit reached!" << endl;
                }
                break;

            case 2:
                if (employeeCount == 0) {
                    cout << "No employees to display." << endl;
                } else {
                    for (int i = 0; i < employeeCount; i++) {
                        cout << "Employee ID: " << employees[i].id << endl;
                        cout << "Name: " << employees[i].name << endl;
                        cout << "Position: " << employees[i].position << endl;
                        cout << "Salary: $" << employees[i].salary << endl;
                        cout << "-------------------------" << endl;
                    }
                }
                break;

            case 3:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}