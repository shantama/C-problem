#include<stdio.h>
#include<limits.h>
#define TNT_MAX 30
int min(int a,int b)
{
    return a<b?a:b;
}
int coinChange(int iteam,int amount,int coins[])
{
int dataTable[iteam+1][amount+1];
    for(int i=0;i<=iteam;i++)
    {
        for(int j=0;j<=amount;j++)
        {
           if(j==0)
           {
               dataTable[i][j]=0;
           }
           else if(i==0)
           {
               dataTable[i][j]=TNT_MAX;
           }
           else if(coins[i-1]>j)
           {
               dataTable[i][j]=dataTable[i-1][j];
           }
           else
           {
               dataTable[i][j]=min(dataTable[i-1][j],dataTable[i][j-coins[i-1]]+1);
           }
    }
    }
    if(dataTable == TNT_MAX)
    {return -1;
    }
    else{
     return dataTable[iteam][amount];
    }
}
int main()
{
    int iteam,amount;
    printf("enter no of coins = ");
    scanf("%d",&iteam);
    int coins[iteam];
    printf("ENter coins : ");
    for(int i=0;i<iteam;i++)
    {
        scanf("%d",&coins[i]);
    }
    printf("Enter the amount : ");
    scanf("%d",&amount);
    int max=coinChange(iteam,amount,coins);
    if(max==-1)
    {
        printf("not");
    }
    else{
    printf("%d way(s).",max);
    }
    return 0;

}
