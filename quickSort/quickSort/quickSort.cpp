// quickSort.cpp : Defines the entry point for the console application.
// quickSort with recursive

#include<stdio.h>
#include "stdafx.h"
#include <ctime>
#include<iostream>
#include<stdlib.h>

using namespace std;

int arr[25] = { };
int length = (sizeof(arr) / sizeof(arr[1]));
bool judge = true;

void constrution() {
	for (int i = 0; i < length; i++) {
		int count = rand();
		arr[i] = count;
	}
	int length = (sizeof(arr) / sizeof(arr[1]));
}


//swap function
void swap(int pointer, int middle_of_array) {
	int temp = arr[pointer];
	arr[pointer] = arr[middle_of_array];
	arr[middle_of_array] = temp;
}
// printout whole array
void printout() {
	for (int i = 0; i <length; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void qSorting(int input_array[], int low, int upper) {
	int pivot = (low+upper) / 2;
	for (int pointer = low; pointer <= length; pointer++) {
		if (pointer == upper) {
			break;
		}else{
			//cout << "arr[pointer] = " << arr[pointer] << " arr[pivot] = " << arr[pivot]<<"\n";
			if (pointer < pivot && arr[pointer] > arr[pivot]) {
				swap(pivot, pointer);
				pointer = 0;
				//printout();
				continue;
			}else if (pointer > pivot && arr[pointer] < arr[pivot]) {
				swap(pivot, pointer);
				//printout();
				pointer = 0;
				continue;
			}
			else {
				//printout();
			}
		}
		qSorting(input_array, low, pivot);
		qSorting(input_array, pivot + 1, upper);
	}
}

void BubbleSort(int arr[]) {
	for (int i = length; i > 0; i--){
		for (int j = 0; j < length -1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(j, j + 1);
				//printout();
			}
			else;
		}
	}
}


//wai lai---------------------------------------------------------------------
//Data swop function
void Swap(int &p, int &q)
{
	int temp = p;
	p = q;
	q = temp;
}

//Partition function
int Partition(int ArrayInput[], int nLow, int nHigh)
{

	int nTemp = ArrayInput[nHigh];
	int i = nLow, j = nLow - 1;
	for (; i<nHigh; i++)
	{
		if (ArrayInput[i] <= nTemp)
		{
			j++;
			if (i != j)
			{
				Swap(ArrayInput[i], ArrayInput[j]);
			}
		}
	}

	Swap(ArrayInput[j + 1], ArrayInput[nHigh]);

	return (j + 1);
}

//Quick sort
void Quick_sort(int ArrayInput[], int nLow, int nHigh)
{
	if (nLow < nHigh)
	{
		int nIndex = Partition(ArrayInput, nLow, nHigh);
		Quick_sort(ArrayInput, nLow, nIndex - 1);
		Quick_sort(ArrayInput, nIndex + 1, nHigh);
	}
}

//-------------------------------------------------------------


void QuickSort() {

}




int main()
{
	int start, end;
	start = clock();
	constrution();
	//qSorting(arr,0,60);
	Quick_sort(arr, 0, 25);
	BubbleSort(arr);
	printout();	
	end = clock();
	cout <<"Using : "<< end - start<<" ms ";
    return 0;
}

