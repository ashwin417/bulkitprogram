 #include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int ar[n], key;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 1; i < n; i++)
    {
        key = ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>key){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=key;

    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", ar[i]);
    }
    return 0;
}