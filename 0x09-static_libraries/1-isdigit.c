#include "main.h"
/**
 * _isdigit - checks for a digit between 0 and 9
 * @c: is the numbers under examination
 * Return: 1 for numbers less than  or equal to 9, otherwise return 0
 */
int _isdigit(int c)
{if (c >= 48 && c <= 57)
        {
                return (1);
        }
        return (0);
}
