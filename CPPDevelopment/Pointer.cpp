/* 
Poniter:
- A pointer in C is a way to share a memory address among different contexts (primarily functions).  
- They are primarily used whenever a function needs to modify the content of a variable, of which it doesn't have ownership.
- In order to access the memory address of a variable, "VAL", we need to prepend it with "&" sign. E.g., "&val" returns the memory address of "VAL".
- This memory address is assigned to a pointer and can be shared among various functions. Eg: int*p = &val --> will assign the memory address of "val" to pointer "P".
- To access the content of the memory to which the pointer points, prepend it with a *.
- For example, "*p" will return the value reflected by "val" and any modification to it will be reflected at the source (val).

Question:
You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets "a" with the sum of them, and "b" with the absolute difference of them.
a' = a + b
b' = |a - b|
*/

#include <stdio.h>
#include <windows.h>
#include <cstdlib>

void update(int *a, int *b) {
	int sum = *a + *b;
	int diff = std::abs(*a - *b);
	*a = sum;
	*b = diff;
}

// Before running the program change point_main to main
int point_main() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf_s("%d\n%d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	Sleep(1000);

	return 0;
}
