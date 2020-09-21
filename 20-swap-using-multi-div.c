// C Program to swap two numbers without third variable (Using * & /)

# include<stdio.h>

int main(){
    int a=2,b=4;
    printf("Before swap the value of a %d \n", a);
    printf("Before swap the value of b %d \n", b);

    a=a*b; // a*b=2*4=8=a
    b=a/b; // a/b=8/4=2=b
    a=a/b; // a/b=8/2=4=a

    printf("After swap the value of a %d \n", a);
    printf("After swap the value of b %d \n", b);
return 0;
}