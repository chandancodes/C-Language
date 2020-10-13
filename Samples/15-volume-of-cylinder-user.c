// Volume of cylinder (Value by user)

# include<stdio.h>

int main(){
    int r,h;
    float pi=3.14;
    printf("Enter the value of radius \n");
    scanf("%d", &r);

    printf("Enter the value of height \n");
    scanf("%d", &h);

    printf("The volume of cylinder is %f \n", pi*r*r*h); // Volume of cylinder = pi*r*r*h
return 0;
}