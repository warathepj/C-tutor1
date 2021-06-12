#include <stdio.h>

int main() {
    //int h[5];
    // h[0] = 170;
    // h[1] = 165;
    // h[2] = 175;
    // h[3] = 162;
    // h[4] = 169;
    int h[] = {170, 165, 175, 162, 169};
    char gender[] = {'M', 'F', 'M', 'F', 'F'};
    double avg = 0.0;
    double sum = 0.0;
    double sumM = 0.0;
    double sumF = 0.0;
    double avgM = 0.0;
    double avgF = 0.0;
    int cntM = 0;
    int cntF = 0;
    for (int i = 0; i < 5; ++i) {
        if (gender[i] == 'M') {
            sumM += h[i];
            cntM++;
        } else {
            sumF += h[i];
            cntF++;
        }
        sum += h[i];
    }
    avg = sum / 5.0;
    avgM = sumM / cntM;
    avgF = sumF / cntF;
    printf("avg = %.2f\n", avg);
    printf("avgM = %.2f\n", avgM);
    printf("avgF = %.2f\n", avgF);

}