# include<stdio.h>

int main(){
    char ch;

    printf("Enter a character \n");
    scanf("%c", &ch);

    if(ch>=97 && ch<=122){
        printf("It is lowercase character");
    }
    else{
        printf("It is not a lowercase character");
    }
return 0;
}