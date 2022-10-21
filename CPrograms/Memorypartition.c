#include <stdio.h>
void firstfit(int[] ,int m,int[] ,int);
void bestfit(int[] ,int m,int[] ,int);
void worstfit(int[] ,int m,int[] ,int);
int main()
{
 int m1,m2,m3,n1,n2,n3;
 int blocksize1[]={100,500,200,300,600};
 int processsize1[]={212,417,112,426};
 m1= sizeof(blocksize1);
 n1= sizeof(processsize1);
 
 int blocksize2[]={100,500,200,300,600};
 int processsize2[]={212,417,112,426};
 m2 = sizeof(blocksize2);
 n2= sizeof(processsize2);
 
 int blocksize3[]={100,500,200,300,600};
 int processsize3[]={212,417,112,426};
 m3 = sizeof(blocksize3);
 n3 = sizeof(processsize3);
 firstfit(blocksize1,m1,processsize1,n1);
 bestfit(blocksize2,m2,processsize2,n2);
 worstfit(blocksize3,m3,processsize3,n3);
}
void firstfit(int blocksize1[],int m,int processsize1[],int n)
{
    int i,j;
    int allocation[n];
    for(int i=0;i<n;i++)
    allocation[i]=-1;
    for(i=0;i<n;i++)
     { 
         for(j=0;j<m;j++)
         {
             if(blocksize1[j]>=processsize1[i])
              {
                   allocation[i]=j;
                   blocksize1[j]-=processsize1[j];
                   break;
                   
              }
         }
     }
     printf("\t\tFirstfit");
     printf("\n Process no\t Process size\tBlock no\n");
     for(int i=0;i<n;i++)
     {
         printf("%i\t\t",i+1);
         printf("%i\t\t",processsize1[i]);
         if(allocation[i]!=-1)
         printf("%i",allocation[i]+1);
         else
         printf("not allocated");
         printf("\n");
     }
}

void bestfit( int blocksize2[], int m,int processsize2[],int n)
    {
         int i,j;
         int allocation[n];
         for(i=0;i<n;i++)
          allocation[i]=-1;
         for(i=0;i<n;i++)
         {
              int indexplaced=-1;
              for(j=0;j<m;j++)
               {
                   if(blocksize2[j]>=processsize2[i])
                    {
                        if(indexplaced==-1)
                        indexplaced=j;
                        else if (blocksize2[j]<blocksize2[indexplaced])
                        indexplaced =j;
                    }
               }
         
             if(indexplaced!=-1)
              {  allocation[i]=indexplaced;
                 blocksize2[indexplaced]-=processsize2[i];
              }     
         }
         printf("\t\t Bestfit");
         printf("\n Process no \t Process size\t block no\n");
         for(i=0;i<n;i++)
         {
             printf("%d\t\t%d\t\t",i+1,processsize2[i]);
             if(allocation[i]!=-1)
              printf("%d\t\n",allocation[i]+1);
              else
              printf("not allocated\n");
            
         }
    }

void worstfit(int blocksize3[],int m,int processsize3[],int n)
{
   
         int i,j;
         int allocation[n];
         for(i=0;i<n;i++)
         allocation[i]=-1;
         for(i=0;i<n;i++)
         {
              int indexplaced=-1;
              for(j=0;j<m;j++)
               {
                   if(blocksize3[j]>=processsize3[i])
                    {
                        if(indexplaced==-1)
                        indexplaced=j;
                        else if (blocksize3[j]>blocksize3[indexplaced])
                        indexplaced =j;
                    }
               }
         
             if(indexplaced!=-1)
              {  allocation[i]=indexplaced;
                 blocksize3[indexplaced]-=processsize3[i];
              }     
         }
         printf("\t\t worst fit");
         printf("\n Process no \t Process size\t block no\n");
         for(i=0;i<n;i++)
         {
             printf("%d\t\t%d\t\t",i+1,processsize3[i]);
             if(allocation[i]!=-1)
              printf("%d\t",allocation[i]+1);
              else
              printf("not allocated\n");
             
         }
    
 
}
