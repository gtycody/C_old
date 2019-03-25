// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int door1, door2, door3;
int guess1, guess2;

void setAllDoors() {
	door1 = rand() % 2;
	if (door1 != 1) {
		door2 = rand() % 2; 
		if (door2 != 1) {
			door3 = 1;
		}
		else {	
			door3 = 0;
		}
	}
	else {
		door2 = door3 = 0;
	}
}

void guess() {
	guess1 = rand() % 2;

}
int main()
{
	
	for (int i = 0; i < 10; i++) {
		setAllDoors();
		cout << door1 << door2 << door3 << "\n";
	}
	
	cout << "hello world";

    return 0;
}

