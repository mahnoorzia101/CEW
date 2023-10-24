#include<stdio.h>
int main()
{
    float height;

    /* Prompt the user to enter the height */
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    // Cheking the condition
    if(height < 150){
        printf("Drawf");
    }else if (height >= 150 && height < 165)
    {
        printf("Average");
    }else{
        printf("Tall");
    }
    
    return 0;
}
