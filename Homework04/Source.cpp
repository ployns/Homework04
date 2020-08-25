#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a < 63) {
		printf("Too less");
	}
	else if (a == 63) {
		printf("That's true!!");
	}
	else {
		printf("Too more");
	}
}