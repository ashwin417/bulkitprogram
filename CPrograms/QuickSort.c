#include<stdio.h>

void Read(int [],int);

void Qsort(int A[],int l,int r);

int Partition(int A[],int l,int r);

void Swap(int *a,int *b);

void Print(int [],int);

void main()

{

 int A[50],n;

 printf("Enter the size:");

 scanf("%d",&n);

 Read(A,n);

 Qsort(A,0,n-1);

 Print(A,n);

}

void Read(int A[],int n)

{

 printf("Enter the elements:");

 for(int i=0;i<n;i++)

 {

  scanf("%d",&A[i]);

 } 

 printf("Array before sorting is:");

 for(int i=0;i<n;i++)

 {

  printf("%d ",A[i]);

 }

}

void Print(int A[],int n)

{

 printf("\nThe sorted array is:");

 for(int i=0;i<n;i++)

 {

  printf("%d ",A[i]);

 }

}

void Qsort(int A[],int l,int r)

{

 int pos;

 if(l<r)

 {

  pos=Partition(A,l,r);

  Qsort(A,l,pos-1);

  Qsort(A,pos+1,r);

 }

}

int Partition(int A[],int l,int r)

{

 int key=A[l],i=l+1,j=r;

 

 do

 {

  while(A[i]<key && i<r)

  {

   i++;

  }

  while(A[j]>key && j>l)

  {

   j--;

  }

  if(i<j)

  {

   Swap(&A[i],&A[j]);

  }

 }while(i<j);

 Swap(&A[l],&A[j]);

 return j;

}

 

void Swap(int *a,int *b)

{

 int t=*a;

 *a=*b;

 *b=t;

}
