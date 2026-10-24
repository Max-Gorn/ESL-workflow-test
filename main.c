#include <stdio.h>
#include "vector3.h"

int main()
{
    char operation_type;
    Vector vector_1;
    Vector vector_2;

    puts("Program for manipulating 3D vectors");
    puts("-----------------------------------");
    puts("Operation types:");
    puts(" \"+\" - sum");
    puts(" \"-\" - sub");
    puts(" \"*\" - dot");
    puts(" \"x\" - cross");
    puts("");

    puts("Input operation type:");
    scanf(" %c", &operation_type);

    puts("Input vector a (format: x, y, z):");
    scanf("%lf, %lf, %lf", &vector_1.x, &vector_1.y, &vector_1.z);

    puts("Input vector b (format: x, y, z):");
    scanf("%lf, %lf, %lf", &vector_2.x, &vector_2.y, &vector_2.z);

    puts("");
    switch (operation_type)
    {
    case '+':
    {
        Vector result_vector = vec3_sum(&vector_1, &vector_2);
        printf("a + b = (%f, %f, %f)\n", result_vector.x, result_vector.y, result_vector.z);
        break;
    }
    case '-':
    {
        Vector result_vector = vec3_sub(&vector_1, &vector_2);
        printf("a - b = (%f, %f, %f)\n", result_vector.x, result_vector.y, result_vector.z);
        break;
    }
    case '*':
    {
        double result = vec3_dot(&vector_1, &vector_2);
        printf("a * b = %f\n", result);
        break;
    }
    case 'x':
    {
        Vector result_vector = vec3_cross(&vector_1, &vector_2);
        printf("a x b = (%f, %f, %f)\n", result_vector.x, result_vector.y, result_vector.z);
        break;
    }
    default:
        printf("'%c' - unknown operation type\n", operation_type);
        break;
    }
}
