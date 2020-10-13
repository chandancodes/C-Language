// Write a program to check whether you can vote or not.

# include<stdio.h>

int main(){
    int age;

    printf("Enter you age\n");
    scanf("%d", &age);

    if(age>=18){
        printf("You can vote");
    }
    else{
        printf("You can't vote");
    }
return 0;
}