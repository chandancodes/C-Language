# include<stdio.h>

int main(){
    float bill;
    int customerid,unit;
    char name[20];

    printf("Enter CustomerID: \n");
    scanf("%d", &customerid);
    printf("Enter Name: \n");
    scanf("%s", &name);
    printf("Enter Unit: \n");
    scanf("%d", &unit);

    if(unit <= 199)
    {
        bill = unit * 1.20;
    } 
    else if(unit >=200 && unit <= 400)
    {
        bill = unit * 1.50;
    }
    else if(unit > 400 && unit < 600)
    {
        bill = unit * 1.80;
    }
    else
    {
        bill = unit * 2.0;
    }
    int totalbill;
    if(bill>400)
    {
        totalbill=bill + (15/100) * bill;
        printf("Total Bill: Bill + 15 Percentage /100: %d \n", totalbill);
    }
    if(bill<100)
    {
        totalbill=100;
        printf("Nothing");
    }
    
return 0;
}