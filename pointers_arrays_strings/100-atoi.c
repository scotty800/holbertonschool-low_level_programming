#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _atoi -print
 * @s: pointer
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int boolen = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{

		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			boolen = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (boolen == 1)
		{
			break;
		}
		i++;
	}

	if (!boolen)
	{
		return (0);
	}

	return (sign * result);
}
