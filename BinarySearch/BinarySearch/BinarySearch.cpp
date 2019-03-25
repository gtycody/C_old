// BinarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

static int arr[10000000];
//static int MidVal;


//static int TheUpper;
//static int TheLower = 0;
//static int input = 4798127;
//static int system_index_1;
//static bool bol = true;

void arrayConstruct() {
	for (int i = 0; i < 9999999; i++) {
		arr[i] = i;
		//TheUpper = i + 1;
	}
}



int binarySearch(int input_array[], int low, int upper,int input_number) {
	static int MidVal = (low + upper + 1) / 2;
	while (MidVal != input_number) {
		cout << "Midval = " << MidVal <<"\n";
		if (input_number > arr[MidVal]) {
			binarySearch(input_array, MidVal, upper,input_number);
		}
		else if (input_number < arr[MidVal]) {
			binarySearch(input_array, low, MidVal, input_number);
		}
		else {
			break;
		}
	}
	return MidVal;
}

/*void getMidValue() {

MidVal = (TheUpper + TheLower + 1) / 2;
cout << TheUpper - TheLower <<"the middle value is: "<< MidVal << "\t";
}*/

/*void comparsion() {
	if (input > arr[MidVal]) {
		system_index_1 = 1;
		cout << "sysIdex = 1\t";
	}
	else if (input < arr[MidVal]) {
		system_index_1 = 2;
		cout << "sysIdex = 2\t";
	}
	else {
		system_index_1 = 3;
		cout << "sysIdex = 3\t";
	}
}

void judgement() {
	if (system_index_1 == 1) {
		TheUpper = TheUpper;
		TheLower = MidVal;
		bol = true;
		cout << "return true1\n";
	}else if (system_index_1 == 2) {
		TheUpper = MidVal;
		TheLower = TheLower;
		cout << "return true2\n";
		bol = true;
	}else if(system_index_1 == 3){
		cout << "return false3\n";
		bol = false;
	}
}*/

int main()
{
	arrayConstruct();
	cout<<binarySearch(arr, 0, 10000000, 4212);

	/*for (int i = 0; i < 3; i++) {
	getMidValue();
	comparsion();
	judgement();
	}*/

	/*while (bol) {
	getMidValue();
	comparsion();
	judgement();
	}*/


    return 0;
}


