/**************
	*	
	*	lecture 2, ex. 1
	*	trainee Oleksii Malyi
**************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int func(uint32_t*, const size_t);
int main(void)
{
	uint32_t number = 0xAABBCCDD;
	printf("our number = %X\n\n", number);
	func(&number, sizeof(number));
	printf("our number = %X\n\n", number);
	
	return 0;
}

int func(uint32_t *p_number, const size_t SIZE)
{
	unsigned char *tmp = NULL;
	tmp = malloc(SIZE);
	if(!tmp)
		return -1;
	for (int i = 0; i < SIZE; i++)
		tmp[i] = *p_number >> (i*8);
	
	*p_number = 0;
	for (int i = 0, dig = (SIZE-1)*8; i < SIZE; i++, dig-=8)
		*p_number = *p_number | (tmp[i] << dig);
	
	free(tmp);
}