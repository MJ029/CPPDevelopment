/*
- An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.
Declaration:
	int arr[10]; //Declares an array named arr of size 10, i.e; you can store 10 integers.
Accessing elements of an array:
	Indexing in arrays starts from 0.So the first element is stored at arr[0],the second element at arr[1]...arr[9]

Problem:
	You'll be given an array of  integers and you have to print the integers in the reverse order.

Input Format:
	The first line of the input contains ,where  is the number of integers.The next line contains  integers separated by a space.

Constraints:
	1 <= N <= 1000
	1 <= Ai <= 10000 -->  "Ai" is the "Ith" integer in the array.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <Windows.h>
using namespace std;

int array_main() {
	int n, ar[10005];
	cin >> n;
	for (int i = 0; i < n; i++)cin >> ar[i];
	for (int i = n - 1; i >= 0; i--)cout << ar[i] << " ";
	cout << endl;
	Sleep(1000);
	return 0;
}

