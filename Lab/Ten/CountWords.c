//created by akashbhalotia

//Count number of words in a sentence.
#include <stdio.h>

int isEmpty(char str[])
{
	return (str[0]=='\0')?1:0;
}

int main()
{
	int i,count=0;
	char str[100];
	
	printf("Enter a sentence\n");
	scanf("%[^\n]",str);
	
	if(!isEmpty(str))
	{
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]==' '&&(i!=0&&str[i-1]!=' '))
				count++;
		}
		
		if(str[i-1]!=' ')
			count++;
	}
	
	printf("Number of words= %d\n",count);
	
	return 0;
}
