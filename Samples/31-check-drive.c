// Write a program to check whether a person can drive or not.

# include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if(age>18){
        printf("You can drive");
    }
    else{
        printf("You can't drive");
    }
return 0;
}