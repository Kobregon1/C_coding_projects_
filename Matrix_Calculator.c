#include <stdio.h>

typedef struct{
    double i;
    double j;
    double k;
} matrix;

void Drawing(double, double, double, double, double, double);
void CrossProduct(double, double, double, double, double, double);

int main(){
    double x1;
    double y1;
    double z1;

    double x2;
    double y2;
    double z2;
    
    printf("x1 value: ");
    scanf("%lf", &x1);
    printf("y1 value: ");
    scanf("%lf", &y1);
    printf("z1 value: ");
    scanf("%lf", &z1);
    printf("\n");

    printf("x2 value: ");
    scanf("%lf", &x2);
    printf("y2 value: ");
    scanf("%lf", &y2);
    printf("z2 value: ");
    scanf("%lf", &z2);
    printf("\n");

    matrix Matrix1 = {x1, y1, z1};
    printf("Matrix 1: <%0.2fi + %0.2fj + %0.2fk>\n", Matrix1.i, Matrix1.j, Matrix1.k);

    matrix Matrix2 = {x2, y2, z2};
    printf("Matrix 2: <%0.2fi + %0.2fj + %0.2fk>\n", Matrix2.i, Matrix2.j, Matrix2.k);
    printf("\n");
    printf("Calculating Cross Product...\n");
    printf("\n");

    Drawing(Matrix1.i, Matrix1.j, Matrix1.k, Matrix2.i, Matrix2.j, Matrix2.k);
    CrossProduct(Matrix1.i, Matrix1.j, Matrix1.k, Matrix2.i, Matrix2.j, Matrix2.k);

    return 0;
}

void Drawing(double x1, double y1, double z1, double x2, double y2, double z2){
    printf("i\tj\tk\n");
    printf("%0.2f\t%0.2f\t%0.2f\n", x1, y1, z1);
    printf("%0.2f\t%0.2f\t%0.2f\n", x2, y2, z2);
};

void CrossProduct(double x1, double y1, double z1, double x2, double y2, double z2){
    double i;
    double j;
    double k;
    i = (y1 * z2) - (z1 * y2);
    j = (x1 * z2) - (z1 * x2);
    k = (x1 * y2) - (y1 * x2);
    
    matrix cross_product = {i, j, k};
    
    printf("= <%0.2fi - (%0.2f)j + %0.2fk>\n", cross_product.i,cross_product.j, cross_product.k);
    printf("\n");
};
