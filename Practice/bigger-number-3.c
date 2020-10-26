# include<stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter Num1 Value: %d \n", num1);
    scanf("%d", &num1);
    printf("Enter Num2 Value: %d \n", num2);
    scanf("%d", &num2);
    printf("Enter Num3 Value: %d \n", num3);
    scanf("%d", &num3);

    if(num1>num2){
        if(num1>num3){
            printf("Num1 Is Greatest: %d \n", num1);
        }
    }else if(num2>num1){
        if(num2>num3){
            printf("Num2 Is Greatest: %d \n", num2);
        }
    }else if(num3>num1){
        if(num3>num2){
            printf("Num3 Is Greatest: %d \n", num3);
        }
    }
return 0;
}