#include "calculator.h"
#include "vector.h"



struct vector add (const struct vector v1, const struct vector v2) {
    struct vector v_sum;
    v_sum.x = v1.x + v2.x;
    v_sum.y = v1.y + v2.y;
    v_sum.z = v1.z + v2.z;

    return v_sum;
}

struct vector minus (const struct vector v1, const struct vector v2) {
    struct vector v_diff;
    v_diff.x = v1.x - v2.x;
    v_diff.y = v1.y - v2.y;
    v_diff.z = v1.z - v2.z;

    return v_diff;
}


int dot_product (const struct vector v1, const struct vector v2) {
    int dot_product;
    dot_product = v1.x * v2.x +
                    v1.y * v2.y +
                    v1.z * v2.z;

    return dot_product;
}

struct vector cross_product (const struct vector v1, const struct vector v2) {
    struct vector v_cross;
    v_cross.x = (v1.y * v2.z) - (v1.z * v2.y);
    v_cross.y = (v1.z * v2.x) - (v1.x * v2.z);
    v_cross.z = (v1.x * v2.y) - (v1.y * v2.x);


    return v_cross;
}