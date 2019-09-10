#include "calculator.h"
#include "vector.h"

// Example add() function.
struct vector add (const struct vector v1, const struct vector v2) {
    struct vector v_sum;
    v_sum.x = v1.x + v2.x;
    v_sum.y = v1.y + v2.y;
    v_sum.z = v1.z + v2.z;

    return v_sum;
}
