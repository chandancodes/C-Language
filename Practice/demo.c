# include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter Num1 & Num2 Values: \n");
    scanf("%d %d", &num1, &num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("New Value Of Num1:\n", num1);
    printf("New Value Of Num2:\n", num2);
return 0;
}