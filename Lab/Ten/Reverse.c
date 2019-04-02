//created by akashbhalotia

//Change all lowercase letters to uppercase in a sentence
#include <stdio.h>
int length(char str[]) //finds number of proper character in the string
{
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}

int main()
{
	int i,len;
	char str[100],rev[100];
	
	printf("Enter a string\n");
	scanf("%s",str);
	
	len=length(str);
	
	for(i=0;i<len;i++) //reversing
		rev[i]=str[len-i-1];
	
	printf("Reversed:\n%s\n",rev);
}
