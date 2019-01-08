#include <iostream>
int main(){
	int Sort[10]; //intitalizes an array of 10 numbers to be used
	int i; //i is to be used as a counter later on.
	int j; // j will also be used as a counter later on.
	std::cout << "Please enter your 10 numbers" << std::endl;
	for (i = 0;i<=9;i++){ //This for loop allows the used to enter a value for each of the 10 enteries of the array Sort.
		std::cin >> Sort[i];
	}
	for(i = 0; i<= 8; i++){ //this is the first of the nested for loops. This loop ensures that once a sort has been done, it goes back to resort the new partially sorted array
		for(j=i+1; j<=9; j++){ //this for loop actually sorts the numbers.
			int temp; //we need somewhere to store a number whilst we swap the numbers. this is what temp is for.
			if(Sort[i] > Sort[j]){ // we check if the Sort[i] > Sort[i+1]
			temp = Sort[i]; // these next 3 lines are the swap.
			Sort[i] = Sort[j];
			Sort[j] = temp;
			}
		}
	}
	std::cout << "The numbers in sorted order are:" << std::endl;
	for (i = 0; i<=9; i++){ // a simple print.
		std::cout << Sort[i] << std::endl;
	}
	return 0;
}
