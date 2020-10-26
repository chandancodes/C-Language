# include<stdio.h>

int main(){
    char op;
    int a,b;
    float c,d;
    printf("Enter the operator: \n");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("You Have Selected Addition \n");
        printf("Enter A Value: \n");
        scanf("%d", &a);
        printf("Enter B Value: \n");
        scanf("%d", &b);
        printf("The Sum Of A + B Is %d \n", a+b);
        break;

    case '-':
        printf("You Have Selected Subtraction \n");
        printf("Enter A Value: \n");
        scanf("%d", &a);
        printf("Enter B Value: \n");
        scanf("%d", &b);
        printf("The Difference Of A - b Is %d \n", a-b);
        break;

    case '*':
        printf("You Have Selected Multiplication \n");
        printf("Enter A Value: \n");
        scanf("%d", &a);
        printf("Enter B Value: \n");
        scanf("%d", &b);
        printf("The Product Of A * B Is %d \n", a*b);
        break;

    case '/':
        printf("You Have Selected Division \n");
        printf("Enter C Value: \n");
        scanf("%f", &c);
        printf("Enter D Value: \n");
        scanf("%f", &d);
        printf("The Divion Of C / D Is %f \n", c/d);
        break;

    default:
        printf("Wrong Operator \n");
        break;    
    }
return 0;
}