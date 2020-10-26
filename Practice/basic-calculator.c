# include<stdio.h>

int main(){
    char op;
    int num1,num2,sum,minus,division,product;
    printf("Enter Operator [+,-,*,/]: \n");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("Enter Num1 Value: \n");
        scanf("%d", &num1);
        printf("Enter Num2 Value: \n");
        scanf("%d", &num2);
        sum = num1+num2;
        printf("The Sum of Num1 + Num2 = %d \n", sum);
        break;
    case '-':
        printf("Enter Num1 Value: \n");
        scanf("%d", &num1);
        printf("Enter Num2 Value: \n");
        scanf("%d", &num2);
        minus = num1 - num2;
        printf("The Subtraction of Num1 - Num2 = %d \n", minus);
        break;
    case '*':
        printf("Enter Num1 Value: \n");
        scanf("%d", &num1);
        printf("Enter Num2 Value: \n");
        scanf("%d", &num2);
        product = num1 *  num2;
        printf("The Product of Num1 * Num2 = %d \n", product);
        break;
    case '/':
        printf("Enter Num1 Value: \n");
        scanf("%f", &num1);
        printf("Enter Num2 Value: \n");
        scanf("%f", &num2);
        division = num1 /  num2;
        printf("The Product of Num1 / Num2 = %f \n", division);
        break;
    default:
        printf("Error \n");
        break;
    }
return 0;
}