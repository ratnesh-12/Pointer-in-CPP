# Pointer-in-CPP

# 1.Pointer Arithmetic with Array Elements (Exp1)
# Aim: 
To perform arithmetic operations (addition and subtraction) using values accessed via pointers in an array.

# Theory: 
In C++, pointers can be used to directly access array elements by storing the address of the required index. Once dereferenced, the pointer gives the value at that location, which can then be used in arithmetic operations like addition or subtraction.

# Algorithm:

Initialize an integer array.

Create two pointers pointing to specific elements of the array.

Dereference both pointers to get their values.

Perform addition and subtraction using these values.

Display the results.

# Conclusion: 
I learned how to use pointers to access specific array elements and perform arithmetic operations on their values.

# 2.Pointer Increment with Different Data Types (Exp2)
# Aim: 
To observe how pointer arithmetic behaves differently for various data types.

# Theory: 
When a pointer is incremented, it moves to the next memory location based on the size of the data type it points to. For example, incrementing an int* will move the pointer by 4 bytes (on most systems), while incrementing a double* will move it by 8 bytes.

# Algorithm:

Declare variables of different data types.

Create pointers for each variable and store their addresses.

Print the address before increment.

Increment the pointer and print the address again.

Observe the difference in address change for each type.

# Conclusion: 
I learned that pointer arithmetic depends on the data type size, and incrementing a pointer moves it by the number of bytes equal to its type’s size.

# 3 .Printing a String using Pointer Traversal (Exp3)
# Aim: 
To read a string from the user and print it using pointer traversal without indexing.

# Theory: 
In C++, a string stored in a character array can be accessed using a pointer to its first element. By incrementing the pointer, we can sequentially access each character until we reach the null terminator '\0', which marks the end of the string.

# Algorithm:

Declare a character array.

Take string input from the user.

Store the base address of the array in a pointer.

Use a loop to print characters by dereferencing the pointer.

Stop when the null character is reached.

# Conclusion: 
I learned how to traverse and print a string using only a pointer without relying on array indexing.

# 4. Traversing an Array in Forward and Reverse using Pointers (Exp4)
# Aim: 
To traverse an array in both forward and reverse order using pointers.

# Theory: 
Pointers can be used to iterate over an array by incrementing or decrementing their value. Forward traversal is achieved by moving the pointer from the start index, while reverse traversal is done by moving it backward from the last index.

# Algorithm:

Initialize an integer array.

Create a pointer to point to the last element of the array.

Traverse forward by adjusting pointer positions relative to the start.

Traverse in reverse by decrementing the pointer index.

Print both traversals.

# Conclusion: 
I learned how to use pointer arithmetic to traverse an array in both forward and reverse order without using indexing.
