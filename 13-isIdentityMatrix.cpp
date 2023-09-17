#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

bool IsIdentityMatrix(int Matrix1[3][3], short Rows, short Cols) {
    // Check if diagonal elements are 1 and the rest are 0
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            // Check for diagonal elements
            if (i == j && Matrix1[i][j] != 1) {
                return false;
            }
            // Check for non-diagonal elements
            else if (i != j && Matrix1[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
   // int Matrix1[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };
    int Matrix1[3][3] = { {1, 10, 0}, {20, 1, 0}, {0, 0, 1} };

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsIdentityMatrix(Matrix1, 3, 3)) {
        cout << "\nYES: Matrix is an identity matrix.";
    } else {
        cout << "\nNo: Matrix is NOT an identity matrix.";
    }

    system("pause>0");
}


