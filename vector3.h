#ifndef VECTOR3_H
#define VECTOR3_H

typedef struct Vector
{
    double x;
    double y;
    double z;
} Vector;

Vector vec3_sum(Vector* p_vec1, Vector* p_vec2);
Vector vec3_sub(Vector* p_vec1, Vector* p_vec2);
double vec3_dot(Vector* p_vec1, Vector* p_vec2);
Vector vec3_cross(Vector* p_vec1, Vector* p_vec2);
#endif
