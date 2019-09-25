/*Objective   :Program on quicksort
ID No         :18BBTCS140
Name          :Yamini Swetha
Functions used:void,int,quicksort
Output        :enter the size of array:5
	       enter 5 elements:0 12 65 34 78
	       sorted elements:0 12 34 65 78
Date          :04.sept.2019*/

#include<stdio.h>
void quicksort(int[10],int,int);
int main()
{
	int x[20],size,i;
	printf("enter the size of the array:");
	scanf("%d",&size);
	printf("enter %d elements:",size);
	for(i=0;i<size;i++)
	scanf("%d",&x[i]);
	quicksort(x,0,size-1);
	printf("sorted elements:");
	for(i=0;i<size;i++)
	printf("%d\t",x[i]);
	return 0;
}
void quicksort(int x[10],int first,int last)
{
	int pivot,j,temp,i;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(x[i]<=x[pivot]&&i<last)
			i++;
			while(x[j]>x[pivot])
			j--;
			if(i<j)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
		temp=x[pivot];
		x[pivot]=x[j];
		x[j]=temp;
		quicksort(x,first,j-1);
		quicksort(x,j+1,last);
	}
}
