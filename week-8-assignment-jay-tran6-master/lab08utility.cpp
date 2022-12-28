#include "lab08utility.h"
using namespace std;

void bubbleSort(vector<double>& arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void Categories() {
    fstream file; 
    string word, value;
    vector<double> dvd, music, tv; 
    file.open("input.txt");
    while (file >> word) {
        file >> value; 
        if (word.compare("DVD") == 0)
            dvd.push_back(stod(value)); // string to double conversion
        else if (word.compare("TV") == 0)
            tv.push_back(stod(value));
        else if (word.compare("MUSIC") == 0)
            music.push_back(stod(value));
    }

    ofstream ofile("Output.txt"); // open output file.
    double total = 0, median, mean; 

    int n = dvd.size();
    bubbleSort(dvd, n);
    for (int i = 0; i < n; i++)
        total += dvd[i]; 
    ofile << "DVD  " << total << "  ";
    try {
        if (n & 1) // n is odd
            median = dvd.at(2); 
        else
            median = (dvd.at(n / 2 - 1 + dvd.at(n / 2) / 2.0)); // when n is even.
        ofile << median << "  ";
    }
    catch (out_of_range) {
        cout << "Error in finding median \n";
        ofile << "nan  ";
    }
    try {
        mean = total / n; 
        ofile << mean << "  ";
    }
    catch (out_of_range) {
        cout << "Error in finding mean \n";
        ofile << "nan  ";
    }
    ofile << "\n";

    n = tv.size();
    bubbleSort(tv, n);
    total = 0;
    for (int i = 0; i < n; i++)
        total += tv[i];
    ofile << "TV " << total << "  ";
    try {
        if (n & 1)
            median = tv.at(n / 2);
        else
            median = (tv.at(n / 2 - 1) + tv.at(n / 2)) / 2.0;
        ofile << median << "  ";
    }
    catch (out_of_range) {
        cout << "Error in finding median \n";
        ofile << "nan  ";
    }
    try {
        mean = total / n;
        ofile << mean << "  ";
    }
    catch (out_of_range) {
        cout << "Error in finding mean \n";
        ofile << "nan  ";
    }
    ofile << "\n";

    n = music.size();
    bubbleSort(music, n);
    total = 0;
    for (int i = 0; i < n; i++)
        total += music[i];
    ofile << "MUSIC " << total << "  ";
    try {
        if (n & 1)
            median = music.at(n / 2);
        else
            median = (music.at(n / 2 - 1) + music.at(n / 2)) / 2.0;
        ofile << median << "  ";
    }
    catch (out_of_range) {
        cout << "Error in finding median \n";
        ofile << "nan  ";
    }
    try {
        mean = total / n;
        ofile << mean << "  ";
    }
    catch (out_of_range) {
        cout << "Error in finding mean \n";
        ofile << "nan  ";
    }
    ofile << "\n";

    ofile.close(); // close the output file
}
