// Area of circle (Value by user).

# include<stdio.h>

int main(){
    int r;
    float pi=3.14;
    printf("Enter the radius \n");
    scanf("%d", &r);

    printf("The area of circle is %f \n", pi*r*r); // Area of circle = pi*r*r
return 0;
}