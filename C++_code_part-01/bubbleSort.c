#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int array[n];
    printf("enter numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d,",&array[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("sorting numbers:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d,",array[i]);
    }
}
