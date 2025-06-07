#include <stdio.h>

void enterValues(int list[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter data: ");
            scanf("%d", &list[i][j]);
        }
        printf("\n");
    }

}

void printMatrix(int list[][3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", list[i][j]);
        }
    }
}

int main()
{
    int list[3][3];

    enterValues(list);
    printMatrix(list);
}
