#include <stdio.h>
#include "push_swap.h"

int main()
{
	NODE a;
	NODE b;
	NODE c;
	a.value = 1;
	a.link = NULL;
	b.value = 2;
	b.link = NULL;
	c.value = 3;
	c.link = NULL;

	a.link = &c;
	b.link = &a;
	c.link = &b;

    printf("a.value = %d\n", a.value);
	printf("a.link->value = %d\n", a.link->value);
    printf("b.value = %d\n", b.value);
    printf("b.link->value = %d\n", b.link->value);
    printf("b.link->link->value = %d\n", b.link->link->value);
    printf("c.value = %d\n", c.value);
    printf("c.link->value = %d\n", c.link->value);
    printf("c.link->link->value = %d\n", c.link->link->value);
}