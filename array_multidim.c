#include <stdio.h>
#include <math.h>

double bmi(int height, int weight) {
    return weight / pow(height / 100.0, 2);
}

void demo2() {
    int h[] = {170, 165, 175, 162, 169};
    int w[] = {70, 55, 72, 48, 50};
    char gender[] = {'M', 'F', 'M', 'F', 'F'};
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("h[%d] = %d, w[%d] = %d, bmi = %.2f\n", i, h[i], i, w[i], bmi(h[i], w[i]));
    }
}

void demo3() {
    int h[] = {170, 165, 175, 162, 169};
    int w[] = {70, 55, 72, 48, 50};
    char gender[] = {'M', 'F', 'M', 'F', 'F'};
    // int p[3][5];
    // p[0][0] = 170;
    // p[0][1] = 165;
    // p[1]

    int p[][5] = {
        {170, 165, 175, 162, 169},
        {70, 55, 72, 48, 50},
        {'M', 'F', 'M', 'F', 'F'}
    };

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("h[%d] = %d, w[%d] = %d, bmi = %.2f\n", i, h[i], i, w[i], bmi(h[i], w[i]));
    }
}

int main() {
    demo2();
    return 0;
}