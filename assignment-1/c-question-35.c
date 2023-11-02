// Q35. What is wrong in this statement?  scanf(“%d”,number);

// Ans-
// the ampersand symbol i.e address of operator is missing before the 
// variable 'number'. Without the ampersand symbol, the scanf() function will
// try to store the value that it reads from the user in the variable number itself,
// which is not possible because the variable number is not a pointer.