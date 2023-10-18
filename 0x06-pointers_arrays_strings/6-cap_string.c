#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string to capitalize its words
 * Return: it returns characters
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 'a' + 'A';
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';'
				|| str[i] == '.' || str[i] == '!'
				|| str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')'
				|| str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 'a' + 'A';
			}
		}
		i++;
	}
	return (str);
}
