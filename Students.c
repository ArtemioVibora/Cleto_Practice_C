#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    double quiz1;
    double quiz2;
    double quiz3;
    double ave;
};

double getAve(double q1, double q2, double q3)
{
    return (q1 + q2 + q3) / 3;
} 

void enterDetails(struct Student student[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of Student %d: ", i + 1);
        scanf("%s", &student[i].name);
        printf("Enter age: ");
        scanf("%d", &student[i].age);
        printf("Enter score of Quiz 1: ");
        scanf("%lf", &student[i].quiz1);
        printf("Enter score of Quiz 2: ");
        scanf("%lf", &student[i].quiz2);
        printf("Enter score of Quiz 3: ");
        scanf("%lf", &student[i].quiz3);
        student[i].ave = getAve(student[i].quiz1, 
                student[i].quiz2, 
                student[i].quiz3);
        printf("\n");
    }
}



void printDetails(struct Student student[])
{
    printf("-------------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name of Student %d: %s\n", i + 1, student[i].name);
        printf("Age of Student %d: %d\n", i + 1, student[i].age);
        printf("Quiz 1: %.2f\n", student[i].quiz1);
        printf("Quiz 2: %.2f\n", student[i].quiz2);
        printf("Quiz 3: %.2f\n", student[i].quiz3);
        printf("Average: %.2f\n\n", student[i].ave);
    }
    printf("-------------------------------------------------\n");
}

int main()
{
    struct Student student[5];
    enterDetails(student);
    printDetails(student);
}
