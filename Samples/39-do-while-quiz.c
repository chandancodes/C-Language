# include<stdio.h>

int main(){
    int a=0,n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    do{
        printf("The number a is %d\n", a+1);
        a++;
    }
    while(a<10);
return 0;
}