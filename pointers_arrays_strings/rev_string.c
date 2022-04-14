#include "main.h"

void rev_string(char *s)
{
	int i;
	char tmp;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	len = i;
	for (len = 0; len < i /2; i++)
	{
		tmp = s[len];
		s[len] = s[i];
		s[len--] = tmp;
	}
}
