# include<stdio.h>

int main(){
    Hello("Chandan", 18);
        Bye("Chandan");
    Hello("Bhoomika", 14);
        Bye("Bhoomika");
    Hello("Upendra", 42);
        Bye("Upendra");
    Hello("Nisha", 42);
        Bye("Nisha");
return 0;
}

void Hello(char name[], int age[]){
    printf("Hello %s, your age is %d. \n", name, age);
}

void Bye(char name[]){
    printf("Bye %s \n");
}