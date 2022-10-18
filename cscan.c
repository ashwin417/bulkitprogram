#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,RQ[50],initial,index,size,dir,temp,total=0;
	printf("Enter number of request:");
	scanf("%d",&n);
	printf("Enter the request sequence:");
	for(i=0;i<n;i++)
		scanf("%d",&RQ[i]);
	printf("Enter the initial head:");
	scanf("%d",&initial);
	printf("Enter the disk size:");
	scanf("%d",&size);
	printf("Enter the direction (high-1/low-0)");
	scanf("%d",&dir);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(RQ[j]>RQ[j+1])
			{
				temp=RQ[j];
				RQ[j]=RQ[j+1];
				RQ[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(initial<RQ[i])
		{
			index=i;
			break;
		}
	}
	if(dir==1)
	{
		for(i=index;i<n;i++)
		{
			total+=abs(RQ[i]-initial);
			initial=RQ[i];
		}
		total+=abs(RQ[i-1]-size-1);
		total+=abs(size-1-0);
		initial=0;
		for(i=0;i<index;i++)
		{
			total+=abs(RQ[i]-initial);
			initial=RQ[i];
		}
	}
	else
	{
		for(i=index-1;i>=0;i--)
		{
			total+=abs(RQ[i]-initial);
			initial=RQ[i];
		}
		total+=abs(RQ[i+1]-0);
		total+=abs(size-1-0);
		initial=size-1;
		for(i=n-1;i>=index;i--)
		{
			total+=abs(RQ[i]-initial);
			initial=RQ[i];
		}
	}
	printf("Total head movement is %d",total);
}
