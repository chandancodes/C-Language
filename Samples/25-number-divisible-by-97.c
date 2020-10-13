// Calculate a program to check whether a number is divisible by 97 or not.

# include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);

    if(a % 97 == 0)
    {
        printf("Yes, 97 is divisible");
    }
    else
    {
        printf("No, 97 is not divisible");
    }
return 0;
}