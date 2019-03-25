// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int simple(int *xp, int y) {
	int t = *xp + y;
	*xp = t;
	return t;
}

int main()
{
	int a = 100;
	int *x = &a;
	simple(x,8);
    return 0;
}

