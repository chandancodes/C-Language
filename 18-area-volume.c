// Program where you need to select area or volume.

# include<stdio.h>

int main(){
    int a,b,c;
    printf("Press 1 for area & Press 2 for volume \n");
    scanf("%d", &a);

    if(a==1)
    {
        printf("You have selected area \n");
        printf("Now press 1 for area of circle & press 2 for area of rectangle \n");
        scanf("%d", &b);

        if (b==1)
        {
            printf("You have selected area of circle \n");
            int r;
            float pi=3.14;
            printf("Enter the radius \n");
            scanf("%d", &r);

            printf("The area of circle is %f \n", pi*r*r);
        }
        else if(b==2)
        {
            printf("You have selected area of rectangle \n");
            int l,b;
            printf("Enter the value of lenght \n");
            scanf("%d", &l);

            printf("Enter the value of breath \n");
            scanf("%d", &b);

            printf("The area of rectange is %d \n", l*b);
        }
        else
        {
            printf("You have selected wrong number \n");
        }
    }

    else if(a==2)
    {
        printf("You have selected volume \n");
        printf("Press 1 for volume of cylinder & press 2 for cube \n");
        scanf("%d", &c);

        if (c==1)
        {
            printf("You have selected volume of cylinder \n");
            int r,h;
            float pi=3.14;
            printf("Enter the value of radius \n");
            scanf("%d", &r);

            printf("Enter the value of height \n");
            scanf("%d", &h);

            printf("The volume of cylinder is %f \n", pi*r*r*h);
        }

        else if(c==2)
        {
            printf("You have selected volume of cube \n");
            int a;
            printf("Enter the value of a \n");
            scanf("%d", &a);

            printf("The volume of cube is %d \n", a*a*a);
        }
        else
        {
            printf("You have selected wrong number \n");
        }

    }
    
    else
    {
        printf("You have selected wrong number \n");
    }

return 0;
}