#include <stdio.h>

void demo1() {
    char grade[4];
    grade[0] = 'A';
    grade[1] = 'B';
    grade[2] = 'C';
    grade[3] = 'D';
    printf("%c\n", grade[2]);
}

int main() {
    demo1();
    return 0;
}