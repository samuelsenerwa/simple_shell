#include "shell.h"
#define BUFSIZE 1024
/**
 * splitline - Splits a line passed to it and stores the word into an array
 * @line: the line to be split
 * Return: The array of tokens if succesful
 */

char **splitline(char *line)
{
	int bufsize = BUFSIZE, position = 0;
	char **tokens = malloc(bufsize *sizeof(char *));
	char *token;

	if(!tokens)
	{
		perror("hsh");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " ");
	while (token != NULL)
	{
		tokens[position] = token;
		position++;
		token = strtok(NULL, " ");
	}
	tokens[position] = NULL;

	return (tokens);
}
