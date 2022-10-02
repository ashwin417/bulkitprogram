#include <stdio.h>
#include <stdlib.h>
int csan()
{ int n,rq[10],initial=0,size=0,move=0,thd,i=0;
    printf("enter the number of requests");
    scanf("%d",&n);
    printf("enter the request sequence");
    for(int i=0;i<n;i++)
    scanf("%d",&rq[i]);
    printf("enter the initial head position");
    scanf("%d",&initial);
    printf("enter the total disk size");
    scanf("%d",&size);
    printf("enter the move 1 for high and 0 for low");
    scanf("%d",&move);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(rq[j]>rq[j+1])
            {
                int temp;
                temp=rq[j];
                rq[j]=rq[j+1];
                rq[j+1]=temp;
            }
        }
    }
    int index;
    for(int i=0;i<n;i++)
    {
        if(initial<rq[i])
        {
            index=i;
            break;
        }
    }
    
    if(move==1)
    {
        for(int i=index;i<n;i++)
        {
            thd=thd+abs(rq[i]-initial);
            initial=rq[i];
        }
    
    thd=thd+abs(size-rq[i-1]-1);
    thd=thd+abs(size-1-0);
    initial=0;
          for(int i=0;i<index;i++)
            {
            thd=thd+abs(rq[i]-initial);
            initial=rq[i];
            }
    }
    else
    {
        for(int i=index-1;i>=0;i--)
        {
          
            thd=thd+abs(rq[i]-initial);
            initial=rq[i];  
        }
        thd=thd+abs(rq[i+1]-0);
        thd=thd+abs(size-1-0);
        initial=size-1;
        for(int i=n-1;i>index;i--)
           { thd=thd+abs(rq[i]-initial);
            initial=rq[i];
           }
    }
    printf("total hed movement=%d",thd);
    return 0;
}
int scan()
{
int n,rq[8],initial=0,size=0,move=0,thd =0,i=0;
    printf("enter the number of requests");
    scanf("%d",&n);
    printf("enter the request sequence");
    for(int i=0;i<n;i++)
    scanf("%d",&rq[i]);
    printf("enter the initial head position");
    scanf("%d",&initial);
    printf("enter the total disk size");
    scanf("%d",&size);
    printf("enter the move 1 for high and 0 for low");
    scanf("%d",&move);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(rq[j]>rq[j+1])
            {
                int temp;
                temp=rq[j];
                rq[j]=rq[j+1];
                rq[j+1]=temp;
            }
        }
    }
    int index;
    for(int i=0;i<n;i++)
    {
        if(initial<rq[i])
        {
            index=i;
            break;
        }
    }
    
    if(move==1)
    {
        for(int i=index;i<n;i++)
        {
            thd=thd+abs(rq[i]-initial);
            initial=rq[i];
        }
    
    thd=thd+abs(size-rq[i-1]-1);
    initial=size-1;
          for(int i=index-1;i>=0;i--)
            {
            thd=thd+abs(rq[i]-initial);
            initial=rq[i];
            }
    }
    else
    {
        for(int i=index-1;i>=0;i--)
        {
          
            thd=thd+abs(rq[i]-initial);
            initial=rq[i];  
        }
        thd=thd+abs(rq[i+1]-0);
        initial=0;
        for(int i=index;i<n;i++)
           { thd=thd+abs(rq[i]-initial);
            initial=rq[i];
           }
    }
    printf("total hed movement=%d",thd);
    return 0;
}    
  
  int fcfs()
{
int n,rq[8],initial=0,size=0,move=0,thd =0,i=0;
    printf("enter the number of requests");
    scanf("%d",&n);
    printf("enter the request sequence");
    for(int i=0;i<n;i++)
    scanf("%d",&rq[i]);
    printf("enter the initial head position");
    scanf("%d",&initial);
    for(int i=0;i<n;i++)
           { thd=thd+abs(rq[i]-initial);
            initial=rq[i];
           }
    printf("total hed movement=%d",thd);
    return 0;
}               

int main()
{
    printf("1.scan\n2.csan\n3.fcfs");
    int o;
    do{
        printf("enter the choice\n");
        scanf("%d",&o);
       switch(o)
       {
          case 1:scan();
                 break;
          case 2:csan();
                break;
          case 3:fcfs();
                break;
          case 4:printf("exiting");
                 exit(0); 
       }
      }while(0!=4);
      return 0;
}      
       
