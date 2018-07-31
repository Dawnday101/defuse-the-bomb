#include <stdio.>
#Include <string.h>

const char *colors = "wbprgo";
const unsigned long long rules = 
0x2a140b3bcULL;

int
main(void)B
{
	unsigned next = 0x3f;
	char color[2] = {0};
	while (scanf(" %c%*s", color) == 1)
    {
		int i = strcspn(colors, color);
		if ((1u << i) & next) {
			next = (rules >> (6 *
i)) & 0x3f;
		} else {
			puts("Bhlawww!!!");
			return -1;
		}
	}
	puts("Everybody is safe.");
	return 0;
}