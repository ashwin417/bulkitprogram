#include<stdio.h>

void Read(int [],int);
void Print(int [],int);
void BuildHeap(int [],int);
void Heapsort(int [],int);
void Heapify(int [],int,int);
void Swap(int *,int *);

void main()
{
 int n;
 printf("Enter the size:");
 scanf("%d",&n);
 int A[n];
 Read(A,n);
 Print(A,n);
}

void Read(int A[],int n)
{
 printf("Enter the elements:");
 for(int i=1;i<=n;i++)
 {
  scanf("%d",&A[i]);
 }
 Heapsort(A,n);
}

void Heapsort(int A[],int n)
{
  int i,size=n;
  BuildHeap(A,n);
  for(int i=1;i<n;i++)
  {
   Swap(&A[1],&A[size]);
   size--;
   Heapify(A,1,size);
  }
}

void BuildHeap(int A[],int n)
{
 for(int i=n/2;i>=1;i--)
 {
  Heapify(A,i,n);
 }
}

void Heapify(int A[],int i,int n)
{
 int lar=i;
 int lc=2*i;
 int rc=2*i+1;
 
 if(lc<=n && A[lc]>A[lar])
    lar=lc;
 if(rc<=n && A[rc]>A[lar])
    lar=rc;
    
 if(lar!=i){
   Swap(&A[lar],&A[i]);
   Heapify(A,lar,n);}
}

void Swap(int *a,int *b)
{
 int temp=*a;
 *a=*b;
 *b=temp;
}

void Print(int A[],int n)
{
 printf("Sorte array is:");
 for(int i=1;i<=n;i++)
 {
  printf("%d ",A[i]);
 }
}
