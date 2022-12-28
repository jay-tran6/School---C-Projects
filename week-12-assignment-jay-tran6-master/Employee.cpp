// Jayden Tran 
// jtr7p@mail.umkc.edu
// 4 - 12 - 21
// CS201L Lab 12

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Employee.h"

using namespace std;

Employee::Employee(int id, string myName) {
    employeeID = id;
    name = myName;
    payRate = 10;
    balance = 0;
}

int Employee::getEmployeeID() {
    return employeeID;
}

double Employee::getPayRate() {
    return payRate;
}

double Employee::getBalance() {
    return balance;
}

string Employee::getName() {
    return name;
}

void Employee::giveRaise(int rate) {
    payRate = payRate + (rate / 100.0 * payRate);
}

void Employee::pay() {
    balance += payRate;
}

void Employee::fire() {
    payRate = 0;
    employed = false;
}

bool Employee::isEmployed() {
    return employed;
}
