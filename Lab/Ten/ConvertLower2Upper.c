//created by akashbhalotia

//Change all lowercase letters to uppercase in a sentence
#include <stdio.h>
int main()
{
	int i;
	char str[100];
	
	printf("Enter a sentence\n");
	scanf("%[^\n]",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97&&str[i]<=122)
			str[i]-=32;
	}
	
	printf("Modified:\n%s\n",str);
	
	return 0;
}
