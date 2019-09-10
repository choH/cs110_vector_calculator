#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



struct vector add (const struct vector v1, const struct vector v2);

struct vector minus (const struct vector v1, const struct vector v2);

int dot_product (const struct vector v1, const struct vector v2);

struct vector cross_product (const struct vector v1, const struct vector v2);



#endif