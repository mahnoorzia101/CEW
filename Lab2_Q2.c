#include <stdio.h>
int main()
{
    int n, i, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    spaces = n-1;
    for ( i = 1; i <= n; i++)
    {
        for (int j = spaces; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
        printf("* ");
        }
        printf("\n");
        spaces--;
        
    }
    
    
    return 0;
}
