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


/* norm()
 * Parameters: takes a vector-type struct instance.
 * Return: return a float with the norm of passed vector.
 */
float norm (const struct vector v);


/* is_parallel()
 * Parameters: takes two vector-type struct instances.
 * Return: if two passed vector are parallel, returns true. Otherwise returns false;
 */
bool is_parallel (const struct vector v1, const struct vector v2);


/* is_orthogonal()
 * Parameters: takes two vector-type struct instances.
 * Return: if two passed vector are orthogonal, returns true. Otherwise returns false;
 */
bool is_orthogonal (const struct vector v1, const struct vector v2);


/* set_vector()
 * Ask user to input the name and value of a vector-type struct instance.
 * Parameters: none.
 * Return: return a vector-type struct instance.
 */
struct vector set_vector ();


/* show_vector()
 * Show elements in the passed vector-type struct instance.
 * Parameters:
    * v: a vector-type struct instance.
    * mode: an indicator which decides what output should the function print.
 */
void show_vector (const struct vector v, int mode);


/* show_vector_relation()
 * Show elements in the passed vector_relation-type struct instance.
 * Parameters:
    * v: a vector_relation-type struct instance.
    * mode: an indicator which decides what output should the function print.
 */
void show_vector_relation (const struct vector_relation r, int mode);


#endif