#include <stdio.h>
/**
 *main - Entry point
 * Retunt: always 0 (success)
 */
int main(void)
{
	printf("size of a char: %u byte(s)\n", sizeof(char));
	printf("size of an int: %u byte(s)\n", sizeof(int));
	printf("size of a long int: %u byte(s)", sizeof(long int));
	printf("size of a long int: %u byte(s)\n", sizeof(long long int));
	printf("size of a float: %u byte(s)", sizeof(float));
	return (0);
}
