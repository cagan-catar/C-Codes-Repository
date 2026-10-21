#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int x, int y){
	return x+y;
}
int cikarma(int x, int y){
	return x-y;
}

int main()
{
	int myNumber=cikarma(sumNumbers(2,5),4);
	
	printf("result is %d\n",myNumber);
	
	return 0;
}
