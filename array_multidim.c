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
        printf("bmi = %.2f\n", bmi())
    }
    
}