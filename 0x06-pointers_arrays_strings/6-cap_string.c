#include "main.h"
/**
 * cap_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = {',', ';', '.', '?', '"', '(', ')',
		'{', '}', ' ', '\n', '\t'};
	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; sep[j] != 0; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
