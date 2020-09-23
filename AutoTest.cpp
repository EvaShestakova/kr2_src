#include "Header.h"

void AutoTest() {
    double* a = new double[1];
    double* b = new double[1];
    a[0] = 0;
    b[0] = 1;
    CVector A(a, 1);
    CVector B(b, 1);
    CVector C;
    C = A + B;
    if (C.vector()[0] == 1) {
        printf("Autotest passed.\n");
    }
    else {
        printf("Autotest failed.\n");
    }
}