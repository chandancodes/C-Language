# include<stdio.h>

int main(){
    int num;
    printf("Enter Number: \n");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d Is Even Numer \n", num);
    }else{
        printf("%d Is Odd Number \n", num);
    }
return 0;
}