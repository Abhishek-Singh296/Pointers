# Pointers
Pointers in C are used to store the address of variables or a memory location. This variable can be of any data type i.e, int, char, function, array, or any other pointer. Pointers are one of the core concepts of C programming language that provides low-level memory access and facilitates dynamic memory allocation.A pointer is a derived data type in C that can store the address of other variables or a memory. We can access and manipulate the data stored in that memory location using pointers.There are a few important operations, which we do with the help of pointers very frequently. (a) We define a pointer variable, (b) assign the address of a variable to a pointer and (c) finally access the value at the address available in the pointer variable. This is done by using unary operator * that returns the value of the variable located at the address specified by its operand.

![PointersinC](https://user-images.githubusercontent.com/113619312/234046447-23b6fe94-dcbb-4adc-aa81-189bdb495440.png)

---

## __Syntax__
The below syntax is the generic syntax of C pointers. The actual syntax depends on the type of data the pointer is pointing to.
```
datatype * pointer_name;
```
To use pointers in C, we must understand below two operators:


__1. Address of Operator:__
The addressof operator ( & ) is a unary operator that returns the address of its operand. Its operand can be a variable, function, array, structure, etc.
```
&variable_name;
```


__2. Dereferencing Operator:__
The dereference operator ( * ), also known as the indirection operator is a unary operator. It is used in pointer declaration and dereferencing.
```
data_type * pointer_name;
```

---

## __Code__
```
#include <stdio.h>

int main()
{
	int x=4;
	int *p;
	p=&x;
	//*p=*p+2;
	printf("%d\n", *p);//value at address pointed by p
	printf("%d\n", x);//value of x
	printf("%d\n", &x);//memory address of variable x
	printf("%d\n", p);//stores the value of p which is memory address of variable x
	printf("%d\n", *p);//memory address of p
}
```

---

## __Output__

![Screenshot 2023-04-11 155259](https://user-images.githubusercontent.com/113619312/234048633-3a709674-0b60-461e-af8f-4e225d87a982.png)
