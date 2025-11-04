#include <stdio.h>
#include <stdbool.h>

double balance = 0.0;

void mybalance(){
    printf("Your current balance is : %.2lfMAD\n", balance);
}

void Deposit(double addamount) {
    if (addamount <= 0){
        printf("Insufficient funds!\n");
    }else{
        balance = balance + addamount;
    }
    
}
void Withdraw (double amount){
    if (amount <= 0 || amount > balance){
        printf("Insufficient funds!\n");
    }else{
        balance = balance - amount;
    }
}

int main() {
    
    while (true){

        printf("_____Welcome To Our Bank_____\n\n");
        printf("1- My balance\n");
        printf("2- Deopsit money\n");
        printf("3- Withdraw money\n");
        printf("4- exit\n");

        int choice = 0;

        printf("Choose a number from 1 to 4: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                mybalance();
                break;
            case 2:
                double addamount = 0.0;
                printf("How much do you want to deopsit? ");
                scanf("%lf", &addamount);
                Deposit(addamount);
                break;
            case 3:
                double amount = 0.0;
                printf("How much do you want to withdraw? ");
                scanf("%lf", &amount);
                Withdraw(amount);
                break;
            case 4:
                break;
            default:
                printf("invalid value");
                break;
        }
        
    }


    return 0;
}