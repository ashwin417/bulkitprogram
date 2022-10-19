#include<stdio.h>
void main()
{
    int i,j,n,pos=0,temp=0,wt[50],bt[50],tat[50],pr[50],p[50],totalwt=0,totaltat=0;
    printf("Enter no: of processes:");
    scanf("%d",&n);
    printf("Enter burst time:\n");
    for(i=0;i<n;i++)
    {
        printf("P%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    printf("Enter priority:\n");
    for(i=0;i<n;i++)
    {
        printf("P%d:",i+1);
        scanf("%d",&pr[i]);
    }
    for(i=0;i<n;i++)
    {    
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;
    for(i=1;i<n;i++)
        wt[i]=wt[i-1]+bt[i-1];
    for(i=0;i<n;i++)
        tat[i]=wt[i]+bt[i];
    printf("Processes\tPriority\tBurst time\tWaiting time\tTurnaround time\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i],pr[i],bt[i],wt[i],tat[i]);
        totalwt+=wt[i];
        totaltat+=tat[i];
    }
    printf("Average waiting time=%f",(float)totalwt/n);
    printf("\nAverage turnaround time=%f",(float)totaltat/n);
}