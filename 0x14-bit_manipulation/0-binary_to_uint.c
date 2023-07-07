#include "main.h"
#include "stdio.h"
/**
 * binary_to_uint - converts a Binary Number to unsigned int
 * @b: containing a string of 0 and 1 char
 *
 * Return: the converted number or 0
 * b: is NuLL if there is one or more char
 */

unsigned int binary_to_uint(const char *b)
{
  unsigned int val = 0;
  int i = 0;

  if (b == NULL)
    return 0;

  while (b[i] == '0' || b[i] == '1')
  {
    val <<= 1;
    val += b[i]-'0';
    i++;
  }
  return val;
}
