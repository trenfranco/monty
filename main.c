#include "monty.h"

/**
 * main - opcodes implementation
 * @argc: agg count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *buff, *word;
	unsigned int lines = 1, i = 0, j = 0;
	/*instruction_t instr[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop}
	};*/

	word = malloc(1024);
	if (!word)
		exit(EXIT_FAILURE);

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	buff = read_textfile(argv[1]);

	while (buff[i])
	{
		if (buff[i] == '\n')
			lines++;
		else if (buff[i] != ' ')
		{
			word[j] = buff[i];
			j++;
			if (buff[i + 1] == ' ' || buff[i + 1] == '\n' || buff[i + 1] == '\0')
			{
				word[j] = '\0';
				printf("---%s---\n", word);
				j = 0;
				i++;
				/*if (strcmp(word, "push") == 0)
				{
					aux + 1 = j;
					while (buff[aux])
					{
						
					}
				}*/
			}
		}
		i++;
	}
	return (0);
}
