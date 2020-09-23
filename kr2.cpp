#include "Header.h"

//void AutoTest();



int main() {
    AutoTest();
    double* a = new double[5];
    double* b = new double[5];
     for (int i = 0; i < 5; i++) {
        a[i] = i;
        b[i] = 1;
    }
    CVector A(a, 5);
    CVector B(b, 5);
    CVector C;
    C = A + B;
    printf("a="); A.print(); printf("\n");
    printf("b="); B.print(); printf("\n");
    printf("a+b="); C.print(); printf("\n");
    C = A - B;
    printf("a-b="); C.print(); printf("\n");
    printf("a*b=%f", A*B);
    delete[] a;
    delete[] b;
    return 0;
}
