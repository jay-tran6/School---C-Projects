//Jayden Tran
//jtr7p@mail.umkc.edu
//4 - 20 - 21 
//Lab 13

#include <iostream>
using namespace std;

long factorial_r(long value) { //reading base case to factorial 
    if (value == 0) { 
        return 1;
    }
    else if (value == 1) {
        return 1;
    }
    else {
        return value * factorial_r(value - 1); //returning factorial as an int  
    }
}


int fibonacci_r(int n) {
    if (n <= 1) {
        return n; //checks values of base cases 
    }
    else {
        return (fibonacci_r(n - 1) + fibonacci_r(n - 2)); //calculating nth term value 
    }

}


bool is_prime_r(int value, int n) { //checks T or F if input is prime number 
    if (value <= 2) { //is prime num 
        return true;
    }
    if (value % n == 0) { //not prime num
        return false;
    }
    if (n * n > value) { //is prime num 
        return true;
    }
    return is_prime_r(value, n + 1); //no value and n isn't a base case when checking if input is a prime num 
}


int sum_r(int list[], int list_size) {
    if (list_size <= 0) { //turns base case is zero 
        return 0;
    }
    return (list[list_size - 1] + sum_r(list, list_size - 1));//adds last element of list, reduces index size by 1
}   //returns sum of sum_r


void output_reverse_list_r(int list[], int list_size) {
    if (list_size == 0) { //if list is empty
        return;
    }
    cout << list[list_size - 1] << " "; //output array in reverse order

    output_reverse_list_r(list, list_size - 1); 
}


int main() {
    int num1, num2, arr[5];
    cout << "Enter an integer" << endl;
    cin >> num1;
    cout << endl << num1 << "! = " << factorial_r(num1) << "\n\n";
    cout << "fibonacci(" << num1 << ") = " << fibonacci_r(num1) << "\n\n";
    cout << "Enter a number to check if it is a prime number" << endl;
    cin >> num2;

    if (is_prime_r(num2, 2)) {
        cout << num2 << " is a prime number" << "\n\n";
    }
    else {
        cout << num2 << " is not a prime number" << "\n\n";
    }
    cout << "Next we will enter 5 values into an array" << endl;

    for (int i = 0; i < 5; i++) { //loop to enter values of index 
        cout << "Enter a value for index " << i << endl;
        cin >> arr[i];
    }

    cout << "The sum of all values is " << sum_r(arr, 5) << endl;
    cout << "The list output in reverse is" << endl;
    output_reverse_list_r(arr, 5);
    return 0;
}

