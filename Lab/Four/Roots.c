#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,D,r1,r2;

	printf("Enter coefficients\n");
	scanf("%f%f%f",&a,&b,&c);

	D=pow(b,2)-4*a*c;

	if(D<0)
		printf("The roots are imaginary\n");
	else
	{
		r1=(-b+sqrt(D))/(2*a);
		r2=(-b-sqrt(D))/(2*a);

		printf("The roots are:\n");
		printf("%f, %f\n",r1,r2);
	}
	return 0;
}
