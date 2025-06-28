#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("Sorted array(Bubble sort Algorithm):\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ,",array[i]);
    }
    printf("\n");
}
