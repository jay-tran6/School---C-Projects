#include "Employee.cpp"
using namespace std;
//main program
int main() {
    vector<Employee> emps;

    ifstream ifile;

    ifile.open("input.txt");

    if (!ifile.is_open()) {
        cout << "input.txt file not found";
        exit(0);
    }

    string command;

    while (ifile >> command) {
        if (command == "NEW") {
            int id;
            string fname, lname;
            ifile >> id >> fname >> lname;

            Employee new_emp(id, fname + " " + lname);

            emps.push_back(new_emp);

        }

        else if (command == "RAISE") {
            int id, raise;
            ifile >> id >> raise;
            for (int i = 0; i < emps.size(); i++) {
                if (emps[i].getEmployeeID() == id) {
                    emps[i].giveRaise(raise);
                }
            }
        }

        else if (command == "PAY") {
            for (int i = 0; i < emps.size(); i++) {
                emps[i].pay();
            }
        }

        else if (command == "FIRE") {
            int id;
            ifile >> id;
            for (int i = 0; i < emps.size(); i++) {
                if (emps[i].getEmployeeID() == id) {
                    emps[i].fire();
                }
            }
        }
    }
    ifile.close();

    ofstream outfile;

    outfile.open("output.txt");

    for (int i = 0; i < emps.size(); i++) {
        outfile << emps[i].getName() << ", ID Number: " << emps[i].getEmployeeID() << endl;

        if (emps[i].isEmployed()) {
            outfile << "Current Pay rate: $" << emps[i].getPayRate() << endl;
        }

        else {
            outfile << "Not employed with the company." << endl;
        }
        outfile << "Pay earned to date: $" << emps[i].getBalance() << endl;

        outfile << endl;
    }
    outfile.close();

}
