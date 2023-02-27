/**
 *_strcpy - copies string pointed by srcincluding \0 to buffer pointed by dest
 *
 *@src: pointer to source string
 *@dest: pointer to buffer where string should be copied to
 *
 *Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (aux);
}
