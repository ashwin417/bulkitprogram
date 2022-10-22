#include<stdio.h>
void main()
{
    int i,j,nr,np;
    printf("Enter number of processes:");
    scanf("%d",&np);
    printf("Enter number of resources:");
    scanf("%d",&nr);
    int alloc[np][nr],max[np][nr],avail[nr];
    printf("Enter the allocation matrix:\n");
    for(i=0;i<np;i++)
    {
        for(j=0;j<nr;j++)
        {
            scanf("%d",&alloc[i][j]);
        }
    }
    printf("Enter the max matrix:\n");
    for(i=0;i<np;i++)
    {
        for(j=0;j<nr;j++)
        {
            scanf("%d",&max[i][j]);
        }
    }
    printf("Enter the available matrix:\n");
    for(j=0;j<nr;j++)
    {
        scanf("%d",&max[j]);
    }
    for(i=0;i<np;i++)
    {
        for(j=0;j<nr;j++)
        {
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
    int need[np][nr];
    printf("Need matrix is:\n");
    for(i=0;i<np;i++)
    {
        printf("\n");
        for(j=0;j<nr;j++)
        {
            printf("%d\t",&need[i][j]);
        }
    }
    for(i=0;i<np;i++)
        completed[i]=0;
    int c,y,flag,index=0,completed[np],safe[np];
    for(c=0;c<np;c++)
    {
        for(i=0;i<np;i++)
        {
            if(completed[i]==0)
            {
                flag=0;
                for(j=0;j<nr;j++)
                {
                    if(need[i][j]>avail[j])
                        flag=1;
                    break;
                }
                if(flag==0)
                {
                    safe[index++]=i;
                    for(y=0;y<nr;y++)
                    {
                        avail[y]+=alloc[i][y];
                    }
                    completed[i]=1;
                }
            }
        }
    }
    printf("Safe sequence:");
    for(i=0;i<np-1;i++)
    {
        printf("P%d->",safe[i]);
    }
    printf("P%d",safe[np-1]);
}