// write a program to create student record management system.
#include <iostream>
#include <string>
using namespace std;
int main(){
    const int MAX_STUDENTS = 100;
    struct Student {
        int id;
        string name;
        string course;
        double gpa;
    };

    Student students[MAX_STUDENTS];
    int studentCount = 0;

    int choice;
    do {
        cout << "Student Record Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (studentCount < MAX_STUDENTS) {
                    cout << "Enter Student ID: ";
                    cin >> students[studentCount].id;
                    cout << "Enter Student Name: ";
                    cin.ignore(); // to ignore the newline character left in the buffer
                    getline(cin, students[studentCount].name);
                    cout << "Enter Student Course: ";
                    getline(cin, students[studentCount].course);
                    cout << "Enter Student GPA: ";
                    cin >> students[studentCount].gpa;
                    studentCount++;
                } else {
                    cout << "Student limit reached!" << endl;
                }
                break;

            case 2:
                if (studentCount == 0) {
                    cout << "No students to display." << endl;
                } else {
                    for (int i = 0; i < studentCount; i++) {
                        cout << "Student ID: " << students[i].id << endl;
                        cout << "Name: " << students[i].name << endl;
                        cout << "Course: " << students[i].course << endl;
                        cout << "GPA: " << students[i].gpa << endl;
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