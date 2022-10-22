#include <stdio.h>
#include <stdlib.h>

void fcfs(int n,int rq[100],int intial);
void scan(int n,int rq[100],int intial,int size,int move);
void cscan(int n,int rq[100],int intial,int size,int move);

int i,j,n,rq[100],intial,thm=0,size,move;

int main()
{
    printf("\n\nDISK SCHEDULING ALGORITHM\n\n");
    int ch;
    printf("Enter number of request: ");
    scanf("%d",&n);
    printf("Enter request sequence:\n");
    for(i=0;i<n;i++)
        scanf("%d",&rq[i]);
    printf("Enter intial head position: ");
    scanf("%d",&intial);
    printf("Enter size of the disk: ");
    scanf("%d",&size);
    printf("Enter head movement direction 1->High 2->Low: ");
    scanf("%d",&move);
    do
    {
        printf("\n\n1.FCFS\n2.SCAN\n3.CSCAN\n4.EXIT\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                fcfs(n,rq,intial);
                break;
            case 2:
                scan(n,rq,intial,size,move);
                break;
            case 3:
                cscan(n,rq,intial,size,move);
                break;
            case 4:
                printf("Exiting...");
                break;
            default:
                printf("Invalid Entry");
                break;
        }
    }while(ch!=4);
} 
    
    
void fcfs(int n,int rq[100],int intial)   
{
    thm=0;
    for(i=0;i<n;i++)
    {
        thm=thm+abs(intial-rq[i]); //thm:Total Head Movement and abs: absolute value
        intial=rq[i];
    }
    printf("Total Head Movement: %d",thm);
}

void scan(int n,int rq[100],int intial,int size,int move)
{
    int index,temp,ind,thm=0;
    
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
        intial=size-1;
        for(i=index-1;i>=0;i--)
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
        intial=0;
        for(i=index;i<n;i++)
        {
            thm=thm+abs(rq[i]-intial);
            intial=rq[i];
        }
    }
    printf("Total Head Movement: %d",thm);
    
}

void cscan(int n,int rq[100],int intial,int size,int move)
{
    int index,temp,ind,thm=0;
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
