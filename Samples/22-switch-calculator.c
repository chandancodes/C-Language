// Simple calculator using switch case

# include<stdio.h>

int main(){
    char a;
    printf("Type + For Addition | - For Substraction | * For Multiplication | / For Division \n");
    scanf("%c", &a);

    switch (a)
    {
        case ('+'):
        {
            int a,b;
            printf("Enter the value of a \n");
            scanf("%d", &a);

            printf("Enter the value of b \n");
            scanf("%d", &b);

            printf("The value of a+b is %d \n", a+b);
            break;
        }

        case ('-'):
        {
            int a,b;
            printf("Enter the value of a \n");
            scanf("%d", &a);

            printf("Enter the value of b \n");
            scanf("%d", &b);

            printf("The value of a-b is %d \n", a-b);
            break;
        }

        case ('*'):
        {
            int a,b;
            printf("Enter the value of a \n");
            scanf("%d", &a);

            printf("Enter the value of b \n");
            scanf("%d", &b);

            printf("The value of a*b is %d \n", a*b);   
            break;     
        }

        case ('/'):
        {
            int a,b;
            printf("Enter the value of a \n");
            scanf("%d", &a);

            printf("Enter the value of b \n");
            scanf("%d", &b);

            printf("The value of a/b is %d \n", a/b);
            break;
        }
    }

return 0;
}