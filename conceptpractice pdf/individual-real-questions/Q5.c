#include <stdlib.h>
#include <stdio.h>

struct student {
    char *name;
    int roll;
    int marks;
};

int main()
{
    printf("Enter number of students: ");
    int n; scanf("%d", &n);
    struct student students[n];
    int i = 0;

    for(i = 0; i < n; ++i)
    {
        students[i].name = malloc(50*sizeof(char));
    }

    for(i = 0; i < n; ++i)
    {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    for(i = 0; i < n; ++i)
    {
        printf("\nStudent %d: \n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %d\n", students[i].marks);
    }

    double avg = 0.0;
    int highest = 0;
    for(i = 0; i < n; ++i)
    {
        avg += students[i].marks;
        if(highest < students[i].marks) highest = students[i].marks;
    }

    avg/=n;

    printf("\nAverage Marks: %lf\n", avg);
    printf("Highest Marks: %d\n", highest);
}