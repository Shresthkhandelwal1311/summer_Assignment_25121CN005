//Write a program to Create ticket booking system.
#include <iostream>
#include <string>
using namespace std;

int    price[] = {2500, 2500, 1200, 1200, 500, 500, 500};
bool   booked[] = {0, 0, 0, 0, 0, 0, 0};
string names[7], phones[7];
int    totalSeats = 7;

void showSeats(){
    int seatsLeft = 0;
    for (int i = 0; i < totalSeats; i++)
        if (!booked[i]) seatsLeft++;

    cout << "\nSeats Left: " << seatsLeft << " / " << totalSeats << "\n";
    cout << "\nSeat  Price   Status\n";
    cout << "--------------------\n";
    for (int i = 0; i < totalSeats; i++)
        cout << "  " << i+1 << "   Rs." << price[i] << "  "
             << (booked[i] ? "[BOOKED]" : "[AVAILABLE]") << "\n";
}

void book(){
    showSeats();
    int s;
    cout << "\nEnter seat number: "; cin >> s; s--;
    if (s < 0 || s >= totalSeats) { cout << "Invalid seat!\n"; return; }
    if (booked[s]) { cout << "Already booked!\n"; return; }

    cin.ignore();
    cout << "Name : "; getline(cin, names[s]);
    cout << "Phone: "; getline(cin, phones[s]);

    booked[s] = true;
    cout << "\nBooked! Seat " << s+1 << " for " << names[s] << " | Rs." << price[s] << "\n";
}

void cancel(){
    showSeats();
    int s;
    cout << "\nEnter seat to cancel: "; cin >> s; s--;
    if (s < 0 || s >= totalSeats || !booked[s]) { cout << "No booking found!\n"; return; }

    booked[s] = false;
    cout << "Seat " << s+1 << " cancelled for " << names[s] << "\n";
    names[s] = ""; phones[s] = "";
}

int main(){
    int ch;
    do{
        cout << "\n1. Show Seats\n2. Book\n3. Cancel\n0. Exit\nChoice: ";
        cin >> ch;
        if (ch == 1) showSeats();
        else if (ch == 2) book();
        else if (ch == 3) cancel();
    } while (ch != 0);
}