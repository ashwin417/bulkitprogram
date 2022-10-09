//This Program is not a needed one!!!!!!!!!!

#include<stdio.h>
void LRU(int prs[], int n, int frame);

void main()
{
	int n,i,frame;
	printf("Enter the Length of sequence : ");
	scanf("%d",&n);
	int prs[n];
	printf("Enter the Sequence : ");
	for(i=0;i<n;i++)
		scanf("%d",&prs[i]);
	printf("Enter the number of frame : ");
	scanf("%d",&frame);
	LRU(prs,n,frame); 
}

void LRU(int p[], int n, int frame)
{
	int frames[n],i,j,k,l,x,y,pagefault = 0,index,temp[n];
	printf("\nValues\tFrame1\tFrame2\tFrame3\n");
	
	for(i=0;i<n;i++)
	{
		frames[i]=-1;
	}
	for( i=0;i<n;i++ )
	{
		x=0,y=0;
		for(j=0;j<frame;j++)
		{
			if(frames[j]==p[i])
			{
				x=1;y=1;
				break;
			}
		}
		
		if(x==0)
		{
			for(j=0;j<frame;j++)
			{
				if(frames[j]==-1)
				{
					frames[j]=p[i];
					y=1;
					pagefault++;
					break;
				}
			}
		}
		if(y==0)
		{
			for(j=0;j<frame;j++)
			{
				temp[j]=0;
			}
			for(k=n-1, l=1; l<= frame-1;l++,k--)
			{
				for(j=0;j<frame;j++)
				{
					if(frames[j] == p[k])
					{
						temp[j]=1;
					}
				}
			}
			for(j=0;j<frame;j++)
			{
				if(temp[j]==0)
				{
					index = j;
				}
			}
			frames[index] = p[i];
			pagefault++;
				
		}
		printf("\n");
		printf("%d\t",p[i]);
		for(j = 0; j < frame; j++)
		{ 
			if(frames[j]!=-1)
			{
				printf("%d\t", frames[j]);
			}
			else
			{
				printf("\t");
			}
		}
	}
	printf("\nTotal Page Faults: %d\n", pagefault);
	
}
