#include<stdio.h>
int main()
{
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    int array[n];
    printf("enter numbers in ascendring order :");
    for(int i=0;i<n;i++)
    {
        scanf("%d,",&array[i]);
    }
    int left,right,middle,item;
    printf("enter the search item=");
    scanf("%d",&item);
    left=0;
    right=n-1;
    while(left<=right)
    {
        middle=(left+right)/2;
        if(array[middle] == item)
        {
            printf("Item is found at index %d\n",middle+1);
            return 0;
        }
        else if(array[middle]<item)
        {
            left=middle+1;
        }
        else{
            right=middle-1;
        }
    }

    printf("item is not found\n");
}
