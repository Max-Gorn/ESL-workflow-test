#include "vector3.h"

Vector vec3_sum(Vector* p_vec1, Vector* p_vec2)
{
    Vector vec;
    vec.x = p_vec1->x + p_vec2->x;
    vec.y = p_vec1->y + p_vec2->y;
    vec.z = p_vec1->z + p_vec2->z;

    return vec;
}

Vector vec3_sub(Vector* p_vec1, Vector* p_vec2)
{
    Vector vec;
    vec.x = p_vec1->x - p_vec2->x;
    vec.y = p_vec1->y - p_vec2->y;
    vec.z = p_vec1->z - p_vec2->z;

    return vec;
}

double vec3_dot(Vector* p_vec1, Vector* p_vec2)
{
    return p_vec1->x * p_vec2->x + p_vec1->y * p_vec2->y + p_vec1->z * p_vec2->z;
}

Vector vec3_cross(Vector* p_vec1, Vector* p_vec2)
{
    Vector vec;
    vec.x = p_vec1->y * p_vec2->z - p_vec1->z * p_vec2->y;
    vec.y = p_vec1->z * p_vec2->x - p_vec1->x * p_vec2->z;
    vec.z = p_vec1->x * p_vec2->y - p_vec1->y * p_vec2->x;

    return vec;
}
