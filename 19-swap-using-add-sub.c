// C Program to swap two numbers without third variable (Using = & -)

# include<stdio.h>

int main(){
    int a=10,b=20;
    printf("Before swap the value of a %d \n", a);
    printf("Before swap the value of b %d \n", b);

    a=a+b; // a+b=10+20=30=a
    b=a-b; // a-b=30-20=10=b
    a=a-b; // a-b=30-10=20=a

    printf("After swap the value of a %d \n", a);
    printf("After swap the value of b %d \n", b);
return 0;
}