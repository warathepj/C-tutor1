#include <stdio.h>

int leapYear(int year) {
    if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void demo() {
    int a = 7, b = 3;
    int q, r;
    q = a / b;
    r = a % b;
    printf("q = %d, r = %d\n", q, r);
}

int parkingRate(int mm) {
    int hours = mm / 60;
    int minutes = mm % 60;
    if (minutes > 10) {
        hours++;
    }
    return hours * 30;
}

void master() {
    int hours = 10000;
    int days = hours / 24;
    int h = hours % 24;
    printf("%d hours = %d days %d hours\n", hours, days, h);
}

int main() {
    //printf("%d\n", leapYear(2016));
    printf("rate = %d", parkingRate(69));
    master();
}