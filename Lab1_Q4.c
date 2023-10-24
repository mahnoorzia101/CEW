#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal){
    if(decimal > 0){
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);

    }
}

int main()
{
    int decimal;

    /* Prompting user to Enter decimal number */
    printf("Enter your decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        decimalToBinary(decimal);
        printf("\n");
    }

    return 0;
}
