// Write a program to create student record system using arrays and strings.
#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX_STUDENTS = 100;
    string names[MAX_STUDENTS];
    int ages[MAX_STUDENTS];
    float grades[MAX_STUDENTS];
    int numStudents = 0;
    char choice;
    do {
        cout << "Enter student name: ";
        cin >> names[numStudents];
        cout << "Enter student age: ";
        cin >> ages[numStudents];
        cout << "Enter student grade: ";
        cin >> grades[numStudents];
        numStudents++;

        cout << "Do you want to add another student? (y/n): ";
        cin >> choice;
    } while (choice == 'y' && numStudents < MAX_STUDENTS);

    cout << "\nStudent Records:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Name: " << names[i] << ", Age: " << ages[i] << ", Grade: " << grades[i] << endl;
    }
    return 0;
}