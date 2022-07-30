#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);
void printStudents(int Students);

int main() {
    int students, girls = 12, boys = 9;
    students = sum(boys, girls);
    printStudents(students);
    return 0;
}

int sum (int a, int b) {
    int result = a + b;
    return result;
}

void printStudents(int students) {
    printf("students = %d\n",students);
}