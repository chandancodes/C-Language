# include<stdio.h>

int main(){
    int a=2,b=4;
    printf("The Value Of A Before Swaping: %d \n", a);
    printf("The Value Of B Before Swaping: %d \n", b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("A: %d\n", a);
    printf("B: %d\n", b);
return 0;
}