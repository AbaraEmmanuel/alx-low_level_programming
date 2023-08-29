#include "main.h"
/**
 * set_string - sets the value of a pointer to char
 * @s: pointer points to a pointer named to
 * @to: pointer points to char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
