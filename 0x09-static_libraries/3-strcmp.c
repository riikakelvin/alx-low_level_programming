#include "main.h"
/**
 * _strcmp -  compares two strings
 * @s1: string value two
 * @s2: string value one
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{       int k;

        for (k = 0; s1[k] != '\0' || s2[k] != '\0'; k++)
        {
        if (s1[k] < s2[k])
        {
                return (s1[k] - s2[k]);
        }
        else if (s1[k] > s2[k])
        {
                return (s1[k] - s2[k]);
        }
        }
        return (0);
}
