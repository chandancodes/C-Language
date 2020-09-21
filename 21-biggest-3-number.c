// Write a C program to find the largest of three numbers.

# include<stdio.h>

int main(){
    int num1,num2,num3;

    printf("Enter the value of num1 \n");
    scanf("%d", &num1);

    printf("Enter the value of num2 \n");
    scanf("%d", &num2);

    printf("Enter the value of num3 \n");
    scanf("%d", &num3);

    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("num1 is greater among 3");
        }
        else
        {
            printf("num3 is greater amoung 3");
        }
    }
    else if(num2>num3)
    {
        printf("num2 is greater amoung 3");
    }
    else
    {
        printf("num3 is greater amoung 3");
    }
return 0;
}