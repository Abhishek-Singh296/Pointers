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
