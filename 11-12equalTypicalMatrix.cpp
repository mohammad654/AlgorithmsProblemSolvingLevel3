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

bool typicalMatrix(int arr[3][3],int arr2[3][3], short row, short cols){
bool typical=false;
	for(short i = 0; i < row; i++){
		for(short j = 0; j < cols; j++)
			if(arr[i][j]==arr2[i][j])
			    return true;
    }
 return typical;
}
void printTypical( bool typical){
    if(typical)
       cout<<setw(5) <<"YES: both martices are typical."<<endl;
    else
       cout<<setw(5) <<"NO: both martices are Not typical."<<endl;
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	//Seeds the random number generator in C++, called only once
	srand((unsigned) time(NULL));
	int arr[3][3],arr2[3][3];

	cout << "\n The following is a 3x3 random matrix:arr\n";
	fillMatrixWithRandomNumbers(arr, 3, 3);
	printMatrix(arr, 3, 3);

	cout << "\n The following is a 3x3 random matrix:arr2\n";
	fillMatrixWithRandomNumbers(arr2, 3, 3);
	printMatrix(arr2, 3, 3);

    cout << "\n The following is sum of a 3x3  matrix:\n";
    cout<<setw(5) << "Sum of arr = "<<printSumMatrix(arr, 3, 3)<<endl;
    cout<<setw(5) << "Sum of arr2 = "<<printSumMatrix(arr2, 3, 3)<<endl;

    if(printSumMatrix(arr, 3, 3)==printSumMatrix(arr2, 3, 3))
         cout<<setw(5) <<"YES: both martices are equal."<<endl;
    else
         cout<<setw(5) <<"No: martices are NOT equal."<<endl;

     printTypical(typicalMatrix(arr,arr2, 3, 3));
	system("pause>0");
	cout << "\n\n***************************************************\n\n";
	return 0;
}
