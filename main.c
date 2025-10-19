#include <stdio.h>
#include "vector_3D.h"

int main(){
    Vectors a = {3, 5, 6};
    Vectors b = {7, 8, 9};

    Vectors sum = vectors_add(a, b);
    Vectors sub = vectors_substriction(a, b);
    float dot = vectors_dot(a, b);
    Vectors cross = vectors_cross(a, b);

    printf("Sum of vectors is: (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);
    printf("Substruction: (%.2f, %.2f, %.2f)\n", sub.x, sub.y, sub.z);
    printf("Dot: (%.2f)\n", dot);
    printf("Cross: (%.2f, %.2f, %.2f)\n", cross.x, cross.y, cross.z);

    return 0;
}