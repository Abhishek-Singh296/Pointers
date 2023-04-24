# Pointers
Pointers in C are used to store the address of variables or a memory location. This variable can be of any data type i.e, int, char, function, array, or any other pointer. Pointers are one of the core concepts of C programming language that provides low-level memory access and facilitates dynamic memory allocation.A pointer is a derived data type in C that can store the address of other variables or a memory. We can access and manipulate the data stored in that memory location using pointers.There are a few important operations, which we do with the help of pointers very frequently. (a) We define a pointer variable, (b) assign the address of a variable to a pointer and (c) finally access the value at the address available in the pointer variable. This is done by using unary operator * that returns the value of the variable located at the address specified by its operand.

![How-Pointer-Works-In-C](https://user-images.githubusercontent.com/113619312/234043388-b2bc7f9d-a0b8-4285-838e-9e356d444793.png)

---

## __Syntax__
The below syntax is the generic syntax of C pointers. The actual syntax depends on the type of data the pointer is pointing to.
```
datatype * pointer_name;
```
To use pointers in C, we must understand below two operators:
__1. Address of Operator__
The addressof operator ( & ) is a unary operator that returns the address of its operand. Its operand can be a variable, function, array, structure, etc.
```
&variable_name;
```
__2. Dereferencing Operator__
The dereference operator ( * ), also known as the indirection operator is a unary operator. It is used in pointer declaration and dereferencing.
