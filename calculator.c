# include<stdio.h>

int main(){
    char op;
    printf("Enter the operator: \n");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("You Have Selected Addition");
        int a,b;
        printf("Enter A Value: \n");
        scanf("%d", a);
        printf("Enter B Value: \n");
        scanf("%d", b);
        printf("The Sum Of A + B Is %d \n", a+b);
        break;
    
    default:
        break;
    }
return 0;
}