// Calculate Simple Interest

# include<stdio.h>

int main(){
    int r,t,p;

    printf("Enter principal value \n");
    scanf("%d", &p);

    printf("Enter intrest rate \n");
    scanf("%d", &r);

    printf("Enter number of years \n");
    scanf("%d", &t);

    printf("Simple Interest is %d \n", (p*r*t)/100);
return 0;
}