#include "vector.h"
#include "calculator.h"


float norm (const struct vector v) {
    float norm = sqrtf (v.x * v.x +
                        v.y * v.y +
                        v.z * v.z);
    return norm;
}


bool is_parallel (const struct vector v1, const struct vector v2) {
    struct vector v_temp;
    v_temp = cross_product(v1, v2);
    if (v_temp.x == 0 && v_temp.y == 0 && v_temp.z == 0) {
        return true;
    }
    return false;
}

bool is_orthogonal (const struct vector v1, const struct vector v2) {
    if (dot_product (v1, v2) == 0) {
        return true;
    }
    return false;
}

struct vector set_vector () {
    struct vector v_temp;
    printf("Enter the name of this 3D vector (at most 10 characters):\n");
    char vector_name[11];
    scanf ("%s", vector_name);
    strcpy (v_temp.v_name, vector_name);

    printf("Enter the value of this 3D vector seperated by space:\n");
    int x, y, z;
    scanf ("%i %i %i", &x, &y, &z);
    v_temp.x = x;
    v_temp.y = y;
    v_temp.z = z;

    return v_temp;
}


void show_vector (const struct vector v, int mode) {
    switch (mode) {
        case 0:
            printf ("%s = ", v.v_name);
        case 1:
            printf ("< %i, %i, %i >\n", v.x, v.y, v.z);
            if (mode != 0)
                break;
        case 2:
            printf("||%s|| = %.2f\n", v.v_name, v.norm);
            if (mode != 0)
                break;
        case -1:
            break;
        default:
            printf("Invalid show_vector() mode input.\n");
    }
}

void show_vector_relation (const struct vector_relation r, int mode) {
    switch (mode) {
        case 0:
            printf("Relationship of %s and %s\n", r.v1.v_name, r.v2.v_name);
        case 1:
            printf ("add: ");
            show_vector (r.add, 1);
            if (mode != 0)
                break;
        case 2:
            printf ("minus: ");
            show_vector (r.minus, 1);
            if (mode != 0)
                break;
        case 3:
            printf("dot: %i\n", r.dot);
            if (mode != 0)
                break;
        case 4:
            printf("cross: ");
            show_vector (r.cross, 1);
            if (mode != 0)
                break;
        case 5:
            printf("parallel: %s\n", r.is_parallel ? "Yes" : "No");
            if (mode != 0)
                break;
        case 6:
            printf("orthogonal: %s\n", r.is_orthogonal ? "Yes" : "No");
            if (mode != 0)
                break;
        case -1:
            break;
        default:
            printf("Invalid show_vector_relation() mode input\n.");
    }
}
