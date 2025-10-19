#ifndef VECTOR_3D_h
#define VECTOR_3D_h

typedef struct {
    float x;
    float y;
    float z;
}Vectors;

Vectors vectors_add(Vectors a, Vectors b);
Vectors vectors_substriction(Vectors a,
        Vectors b);
float vectors_dot(Vectors a, Vectors b);
Vectors vectors_cross(Vectors a, Vectors b);

#endif 