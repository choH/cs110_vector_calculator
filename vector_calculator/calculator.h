#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* add()
 * Parameters: takes two vector-type struct instances.
 * Return: return a vector-type struct instance with the addition of two passeed vectors (v1 + v2).
 */
struct vector add (const struct vector v1, const struct vector v2);

/* minus()
 * Parameters: takes two vector-type struct instances.
 * Return: return a vector-type struct instance with the Subtraction of two passeed vectors (v1 - v2).
 */
struct vector minus (const struct vector v1, const struct vector v2);

/* dot_product()
 * Parameters: takes two vector-type struct instances.
 * Return: return an int with the dot product of two passeed vectors (v1 \cdot v2).
 */
int dot_product (const struct vector v1, const struct vector v2);

/* cross_product()
 * Parameters: takes two vector-type struct instances.
 * Return: return a vector-type struct instance with the cross product of two passeed vectors (v1 \times v2).
 */
struct vector cross_product (const struct vector v1, const struct vector v2);



#endif