# include<stdio.h>

int main(){
    float num1,num2;
    printf("Enter Num1 & Num2 Values: \n");
    scanf("%f %f", &num1,&num2);
    printf("%.2f * %.2f = %.2f", num1,num2,num1*num2);
return 0;
}