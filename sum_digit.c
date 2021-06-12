#include <stdio.h>
#include <string.h>

int sumDigit(char *s) {
    int sum = 0;
    for (int i = 0; i < strlen(s); ++i) {
        sum += s[i] - '0';
    }
    return sum;
}

void nicePlate(int fromNum, int toNum) {
    for (int i = fromNum; i <= toNum; ++i) {
        char s[5];
        int sum;
        sprintf(s, "%d", i);
        sum = sumDigit(s);
        if (sum == 9) {
            printf("nice plate = %s, sum = %d\n", s, sum);
        }
    }
}

int main() {
    char plate[] = "4711";
    // int a = '7' - '0' + 2;
    // printf("%d %c \n", '7', '7');
    // printf("%d\n", a);
    //printf("sum all digits of %s = %d\n", plate, sumDigit(plate));
    nicePlate(10, 9000);
    return 0;
}