# Project 01 - Vector Calculator
> CSCI 110 - Dr. LEE.
> Designed by Henry ZHONG, modified on 2018.10.7.

---

## 1. Required Knowledge Set

To complete this project, you should be familiar with the concept and usage of the following C features:

* Nested Structs.
* Command Line Arguments.
* User Input.
* String.
* Switch Cases.
* Header File & Include Guard (given).
* Makefile (given).

It would be the best if you are aware of the basic mathematical operation with vectors. However, you may always check _Section 8_ to make sure.

---
## 2. Program Functionality

You are expected to write a vector calculator which can display — and calculate, if needed — the following properties of three-dimensional vector(s) in required format.

1. Value of vector, with its name.
2. Norm of vector.
3. Addition of two vectors.
4. Subtraction of two vectors.
5. Dot product of two vectors.
6. Cross product of two vectors.
7. Check if two vectors are parallel to each other.
8. Check if two vectors are orthogonal to each other.


--- 
## 3. Output Requirement

Given different command line arguments and user inputs, your program is expected to display its output accordingly. e.g. the following command line argument `norm` shall tell the program to calculate the norm (a.k.a magnitude, length) of the entered vector (`v1 = < 1, 1, 1 >`).

### 3.1. Norm
```
$ ./vector_calculator norm
Enter the name of this 3D vector (at most 10 characters):
vector_1
Enter the value of this 3D vector separated by space:
1 1 1
||vector_1|| = 1.73
```

In general, there are 8 different command line arguments and 8 kinds of expected output (of course, in similar format). For the rest of 7 command line arguments, the program shall always take the `name` and `value` of two vectors; therefore, for the sake of simplicity, let's assume `v1 = < 1, 1, 1 >`, `v2 = < 0, 0, 0 >`, and omit the user input segment (line 2 to 5 in the `norm` example) in following examples.

### 3.2. Addition
```
$ ./vector_calculator add
... user input ...
v1 = < 1, 1, 1 >
||v1|| = 1.73
v2 = < 0, 0, 0 >
||v2|| = 0.00
add: < 1, 1, 1 >
```
### 3.3. Subtraction

```
$ ./vector_calculator minus
... user input ...
v1 = < 1, 1, 1 >
||v1|| = 1.73
v2 = < 0, 0, 0 >
||v2|| = 0.00
minus: < 1, 1, 1 >
```

### 3.4. Dot Product
```
$ ./vector_calculator dot
... user input ...
v1 = < 1, 1, 1 >
||v1|| = 1.73
v2 = < 0, 0, 0 >
||v2|| = 0.00
dot: 0
```

### 3.5. Cross Product
```
$ ./vector_calculator cross
... user input ...
v1 = < 1, 1, 1 >
||v1|| = 1.73
v2 = < 0, 0, 0 >
||v2|| = 0.00
cross: < 0, 0, 0 >
```

### 3.6. Parallel
```
$ ./vector_calculator parallel
... user input ...
v1 = < 1, 1, 1 >
||v1|| = 1.73
v2 = < 0, 0, 0 >
||v2|| = 0.00
parallel: Yes
```

### 3.7. Orthogonal
```
$ ./vector_calculator orthogonal
... user input ...
v1 = < 1, 1, 1 >
||v1|| = 1.73
v2 = < 0, 0, 0 >
||v2|| = 0.00
orthogonal: Yes
```

### 3.8. All
```
$ ./vector_calculator all
... user input ...
v1 = < 1, 1, 1 >
||v1|| = 1.73
v2 = < 0, 0, 0 >
||v2|| = 0.00
Relationship of v1 and v2
add: < 1, 1, 1 >
minus: < 1, 1, 1 >
dot: 0
cross: < 0, 0, 0 >
parallel: Yes
orthogonal: Yes
```

(on the other hand, if two vectors are NOT parallel or NOT orthogonal to each other, you should provide an output looks like `parallel: No` or `orthogonal: No` accordingly)

**Note your output(s) has to be EXACTLY IDENTICAL to the requirement(s) — including white spaces, punctuations, newliners, and do NOT add trailing white space — as this project might be tested automatically.**

---

## 4. Exception Handling Requirement

* **If invalid amount of command line arguments is given.**
    * Print `Invalid amount of command line arguments is given.` with a newliner at the end.
    * Return `-1` 
* **If invalid `argv[1]` input is given.**
    * Print `Invalid argv[1] input.` with a newliner at the end.
    * Return `-2` 
* **If `norm` is given as command line argument and program runs successfully.**
    * Return `1` 
* **If other-than-`norm` command line argument is passed and program runs successfully.**
    * Return `0` 
* **If `show_vector()` receives invalid `mode` parameter.**
    * Print `Invalid show_vector() mode input.` with a newliner at the end. 
* **If `show_vector_relation()` receives invalid `mode` parameter.**
    * Print `Invalid show_vector_relation() mode input.` with a newliner at the end.
 
---
## 5. Procedure Reference

The prototype and documentation of functions are given in `vector.h` and `calculator.h` — whereas the former one builds and checks the properties of vector(s), and the latter one handles the basic vector calculation — you should implement these functions in `vector.c` and `calculator.c` respectively. 

