#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "calculator.h"
#include "vector.h"

int main (int argc, char** argv) {

    if (argc != 2) {
        printf("Invalid amount of command line arguments is given\n");
        return -1;
    }

    if (strcmp (argv[1], "norm") == 0) {
        struct vector v;
        v = set_vector();
        v.norm = norm (v);
        show_vector (v, 2);
        return 1;
    }

    int mode;
    if (strcmp (argv[1], "add") == 0) {
        mode = 1;
    }
    else if (strcmp (argv[1], "minus") == 0) {
        mode = 2;
    }
    else if (strcmp (argv[1], "dot") == 0) {
        mode = 3;
    }
    else if (strcmp (argv[1], "cross") == 0) {
        mode = 4;
    }
    else if (strcmp (argv[1], "parallel") == 0) {
        mode = 5;
    }
    else if (strcmp (argv[1], "orthogonal") == 0) {
        mode = 6;
    }
    else if (strcmp (argv[1], "all") == 0) {
        mode = 0;
    }
    else {
        printf("Invalid argv[1] input\n");
        return -2;
    }

    struct vector v1, v2;
    struct vector_relation v_relation;

    v1 = set_vector();
    v2 = set_vector();
    v1.norm = norm (v1);
    v2.norm = norm (v2);
    v_relation.v1 = v1;
    v_relation.v2 = v2;

    show_vector (v_relation.v1, 0);
    show_vector (v_relation.v2, 0);


    v_relation.add = add (v_relation.v1, v_relation.v2);
    v_relation.minus = minus (v_relation.v1, v_relation.v2);
    v_relation.dot = dot_product (v_relation.v1, v_relation.v2);
    v_relation.cross = cross_product (v_relation.v1, v_relation.v2);
    v_relation.is_parallel = is_parallel (v_relation.v1, v_relation.v2);
    v_relation.is_orthogonal = is_orthogonal (v_relation.v1, v_relation.v2);



    show_vector_relation (v_relation, mode);




    return 0;
}