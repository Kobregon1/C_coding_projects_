#include <stdio.h>

typedef struct{
    double i;
    double j;
    double k;
} vector;

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

    vector Vector1 = {x1, y1, z1};
    printf("Vector 1: <%0.2fi + %0.2fj + %0.2fk>\n", Vector1.i, Vector1.j, Vector1.k);

    vector Vector2 = {x2, y2, z2};
    printf("Vector 2: <%0.2fi + %0.2fj + %0.2fk>\n", Vector2.i, Vector2.j, Vector2.k);
    printf("\n");
    printf("Calculating Cross Product...\n");
    printf("\n");

<<<<<<< HEAD:Cross_Product.c
    Drawing(Vector1.i, Vector1.j, Vector1.k, Vector2.i, Vector2.j, Vector2.k);
    CrossProduct(Vector1.i, Vector1.j, Vector1.k, Vector2.i, Vector2.j, Vector2.k);
=======
    Drawing(Matrix1.i, Matrix1.j, Matrix1.k, Matrix2.i, Matrix2.j, Matrix2.k);
    CrossProduct(Matrix1.i, Matrix1.j, Matrix1.k, Matrix2.i, Matrix2.j, Matrix2.k);
>>>>>>> 41274bb183e011d178abd96c5f275918ea8675d2:Matrix_Calculator.c

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
    
    vector cross_product = {i, j, k};
    
    printf("= <%0.2fi - (%0.2f)j + %0.2fk>\n", cross_product.i,cross_product.j, cross_product.k);
    printf("\n");
};
