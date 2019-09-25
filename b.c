/*program on multiple stack*/
#include<stdio.h>
#define max 10
int top1,top2,arr[max],b1,b2,n=4;
void push();
void pop();
void display();
void main()
{
	int ch;
	top1==-1,top2=b2=max-1/2;
	do
	{
		printf("\n 1:push\n 2:pop\n 3:display\n 4:exit\n choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:printf("exiting from program\n");
			break;
			case 5:printf("wrong choice\n");
			break;
		}
	}
	while(ch!=4);
}
void push()
{
	int x,ch;
	printf("enter a no \n");
	scanf("%d",&x);
	
	printf("\n press 1 to push in stack1 or press 2 for stack2:");
	scanf("%d",&ch);
	if(ch==1)
	{
		if(top1==b2)
		{
			printf("stack overflow\n");
			return;
		}
		else
		arr[++top1]=x;
	}
	if(ch==2)
	{
		if(top2==1)
		{
			printf("stack overflow\n");
			return;
		}
		else
		arr[++top1]=x;
	}
}
void pop()
{
	int y,ch;
	printf("\n press 1 to pop from stack1 or press 2 for stack2");
	scanf("%d",&ch);
	if(ch==1)
	{
		if(top1==-1)
		{
			printf("stack underflow\n");
			return;
		}
		y=arr[top1];
		arr[top1--]=0;
	}
	else
	{
		if(top2==b2)
		{
			printf("stack underflow\n");
			return;
		}
		y=arr[top2];
		arr[top2--]=0;
	}
	printf("\n %d elements is successfully poped from stack\n",y);
	return;
}
void display()
{
	int i;
	if(top1==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("elemets of stack 1 are:\n");
		for(i=0;i<=top1;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	if(top2==b2)
	{
		printf("stack 2 is empty\n");
	}
	else
	{
		printf("elements of stack2 are:\n");
		for(i=b2+1;i<=top2;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	return;
}




