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
void middleRow(int arr[3][3],int arr2[3], short row, short cols){
	for(short i = 0; i < row; i++) {
		for(short j = 0; j < cols; j++)
		    if(i==1)
			    arr2[j]=arr[i][j];
        }
}
void middleCol(int arr[3][3],int arr2[3], short row, short cols){
	for(short i = 0; i < row; i++) {
		for(short j = 0; j < cols; j++)
		    if(j==1)
			    arr2[i]=arr[i][j];
        }
}


void printMiddle(int arr[3], short row){
	for(short i = 0; i < row; i++)
		    printf(" %0*d   ", 2, arr[i]);
}
void printMatrix(int arr[3][3], short row, short cols){
	for(short i = 0; i < row; i++){
		for(short j = 0; j < cols; j++)
			 printf(" %0*d   ", 2, arr[i][j]);
	cout <<setw(25)<< endl;
    }
}
int  printSumMatrix(int arr[3][3], short row, short cols ){
int sum=0;
	for(short i = 0; i < row; i++){
		for(short j = 0; j < cols; j++)
			sum+=arr[i][j];
    }
    return sum;
}

int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	//Seeds the random number generator in C++, called only once
	srand((unsigned) time(NULL));
	int arr[3][3],arr2[3],arr3[3];

	cout << "\n The following is a 3x3 random matrix:\n";
	fillMatrixWithRandomNumbers(arr, 3, 3);
	printMatrix(arr, 3, 3);

    cout << "\n The following is a 3x3 middleRow matrix:\n";
    middleRow(arr,arr2, 3, 3);
    printMiddle(arr2,3);
    cout << "\n The following is a 3x3 middleCol matrix:\n";
    middleCol(arr,arr3, 3, 3);
    printMiddle(arr3,3);
    cout << "\n The following is sum of a 3x3  matrix:\n";
    cout<<setw(5) << "Sum "<<printSumMatrix(arr, 3, 3)<<endl;

	system("pause>0");
	cout << "\n\n***************************************************\n\n";
	return 0;
}
