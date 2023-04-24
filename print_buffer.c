#include "main.h"

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @bufferIndex: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *bufferIndex)
{
	if (*bufferIndex > 0)
		write(1, &buffer[0], *bufferIndex);

	*bufferIndex = 0;
}
  
