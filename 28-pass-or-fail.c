// Write a program to find out whether a student is pass or fail, if it requires total 40% and atleast 33% in each subject to pass. Assume 3 subjects & take marks as an input from the user.

# include<stdio.h>

int main(){
    int maths, english, computer;
    printf("Enter maths marks \n");
    scanf("%d", &maths);

    printf("Enter english marks \n");
    scanf("%d", &english);

    printf("Enter computer marks \n");
    scanf("%d", &computer);

    float total;
    total = (maths + english + computer)/3;

    if((total<40) || (maths<33) || (english<33) || (computer<33))
    {
        printf("Your total percentage is %f & you are fail.", total);
    }
    else
    {
        printf("Your total percentage is %f & you are pass", total);
    }
return 0;
}