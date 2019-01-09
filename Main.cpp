#include <iostream>

int Bubblesort(int *Array)
{
    int counter;
    counter = 0;
    for(int i = 0; i<= 8; i++){ //this is the first of the nested for loops. This loop ensures that once a sort has been done, it goes back to resort the new partially sorted array
		for(int j=i+1; j<=9; j++){ //this for loop actually sorts the numbers.
			int temp; //we need somewhere to store a number whilst we swap the numbers. this is what temp is for.
			if(Array[i] > Array[j]){ // we check if the Sort[i] > Sort[i+1]
			    temp = Array[i]; // these next 3 lines are the swap.
			    Array[i] = Array[j];
			    Array[j] = temp;
			    counter++;
			}
		}
	}
	return counter;
}
int quicksortcounter = 0;

int partition( int *array, int start, int end)
{
	int pivot = array[end];
	int pIndex = start;
	for(int i = start; i < end; i++)
	    {
		if(array[i] <= pivot){
			std::swap(array[i],array[pIndex]);
			pIndex ++;
			quicksortcounter++;
			
		}
		
	}
	std::swap(array[pIndex],array[end]);
	return pIndex;
}

int Quicksort(int *array, int start, int end)
{
    
	if(start < end) {
	    quicksortcounter ++;
		int pIndex = partition(array, start, end);
		Quicksort(array, start, pIndex -1);
		Quicksort(array, pIndex + 1, end);
	}
	return quicksortcounter;
}

int Insertionsort(int *Array)
{
    int counter = 0;
    for(int i = 1; i<10;i++){
		int j;
		j=i;
		while(j>0 && Array[j-1]>Array[j]){
			int temp;
			temp = Array[j-1];
			Array[j-1] = Array[j];
			Array[j] = temp;
			j--;
			counter ++;
		}
	}
	return counter;
}


int main(){
	int SortMASTER[10]; //intitalizes an array of 10 numbers to be used
	std::cout << "Please enter your 10 numbers" << std::endl;
	for (int i = 0;i<=9;i++){ //This for loop allows the used to enter a value for each of the 10 enteries of the array Sort.
		std::cin >> SortMASTER[i];
	}
	
	int SortBubble[10];
	int SortQuick[10];
	int SortInsertion[10];
	
	for (int i=0;i<=9;i++)
	{
	    SortBubble[i] = SortMASTER[i];
	    SortQuick[i] = SortMASTER[i];
	    SortInsertion[i] = SortMASTER[i];
	}
	std::cout <<"Bubble sort took " << Bubblesort(SortBubble) << " iterations to sort this." << std::endl;
	std::cout <<"Quick sort took " << Quicksort(SortQuick,0,9) << " iterations to sort this." << std::endl;
	std::cout <<"Insertion sort took " << Insertionsort(SortInsertion) << " iterations to sort this." << std::endl;
	return 0;
}
