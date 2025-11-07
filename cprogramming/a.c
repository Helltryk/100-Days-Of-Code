#include <stdio.h>
#include <string.h>

struct Marks {
    int english;
    int math;
    int science;
};

int main() {
    struct Marks student;

    printf("Enter marks in English: ");
    scanf("%d", &student.english);

    printf("Enter marks in Math: ");
    scanf("%d", &student.math);

    printf("Enter marks in Science: ");
    scanf("%d", &student.science);

    printf("\n--- Student Marks ---\n");
    printf("English: %d\n", student.english);
    printf("Math: %d\n", student.math);
    printf("Science: %d\n", student.science);

return 0;
}