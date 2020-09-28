# include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%d", &c);

    printf("Enter the value of d\n");
    scanf("%d", &d);        

    if(a>b){
        if(a>c){
            if(a>d){
                printf("A is greater among 4 numbers\n");
            }  
        }
    }
    if(b>a){
        if (b>c){
            if(b>d){
                printf("B is greater among 4 numbers\n");
            }  
        }
    }
    if (c>a){
        if (c>b){
            if(c>d){
                printf("C is greater among 4 numbers\n");
            }
        }    
    }
    if (d>a){
        if(d>b){
            if(d>c){
                printf("D is greater among 4 numbers\n");
            }
        }
    }
return 0;
}