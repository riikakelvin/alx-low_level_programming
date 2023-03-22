#include "main.h"
/** _islower - checks for lowercase characters
 *k: the character being checked in the program
 *Return: 1 if successful and 0 when other cases are found
 */
int _islower(int k)
{ if(k >= 97 && k <= 122)
	{return (1);
	}
	return (0);
}
