#include <stdio.h>
#include <string.h>

struct Person {

    char name[40];
    int age;
    
};

int main()
{
    struct Person p;
    strcpy(p.name, "Amado");
    p.age = 22; 

    printf("Person name: %s\nPerson age: %d\n", p.name, p.age);

    return 0;
}