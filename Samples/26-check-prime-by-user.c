// Write a algorithm to check whether a number entered by the user is prime or not.

# include<stdio.h>

int main(){
    int n,i,flag=0;
    printf("Enter a integer value \n");
    scanf("%d", &n);

    for(i=2; i<=n/2; ++i)
    {
        if(n % i ==0)
        {
            flag = 1;
            break;
        }
    }
    if (n==1)
    {
        printf("1 is not prime \n");
    }
    else
    {
        if (flag == 0)
        {
            printf("%d is a prime number \n", n);
        }
        else
        {
            printf("%d is not a prime number \n", n);
        }
    }
return 0;
}