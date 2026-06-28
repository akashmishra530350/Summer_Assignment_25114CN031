// write a program to create ticket booking system.
#include <iostream>
using namespace std;
int main(){
    
    int ticketID;
    string passengerName;
    string destination;
    int numberOfTickets;

    cout << "Enter ticket ID: ";
    cin >> ticketID;

    cout << "Enter passenger name: ";
    cin.ignore(); 
    getline(cin, passengerName);

    cout << "Enter destination: ";
    getline(cin, destination);

    cout << "Enter number of tickets: ";
    cin >> numberOfTickets;

    cout << "\nTicket Details:\n";
    cout << "Ticket ID: " << ticketID << endl;
    cout << "Passenger Name: " << passengerName << endl;
    cout << "Destination: " << destination << endl;
    cout << "Number of Tickets: " << numberOfTickets << endl;

    return 0;
}