// Q 45.  What is the output of following code?

#include<stdio.h>
void main()
{
    int b, c = 5;
    int("%d , %d", b,c);
}

// a. 5, 5			  b. 5, 5.000000	
// c. Garbage, 5.000000       d. Garbage, 5

// Ans-
// it will give errors because int is a data type and it does not print anything.