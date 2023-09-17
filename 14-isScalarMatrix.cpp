#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

void printMatrix(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++)
            cout << setw(3) << arr[i][j] << " ";
        cout << "\n";
    }
}

bool isScalarMatrix(int matrix1[3][3], short rows, short cols) {
    int firstDiagonalElement = matrix1[0][0]; // Initialize with the value of the first diagonal element
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (i == j && matrix1[i][j] != firstDiagonalElement)
                return false;
        }
    }
    return true;
}

int main() {
    int matrix1[3][3] = { {121, 20, 30}, {40, 11, 50}, {80, 90, 11} };
    cout << "\nMatrix1:\n";
    printMatrix(matrix1, 3, 3);

    if (isScalarMatrix(matrix1, 3, 3))
        cout << "\nYES: Matrix is a scalar matrix.";
    else
        cout << "\nNO: Matrix is NOT a scalar matrix.";

    system("pause>0");
}
