#include <stdio.h>


void addList(int list[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter number: ");
        scanf("%d", &list[i]);
    }

}

void printList(int list[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", list[i]);

    }

}

int main()
{
    int list[3];
    addList(list);
    printList(list);
}
