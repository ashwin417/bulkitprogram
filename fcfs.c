#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,RQ[50],initial,total=0;
	printf("Enter number of request:");
	scanf("%d",&n);
	printf("Enter the request sequence:");
	for(i=0;i<n;i++)
		scanf("%d",&RQ[i]);
	printf("Enter the initial head:");
	scanf("%d",&initial);
	for(i=0;i<n;i++)
	{
		total+=abs(RQ[i]-initial);
		initial=RQ[i];
	}
	printf("Total head movement is %d",total);
}
