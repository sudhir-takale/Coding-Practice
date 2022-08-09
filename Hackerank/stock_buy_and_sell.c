//  stock==[5,2,6,1,4,7,3,6]

/* when the price at maxima we sold
when price are minima we buy the sell

minima== when left and right side num are big ,2 is minima

maxima=when left and the right are small 6 is maxima  */

int maxprofit(int a[]
{
    int profit;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > a[i - 1])
        {
            profit = profit + (a[i] - a[i - 1]);
        }
    }
    printf("\n In this stocks we get the max profit of %d,", profit);
}

#include <stdio.h>

int main()
{

    int a[5];
    printf("\nEnter the inputs :\n");
    for (int i = 0; i <= 5; i++)
    {
        scanf("%d", a[i]);
    }

    maxprofit(a[5]);

    return 0;
}