#include "monty.h"

int main(void)
{
	char *n = "bytecodes/00.m", *i;

	i = read_textfile(n);

	printf("%s", i);
	return (0);
}
