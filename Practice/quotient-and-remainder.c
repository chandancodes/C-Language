# include<stdio.h>

int main(){
    int dividend,divisor,quotient,remaninder;
    printf("Enter Dividend: ");
    scanf("%d", &dividend);
    printf("Enter Divisor: ");
    scanf("%d", &divisor);
    quotient=dividend/divisor;
    remaninder=dividend%divisor;
    printf("Quotient: %d \n", quotient);
    printf("Remaninder: %d \n", remaninder);
return 0;
}