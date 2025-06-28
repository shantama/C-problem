#include <stdio.h>

int coinChange(int coins[], int item, int amount) {
    int dataTable[item + 1][amount + 1];

    // Initialize the table
    for (int i = 0; i <= item; i++) {
        for (int j = 0; j <= amount; j++) {
            if (j == 0) {
                dataTable[i][j] = 1;  // There's one way to make 0 with any set of coins.
            } else if (i == 0) {
                dataTable[i][j] = 0;  // No coins available, no way to make any amount.
            } else if (coins[i - 1] <= j) {
                dataTable[i][j] = dataTable[i - 1][j] + dataTable[i][j - coins[i - 1]];

            } else {
                dataTable[i][j] = dataTable[i - 1][j];
            }
        }
    }
    return dataTable[item][amount];
}

int main() {
    int n, amount;
    printf("Enter the number of coins : ");
    scanf("%d", &n);
    int coins[n];
    printf("Enter coins : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }
    printf("Enter the amount : ");
    scanf("%d", &amount);
    int max = coinChange(coins, n, amount);
    printf("%d way(s).\n", max);
}
