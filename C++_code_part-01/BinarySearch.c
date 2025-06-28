#include<stdio.h>
int main()
{
    int n,data;
    int flag=0;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array in ascendring order :  ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter search iteam = ");
    scanf("%d",&data);
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(array[mid]==data)
        {
            printf("Iteam is found at %d index.\n",mid+1);
            flag=1;
            break;
        }
        else if(array[mid]>data)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==0)
    {
        printf("Search iteam is not found !\n");
    }
}
