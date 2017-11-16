#include <stdio.h>

//int * smaller(int *x, int *y);

int main()
{
	int ary1[5] = { 4,5,6,7,8 };
	int ary2[5] = { 1,3,5,7,9 };
	int ary3[5] = { 0,2,4,6,8 };
	int i;
	int* ap[3] = { ary1, ary2, ary3 };
	for (i = 0; i < 3; i++)
	{
		printf("%p %d ", ap[i], (*ap[i]));
	}

	return 0;
}

