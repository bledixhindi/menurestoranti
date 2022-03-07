#include <stdlib.h>
#include <stdio.h>
#define Hamburger 1.25
#define Cheeseburger 1.35
#define Pizza 2.95
#define Pepsi 0.65
#define Akullore 0.75
  
int main(void){
  
    int choice = 0;
    double totalPrice = 0;
      
    printf("Mirsevni ne restorantin tone!\n");
    printf("Porosia juaj? \n\n");
  
    do{
        printf("Menu: \n\n");
        printf("1. Hamburger\n");
        printf("2. Cheeseburger\n");
        printf("3. Pizza\n");
        printf("4. Pepsi\n");
        printf("5. Akullore\n");
        printf("6. Exit\n\n");
        printf("Zgjidhni: ");
        scanf("%i", &choice);
  
        switch(choice){
        case 1:
            totalPrice += Hamburger;
            break;
        case 2:
            totalPrice += Cheeseburger;
            break;
        case 3:
            totalPrice += Pizza;
            break;
        case 4:
            totalPrice += Pepsi;
            break;
        case 5:
            totalPrice += Akullore;
            break;
      
        case 6:
            printf("Faleminderit qe viztuat restorantin tone. \n");
            break;
        default:
            printf("*** Gabim:Nuk eshte ne menu zgjidhni dhe nje here. \n");
            break;
        }
          
        printf("Totali eshte: $%.2lf\n\n", totalPrice);
      
    } while (choice != 6);
  
    printf("Totali eshte:$%.2lf \n\n", totalPrice);
    printf("Faleminderit qe viztuat restorantin tone.\n");
    printf("Kalofshi mire!.\n\n");
  
    system("pause");
}
