/*
	Create an array of student structure to store the roll no.,
	name and marks in 3 subjects. Input the details of N students
	in to the array and display roll no., name and total marks
	of each student in decreasing order of total marks.
*/

//created by akashbhalotia
#include <stdio.h>
struct Student
{
	char name[100];
	int roll,marks[3],total;
} details[100];

void swap(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void swapStrings(char str1[], char str2[])
{
	char tmp[100],i;
	
	for(i=0;str1[i]!='\0';i++)
		tmp[i]=str1[i];
	tmp[i]='\0';
	
	for(i=0;str2[i]!='\0';i++)
		str1[i]=str2[i];
	str1[i]='\0';
	
	for(i=0;tmp[i]!='\0';i++)
		str2[i]=tmp[i];
	str2[i]='\0';
}
void sort(int N)
{
	int i,j,k,tmp;
	
	//Bubble Sort
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(details[j].total<details[j+1].total)
			{
				swap(&details[j].total,&details[j+1].total);
				swap(&details[j].roll,&details[j+1].roll);
				
				for(k=0;k<3;k++)
					swap(&details[j].marks[k],&details[j+1].marks[k]);
				
				swapStrings(details[j].name,details[j+1].name);
			}
		}
	}
}

void print(int N)
{
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("Name = %s\n",details[i].name);
		printf("Roll number = %d\n",details[i].roll);
		printf("Total marks = %d\n\n",details[i].total);
	}
}

int main()
{
	int i,N;
	
	printf("Enter number of students\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Student: %d\n",(i+1));
		
		printf("Enter name\n");
		scanf("%s",details[i].name);
		
		printf("Enter roll number\n");
		scanf("%d",&details[i].roll);
		
		printf("Enter marks in 3 subjects\n");
		scanf("%d%d%d",&details[i].marks[0],&details[i].marks[1],&details[i].marks[2]);
		
		details[i].total=details[i].marks[0]+details[i].marks[1]+details[i].marks[2];
		printf("\n");
	}
	
	sort(N);
	print(N);
	
	return 0;
}
