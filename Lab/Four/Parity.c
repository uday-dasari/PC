#include<stdio.h>
#include<math.h>

int main()
{
	int N;

	printf("Enter a number\n");
	scanf("%d",&N);
	
	if(N%2)
		printf("Odd\n");
	else
		printf("Even\n");

	return 0;
}
