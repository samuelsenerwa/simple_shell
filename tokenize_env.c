#include "shell.h"

/**
 * tokenize_env - Tokenize the PATH to return a list of folders
 * @path: The path string to convert to an array
 *
 * Return: An array of the directories
 */

char **tokenize_env(char *path)
{
	char *path_copy = path;
	int i = 0;
	char *token;

	/*
	 * making use of static library instead of malloc
	 */

	static char *arr[20] = {NULL};

	if (path == NULL)
		return(NULL);

	token = strtok(path_copy, ":");
	while (token != NULL)
	{
		arr[i++] = token;
		token = strtok(NULL, ":");
	}


	return (arr);
}
