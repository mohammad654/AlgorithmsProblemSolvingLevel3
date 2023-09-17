#include <iostream>
#include <string>
#include<iomanip>// this library stored the std::setw

using namespace std;
int randomNumber(int from, int to) {
	//Function to generate a random number
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short row, short cols){
	for(short i = 0; i < row; i++) {
		for(short j = 0; j < cols; j++)
			arr[i][j] =randomNumber(1,10);
        }
}
void multiplyMatrix(int arr[3][3],int arr2[3][3],int arr3[3][3], short row, short cols){
	for(short i = 0; i < row; i++) {
		for(short j = 0; j < cols; j++)
			arr3[i][j] =arr[i][j]*arr2[i][j];
        }
}

void printMatrix(int arr[3][3], short row, short cols){
	for(short i = 0; i < row; i++){
		for(short j = 0; j < cols; j++)
			cout << setw(5) << arr[i][j]<<"   ";
	cout <<setw(25)<< endl;
    }
}

int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	//Seeds the random number generator in C++, called only once
	srand((unsigned) time(NULL));
	int arr[3][3],arr2[3][3],arr3[3][3];

	cout << "\n The following is a 3x3 random matrix:arr\n";
	fillMatrixWithRandomNumbers(arr, 3, 3);
	printMatrix(arr, 3, 3);

	cout << "\n The following is a 3x3 random matrix:arr2\n";
    fillMatrixWithRandomNumbers(arr2, 3, 3);
    printMatrix(arr2, 3, 3);
    cout << "\n The following is a 3x3 multiply matrix:arr3\n";
    multiplyMatrix(arr,arr2,arr3, 3, 3);
    printMatrix(arr3,3, 3);

	system("pause>0");
	cout << "\n\n***************************************************\n\n";
	return 0;
}
