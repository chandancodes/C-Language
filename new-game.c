# include<stdio.h>

int main(){
    
    char colour[20];
    char noun[20];
    char name[20];

    printf("Enter colour: \n");
    scanf("%s", &colour);
    printf("Enter Pural Noun: \n");
    scanf("%s", &noun);
    printf("Enter Name: \n");
    scanf("%s", &name);

    printf("Roses are %s.\n", colour);
    printf("%s are blue.\n", noun);
    printf("I love %s.\n", name);
return 0;
}