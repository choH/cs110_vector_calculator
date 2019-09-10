#ifndef VECTOR_H
#define VECTOR_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

struct vector {
    int x, y, z;
    char v_name[11];
    float norm;
};

struct vector_relation {
    struct vector v1;
    struct vector v2;

    bool is_parallel;
    bool is_orthogonal;

    struct vector add;
    struct vector minus;
    int dot;
    struct vector cross;
};


float norm (const struct vector v);

bool is_parallel (const struct vector v1, const struct vector v2);
bool is_orthogonal (const struct vector v1, const struct vector v2);


struct vector set_vector ();
void show_vector (const struct vector v, int mode);
void show_vector_relation (const struct vector_relation r, int mode);

#endif