#include <stdio.h>

void incNum(int *p_num)
{
    ++*p_num;
}

int main() {
    
    int num = 0;
    int input = 0;
    while (input != 2)
    {
        printf("Enter input: ");
        scanf("%d", &input);
        switch (input)
        {
            case 1:
                incNum(&num);
                printf("%d\n", num);
                break;
        }
    }
}
