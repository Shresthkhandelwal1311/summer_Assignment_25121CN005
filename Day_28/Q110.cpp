//Write a program to Create bank account system. 
#include <iostream>
using namespace std;

int ids[100], total = 0;
string names[100];
double balances[100];

void create(){
    cout << "Name: "; cin >> names[total];
    cout << "Deposit: "; cin >> balances[total];
    ids[total] = 1001 + total;
    cout << "ID: " << ids[total] << "\n";
    total++;
}

int find(int id){
    for (int i = 0; i < total; i++)
        if (ids[i] == id) return i;
    return -1;
}

void deposit(){
    int id; double amt;
    cout << "ID: "; cin >> id;
    int i = find(id);
    if (i == -1) { cout << "Not found!\n"; return; }
    cout << "Amount: "; cin >> amt;
    balances[i] += amt;
    cout << "Balance: " << balances[i] << "\n";
}

void withdraw(){
    int id; double amt;
    cout << "ID: "; cin >> id;
    int i = find(id);
    if (i == -1) { cout << "Not found!\n"; return; }
    cout << "Amount: "; cin >> amt;
    if (amt > balances[i]) { cout << "Low balance!\n"; return; }
    balances[i] -= amt;
    cout << "Balance: " << balances[i] << "\n";
}

void check(){
    int id; cout << "ID: "; cin >> id;
    int i = find(id);
    if (i == -1) { cout << "Not found!\n"; return; }
    cout << names[i] << " Balance: " << balances[i] << "\n";
}

int main(){
    int c;
    do{
        cout << "\n1.Create 2.Deposit 3.Withdraw 4.Balance 0.Exit\n: ";
        cin >> c;
        if (c==1) create();
        else if (c==2) deposit();
        else if (c==3) withdraw();
        else if (c==4) check();
    } while (c != 0);
}