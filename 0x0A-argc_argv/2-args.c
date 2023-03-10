#include <stdio.h>

/**
 * main - point of entry
 * Description: prints all command line arguements
 * @argc: count of arguements
 * @argv: array of arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
