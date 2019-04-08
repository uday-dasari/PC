#include <stdio.h>
int main()
{
 
 int arr[]={5,4,3,2,1};
 int sum=0,i;
 int *p=arr;
 
 for(i=0;i<5;i++)
 sum+=*(p+i);
 
 printf("%d",sum);
}
