// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include "ConsoleApplication6.h"

using namespace std;

static int sum(int input_array[]) {
	int count = 0;
	for (int i = 0; i < sizeof(input_array) / sizeof(input_array[1]); i++) {
		count = count + input_array[i];
	}
	return count;
}

static void printout(int input_array[]) {
	int count = 0;
	for (int i = 0; i < sizeof(input_array) / sizeof(input_array[1]); i++) {
		cout << i << " ";
	}
	cout << "\n";
}

void sub_set(int input_array[],int arry2[], int index) {
	if (index == sizeof(input_array) / sizeof(input_array[1])) {
		if (sum(input_array) == sum(arry2)) {
			printout(arry2);
		}
	}
	else {
		arry2 = arry2+input_array[index];
		sub_set(input_array, b, index + 1);
		sub_set(input_array, c, index + 1);
	}
}
	

int main()
{
    return 0;
}

