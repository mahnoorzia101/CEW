#include <stdio.h>
int main()
{
    int n, i, num=1, sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using a for loop
    printf("Using for loop:\n");
    for ( i = 1; i <= n; i++)
    {
        printf("%d ", num);
        sum += num;
        num += 2;
    }
    printf("\nSum: %d\n\n", sum);

    // Reset variables
    num = 1;
    sum = 0;
    i = 1;

    // Using a while loop
    printf("Using while loop:\n");
    while (i<=n)
    {
        printf("%d ", num);
        sum += num;
        num += 2;
        i++;
    }
    printf("\nSum: %d\n\n", sum);

    // Reset variables
    num = 1;
    sum = 0;
    i = 1;

    // Using a do-while loop
    printf("Using do-while loop:\n");
    do
    {
        printf("%d ", sum);
        sum += num;
        num += 2;
        i++;
    } while (i<=n);
    printf("\nSum: %d\n\n", sum);

    return 0;
}
