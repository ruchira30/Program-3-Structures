#include <stdio.h>
struct student_details {
    char Name[50];
    int roll;
    float GPA;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].Name);
        printf("Enter GPA: ");
        scanf("%f", &s[i].GPA);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].Name);
        printf("Marks: %.1f", s[i].GPA);
        printf("\n");
    }
    return 0;
}
