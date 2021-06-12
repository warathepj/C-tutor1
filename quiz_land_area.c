#include <stdio.h>

typedef struct {
    int rai, ngan;
    double sqwa;
} LandArea;

LandArea convert(double totalArea) {
    LandArea a;
    a.rai = (int)totalArea / 400;
    a.ngan = (int)(totalArea - (400 * a.rai)) / 100;
    a.sqwa = totalArea - (400 * a.rai) - (100 * a.ngan);
    return a;
}
int main() {
    // 567.3 sq2 = 1 rai, 1 ngan, 67 sq2
    LandArea a = convert(567.3);
    printf("%d-%d-%.2f\n", a.rai, a.ngan, a.sqwa);
    return 0;
}
