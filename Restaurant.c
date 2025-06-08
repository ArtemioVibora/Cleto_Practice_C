#include <stdio.h>

struct Order
{
    double burger;
    double fries;
    double spaghetti;
};


void menuOption()
{
    printf("-------------------------------\n");
    printf("<1> Burger - 20 pesos\n");
    printf("<2> Fries - 10 pesos\n");
    printf("<3> Spaghetti - 50 pesos\n");
    printf("<4> Exit and get reciept\n");
    printf("-------------------------------\n");
    printf(">>>> ");
}

void runProgram(struct Order o)
{
    o.burger = 0;
    o.fries = 0;
    o.spaghetti = 0;
    int totalNumBurgers = 0;
    int totalNumFries = 0;
    int totalNumSpaghetti = 0;
    double total = 0;
    int input = 0;
    while(input != 4)
    {
        menuOption(); 
        scanf("%d", &input);
        switch (input)
        {
            case 1:
                o.burger += 20;
                total += 20;
                ++totalNumBurgers;
                printf("%.2f\n", o.burger);
                printf("%.2f\n", total);
                break;
            case 2:
                o.fries += 10;
                total += 10;
                ++totalNumFries;
                printf("%.2f\n", o.fries);
                printf("%.2f\n", total);
                break;
            case 3:
                o.spaghetti += 50;
                total += 50;
                ++totalNumSpaghetti;
                printf("%.2f\n", o.spaghetti);
                printf("%.2f\n", total);
                break;
            default:
                break;
        }
    }

    printf("Total amount: %.2f\n", total);
    if (totalNumBurgers != 0)
        printf("Total amount of burgers: %d ------ price: %.2f pesos\n", totalNumBurgers, o.burger);
    if (totalNumFries != 0)
        printf("Total amount of Fries: %d -------- price: %.2f pesos\n", totalNumFries, o.fries);
    if (totalNumSpaghetti != 0)
        printf("Total amount of Spaghetti: %d ---- price: %.2f pesos\n", totalNumSpaghetti, o.spaghetti);

}


int main()
{
    struct Order order;
    
    runProgram(order);
}
