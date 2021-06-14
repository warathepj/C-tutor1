#include <stdio.h>

void demo1() {
    char grade[4];
    grade[0] = 'A';
    grade[1] = 'B';
    grade[2] = 'C';
    grade[3] = 'D';
    printf("%c\n", grade[2]);
}

void demo2() {
    char grade[] = {'A', 'B', 'C', 'D'};
    printf("%c\n", grade[2]);
}

void demo3() {
    char grade[] = "ABCD";
    printf("%c\n", grade[3]);
}

void demo4() {
    char grade[] = {'A', 'B', 'C', 'D'};
    char letter[] = "ABCD";
    printf("%c\n", grade[0]);
    printf("%c\n", letter[1]);

}

int main() {
    demo4();
    return 0;
}