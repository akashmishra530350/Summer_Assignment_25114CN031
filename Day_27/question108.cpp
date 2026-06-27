// Write a program to create a marksheet generation system.
#include <iostream>
#include <string>
using namespace std;
int main(){
    const int MAX_STUDENTS = 100;
    struct Student {
        int id;
        string name;
        double marks[5]; // Assuming 5 subjects
        double totalMarks;
        double percentage;
    };

    Student students[MAX_STUDENTS];
    int studentCount = 0;

    int choice;
    do {
        cout << "Marksheet Generation System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Marksheet" << endl;
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
                    students[studentCount].totalMarks = 0;

                    for (int i = 0; i < 5; i++) {
                        cout << "Enter marks for subject " << (i + 1) << ": ";
                        cin >> students[studentCount].marks[i];
                        students[studentCount].totalMarks += students[studentCount].marks[i];
                    }
                    students[studentCount].percentage = (students[studentCount].totalMarks / 500) * 100; // Assuming each subject is out of 100
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
                        for (int j = 0; j < 5; j++) {
                            cout << "Marks for subject " << (j + 1) << ": " << students[i].marks[j] << endl;
                        }
                        cout << "Total Marks: " << students[i].totalMarks << endl;
                        cout << "Percentage: " << students[i].percentage << "%" << endl;
                        cout << endl;
                    }
                }
                break;

            case 3:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}