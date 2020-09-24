// Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.

# include<stdio.h>

int main(){
    int a;
    printf("Enter year \n");
    scanf("%d", &a);

    if(a % 4 == 0)
    {
        if(a % 100 == 0)
        {
            if(a % 400 == 0)
            {
                printf("The year is a leap year (it has 366 days).");
            }
            else
            {
                printf("The year is not a leap year (it has 365 days).");
            }
        }
    }
    else
    {
        printf("The year is not a leap year (it has 365 days).");
    }
return 0;
}