#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,rq[100],intial,thm=0,size,move,index,temp,ind;
    
    printf("Enter no of requests: ");
    scanf("%d",&n);
    printf("Enter Request Sequence: \n");
    for(i=0;i<n;i++)
        scanf("%d",&rq[i]);
    printf("Enter intial head position: ");
    scanf("%d",&intial);
    printf("Enter size of the disk: ");
    scanf("%d",&size);
    printf("Enter head movement direction 1->High 2->Low: ");
    scanf("%d",&move);
    
    for(i=0;i<n-1;i++)
    {
        ind=i;
        for(j=i+1;j<n;j++)
        {
            if(rq[j]<rq[ind])
                ind=j;
        }
        temp=rq[i];
        rq[i]=rq[ind];
        rq[ind]=temp;
    }
    
    for(i=0;i<n;i++)
    {
        if(rq[i]>intial)
        {
            index=i;
            break;
        }
    }
    if(move==1)
    {
        for(i=index;i<n;i++)
        {
            thm=thm+abs(rq[i]-intial);
            intial=rq[i];
        }
        thm=thm+abs(size-rq[i-1]-1);
        thm=thm+abs(size-1-0);
        intial=0;
        for(i=0;i<index;i++)
        {
            thm=thm+abs(rq[i]-intial);
            intial=rq[i];
        }
    }
    else
    {
        for(i=index-1;i>=0;i--)
        {
            thm=thm+abs(rq[i]-intial);
            intial=rq[i];
        }
        thm=thm+abs(rq[i+1]-0);
        thm=thm+abs(0-size-1);
        intial=size-1;
        for(i=size-1;i>=index;i--)
        {
            thm=thm+abs(rq[i]-intial);
            intial=rq[i];
        }
    }
    printf("Total Head Movement: %d",thm);
}
