#include "vector_3D.h"

Vectors vectors_add(Vectors a, Vectors b){
    return (Vectors){a.x + b.x, a.y + b.y, a.z + b.z};
}

Vectors vectors_substriction(Vectors a,
        Vectors b){
            return (Vectors){a.x - b.x, a.y - b.y, a.z - b.z};
        }

float vectors_dot(Vectors a, Vectors b){
    return (a.x * b.x + a.y * b.y + a.z * b.z);
}

Vectors vectors_cross(Vectors a, Vectors b){
    return (Vectors){
        a.y * b.z - a.z * b.y, 
        a.x * b.z - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
}
