#include "main.h"
/**
 * _isalpha - checks alphabet charactors
 * @c: the charactor to be checked
 * Return: 1 (alphabet) or 0 (elsewhere)
 */
int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
