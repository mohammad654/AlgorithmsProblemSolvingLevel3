#pragma warning(disable: 4996)
#include <iostream>

#include <string>
#include <vector>

#include <fstream>

#include <ctime>

#include<iomanip>// this library stored the std::setw

using namespace std;
int randomNumber(int from, int to) {
	//Function to generate a random number
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}
void fillMatrixWithRandomNumbers(int arr[3][3], short row, short cols) {
	short couter=0;
	for(short i = 0; i < row; i++) {
		for(short j = 0; j < cols; j++) {
			arr[i][j] = randomNumber(1, 100);
			//arr[i][j] = couter;
			//couter++;
			//arr[i][j] = couter;
		}
	}
}

void TransposeMatrix(int arr[3][3],int arrTransposed[3][3], short row, short cols) {

	for(short i = 0; i < row; i++) {
		for(short j = 0; j < cols; j++) {
			arrTransposed[i][j] = arr[j][i];
		}
	}
}
void printMatrix(int arr[3][3], short row, short cols) {
	for(short i = 0; i < row; i++) {
		for(short j = 0; j < cols; j++) {
			cout << setw(3) << arr[i][j]<<"   ";
		}
		cout << endl;
	}
}


int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	//Seeds the random number generator in C++, called only once
	srand((unsigned) time(NULL));

	int arr[3][3];
	int arrTransposed[3][3];

	fillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\n The following is a 3x3 random matrix:\n";

	printMatrix(arr, 3, 3);
	 TransposeMatrix(arr, arrTransposed,3, 3);
	 cout<<"\n\nThe following is the transposed matrix:\n";
	 printMatrix(arrTransposed, 3, 3);

	system("pause>0");

	cout << "\n\n***************************************************\n\n";
	return 0;
}


/* cout<<""<<endl;

   g++ index.cpp -o index.exe
   index.exe

 6-transposeMatrix.cpp
  */