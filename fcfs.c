#include<stdio.h>
void display(int n,int bt[],int wt[],int tat[]);
int i,wt[50],tat[50];
void main()
{
    int n,bt[50],p[50];
    printf("Enter no: of processes:");
    scanf("%d",&n);
    printf("Enter burst time:");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    display(n,bt,wt,tat);
}
void waitingtime(int n,int bt[])
{
    wt[0]=0;
    for(i=1;i<n;i++)
        wt[i]=wt[i-1]+bt[i-1];
}
void turnaroundtime(int n,int bt[],int wt[])
{
    for(i=0;i<n;i++)
        tat[i]=wt[i]+bt[i];
}
void display(int n,int bt[],int wt[],int tat[])
{
    int totalwt=0,totaltat=0;
    waitingtime(n,bt);
    turnaroundtime(n,bt,wt);
    printf("Processes\tBurst time\tWaiting time\tTurnaround time \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
        totalwt+=wt[i];
        totaltat+=tat[i];
    }
    printf("Average waiting time=%f\n",(float)totalwt/n);
    printf("Average turnaround time=%f",(float)totaltat/n);
}