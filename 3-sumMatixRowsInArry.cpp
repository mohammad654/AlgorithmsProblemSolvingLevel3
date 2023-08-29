#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include<iomanip>// this library stored the std::setw
using namespace std;
//--------------------------------------------------------------------

int randomNumber(int from, int to) {
	//Function to generate a random number
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short row, short cols) {
	for(short i = 0; i < row; i++) {
		for(short j = 0; j < cols; j++) {
			arr[i][j] = randomNumber(1, 100);
		}
	}
}
void printMatrix(int arr[3][3], short row, short cols) {
	for(short i = 0; i < row; i++) {
		for(short j = 0; j < cols; j++) {
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;
	}
}
int rowSum(int arr[3][3], short row, short cols) {
	int sum = 0;
	for(short j = 0; j <= cols - 1; j++)
		sum += arr[row][j];
	return sum;
}
void printEachRowSum(int arr[3][3], short rows, short cols) {
	cout << "\nThe the following are the sum of each row in the matrix:\n";
	for(short i = 0; i < rows; i++) {
		cout << " Row " << i + 1 << " Sum = " << rowSum(arr, i, cols) << endl;
	}
}
void rowSumArr(int arr[3][3], int arrSum[3], short row, short cols) {
	for(short i = 0; i < row; i++)
		arrSum[i] += rowSum(arr, i, cols);
}
void printRowSumArr(int arr[3], short rows) {
	cout << "\nThe the following are the new array sum of  each row in the matrix:\n";
	for(short i = 0; i < rows; i++) {
		cout << " Row " << i + 1 << " Sum = " << arr[i] << endl;
	}
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	srand((unsigned) time(NULL));
	
	int arr[3][3];
	int arrSum[3];
	
	fillMatrixWithRandomNumbers(arr, 3, 3);
	
	cout << "\n The following is a 3x3 random matrix:\n";
	printMatrix(arr, 3, 3);
	rowSumArr(arr, arrSum, 3, 3);
	printEachRowSum(arr, 3, 3);
	printRowSumArr(arrSum, 3);
	system("pause>0");
	cout << "\n\n***************************************************\n\n";
	return 0;
}
