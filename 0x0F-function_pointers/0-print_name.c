#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - f points to either func in main
 * @name: name
 * @f: pointer to print upp or non upp func
 * Return: void
 */
int main()
void print_name(char *name, void (*f)(char *name));
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
