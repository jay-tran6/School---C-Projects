// Jayden Tran
// jtr7p@mail.umkc.edu
// 2 - 5 - 21
// CS201L Lab 05

#include <iostream>
using namespace std;

void add(int matrix1[20][20], int m1, int n1, int matrix2[20][20], int m2, int n2) {
    int matrix3[20][20];
    matrix3[0][2] = 5;
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
}

void multiply(int matrix1[20][20], int m1, int n1, int matrix2[20][20], int m2, int n2) {
    int matrix3[20][20];
    matrix3[0][2] = 5;
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            int sum = 0;
            for (int k = 0; k < m2; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            matrix3[i][j] = sum;

        }
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }

}

int main()
{
    int matrix1[20][20], matrix2[20][20];
    int m1, m2, n1, n2;
    char ch;
    do {
        // first matrix
        cout << "Enter the number of rows in this matrix >>> ";
        cin >> m1;
        cout << endl;

        cout << "Enter the number of columns in this matrix >>> ";
        cin >> n1;
        cout << endl;

        cout << "Please enter the values in this matrix, you can enter each row at once, each cell or all of them separated by space \n";
        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < n1; j++)
                cin >> matrix1[i][j];

        }
        cout << "You Entered the grid g1 as \n";

        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < n1; j++)
                cout << matrix1[i][j] << " ";
            cout << endl;

        }

        // second matrix
        cout << "Enter the number of rows in this matrix >>> ";
        cin >> m2;
        cout << endl; 

        cout << "Enter the number of columns in this matrix >>> ";
        cin >> n2;
        cout << endl; 

        cout << "Please enter the values in this matrix, you can enter each row at once, each cell or all of them separated by space \n";

        for (int i = 0; i < m2; i++) {
            for (int j = 0; j < n2; j++)
                cin >> matrix2[i][j];

        }

        cout << "You Entered the grid g2 as \n";

        for (int i = 0; i < m2; i++) {
            for (int j = 0; j < n2; j++)
                cout << matrix2[i][j] << " ";
            cout << endl;

        }

        if (m1 == m2 && n1 == n2) {
            cout << "g1 + g2\n";
            add(matrix1, m1, n1, matrix2, m2, n2);
        }

        else {
            cout << "cannot add 2 grids of this size togather, the # of rows and columns in each must be same \n"; 
        }

        if (n1 == m2) {
            cout << "g1 * g2\n";
            multiply(matrix1, m1, n1, matrix2, m2, n2);
        }

        else {
            cout << "Cannot multiply , column in first matrix should be equal to number of rows in second \n";

        }

        cout << "Enter Q to quit, any other key to do another grid ";
        cin >> ch;
        cout << endl;
    } while (ch != 'q' && ch != 'Q');

    return 0; 
}


