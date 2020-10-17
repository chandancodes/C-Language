# include<stdio.h>

int main(){
    int num1,num2,temp=0;
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("The value of num1 after swap: %d \n", num1);
    printf("The value of num2 after swap: %d \n", num2);
return 0;
}