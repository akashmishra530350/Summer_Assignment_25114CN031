// Write a program to create menu diven array operations system.
#include <iostream>
using namespace std;
int main(){
    int choice, size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Menu Driven Array Operations" << endl;
    cout << "1. Display Array" << endl;
    cout << "2. Find Maximum Element" << endl;
    cout << "3. Find Minimum Element" << endl;
    cout << "4. Calculate Sum of Elements" << endl;
    cout << "5. Calculate Average of Elements" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Array Elements: ";
            for(int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 2:
            {
                int max = arr[0];
                for(int i = 1; i < size; i++) {
                    if(arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Maximum Element: " << max << endl;
            }
            break;
        case 3:
            {
                int min = arr[0];
                for(int i = 1; i < size; i++) {
                    if(arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Minimum Element: " << min << endl;
            }
            break;
        case 4:
            {
                int sum = 0;
                for(int i = 0; i < size; i++) {
                    sum += arr[i];
                }
                cout << "Sum of Elements: " << sum << endl;
            }
            break;
        case 5:
            {
                int sum = 0;
                for(int i = 0; i < size; i++) {
                    sum += arr[i];
                }
                float average = static_cast<float>(sum) / size;
                cout << "Average of Elements: " << average << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}