Note it might be helpful to call functions from `calculator.h` in some `vector.h` functions, while testing & debugging by small code segments are considered as good habit. **Thus, it is recommended to proceed this project in the following order**:
1. Check `struct vector` in `vector.h` and implement `set_vector()` in `vector.c`.
2. Read _Section 3_ of this instruction and implement `show_vector()` in `vector.c`.
3. Read function documentations in `calculator.h` and implement these functions in `calculator.c`.
4. Write debug callers in `main.c` to test these just implemented functions.
5. Read the function documentations in `vector.h` and implement `norm()`, `is_parallel()`, and `is_orthogonal` in `vector.c`.
6. Write debug callers in `main.c` to test these just implemented functions.
7. Check `struct vector_relation` in `vector.h` and re-read _Section 3_ of this instruction. Then implement `show_vector_relation`.
8. Rewrite callers written during *#4* and *#6* in `main.c` with consideration of command line arguments.
9. Read _Section 4_ of this instruction, then fill in return values and error messages as required.
10. Test your program by entering `./vector_calculator` with and without command line arguments in your terminal.

**Note you should not modify the `.h` files and the headers (`#include`) of `.c` files. However, you may always edit the provided the skeleton code as you wish.**

---
## 6. Useful Syntax & Hints. 

1. [strcmp()](https://www.tutorialspoint.com/c_standard_library/c_function_strcmp.htm)
    * `int strcmp (const char* str1, const char* str2)`
        * if Return value < 0 then it indicates `str1` is less than `str2`.
        * if Return value > 0 then it indicates `str2` is less than `str1`.
        * if Return value = 0 then it indicates `str1` is equal to `str2`.
        * You may ignore the `*` sign for now, it basically means `char str1[]` — as string is an array of chars — but written in pointer syntax.
    * Example: `if (strcmp (argv[1], "norm") == 0) {...}`
    * **Must use for checking command line arguments, typical logical expression like `if (argv[1] == "norm")` won't work.**
    
2. [sqrtf()](https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.bpxbd00/sqrt.htm)
    * `float sqrtf (float num)`
        * Return the square root (in float type) of a float number.
    * Example: `float norm = sqrtf (x*x + y*y + z*z)`

3. [strcpy](https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.htm)
    * `strcpy (char* str1, char* str2)`
        * It will copy the value of string `str2` to `str1`.
    * Example: `strcpy (v.v_name, vector_name)`

4. Since the command line argument `all` asks for everything that other command line arguments have asked, the feature of `switch...case...` without `break` might be handy.

5. Note the command line argument `norm` only asks for user input of one vector.

6. Useful tricks in Terminal (might only works under unix-like OS, e.g. maxOS and Linux).
    * `command + k`: Erases entire screen and prevents roll-up to see historical commands.
    * `make`: Calls the `Makefile` document and build your program.
    * `make clean`: Calls the `clean` part in the `Makefile` program, in this case, it will `rm` (permanently erase) your `executable` and `.o` files.
    * `control + z` or `control + c`: Suspends or interrupts a process, handy if you want to exit from a user input.
    * `control + c`: Kills the running process.
    * `up` and `down` arrow key: Loop through historical commands.
    * `echo $?` after you executed a program: Display the return value.
     
---
## 7. Submission

**Release Date**: Sep 1, 2018 (Monday)
**Deadline**: Oct 26, 2018 (Friday)
**Format**: Compress only your `.c` `.h` and `Makefile` into a zip file (therefore, `make clean` your project folder first), name it as `CS110FistnameLastnamePJ01.zip` and submit it on Moodle.

---
## 8. Mathematical Insights

Lets assume $\vec{a} =\ < a_{x}, a_{y}, a_{z} >$ and $\vec{b} =\ < b_{x}, b_{y}, b_{z} >$.

**Norm**
\\[||\vec{a}|| = \sqrt{a_{x}^{2} + a_{y}^{2} + a_{z}^{2}}\\]

**Addition**
\\[\vec{a} + \vec{b} =\ < a_{x} + b_{x}, \ a_{y} + b_{y}, \ a_{z} + b_{z} >\\] 

**Subtraction**
\\[\vec{a} - \vec{b} =\ < a_{x} - b_{x}, \ a_{y} - b_{y}, \ a_{z} - b_{z} >\\] 

**Dot Product**
\\[\vec{a} \cdot \vec{b} =\ a_{x} \cdot b_{x} + a_{y} \cdot b_{y} + a_{z} \cdot b_{z}\\] 

**Cross Product**
\\[\vec{a} \times \vec{b} =\ < (a_{y} \cdot b_{z} - a_{z} \cdot b_{y}),\ (a_{z} \cdot b_{x} - a_{x} \cdot b_{z}),\ (a_{x} \cdot b_{y} - a_{y} \cdot b_{x}) >\\] 

**Parallel**
If $\vec{a}$ is parallel to $\vec{b}$, there must be $\vec{a} = k\vec{b}$ whereas $k$ is a constant. 
(Note $k\vec{b} =\ < kb_{x},\ kb_{y},\ kb_{z} >$）

There shall also be:
\\[\vec{a} \times \vec{b} =\ < 0, 0, 0 > \\]

**Orthogonal**
If $\vec{a}$ is orthogonal to $\vec{b}$, there must be $\vec{a} \cdot \vec{b} = 0$.


---
## 9. Grading Rubric


| Part | Grade |
| :-: | :-: |
| Correct “norm" output | 15 |
| Correct “add" output | 2 |
| Correct “minus" output | 6 |
| Correct “dot” output | 6 |
| Correct “cross” output | 15 |
| Correct “parallel” output | 10 |
| Correct “orthogonal” output | 6 |
| Correct “all” output | 20 |
| Correct return value(s) | 4 |
| Correct error message(s) printing | 4 |
| Correct vector name assignment | 2 |
| [Coding Style](http://csweb.wooster.edu/nsommer/cs110/style-guide.html) (Ref. by Dr. Sommer) | 10 |
| Total | 100 |






