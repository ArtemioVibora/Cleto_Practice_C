#include <stdio.h>
//#include <stdbool.h>

void displayMenu()
{
    
    printf("\n=================================\n");
    printf("<1> option 1 \n");
    printf("<2> option 2 \n");
    printf("<3> option 3 \n");
    printf("=================================\n");
    printf("What is your choice: ");
}

int main()
{
    int input;
    while (input != 4)
    {
        displayMenu();
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                printf("Hello");
                break;
            case 2:
                printf("Hi!");
                break;
            case 3:
                printf("Hey");
                break;
        }
    }

}