#include <stdio.h>

int main(void)

{

	int length;
	char format[40];

	scanf("%s", format);
	printf("%s\n", format);
	length = printf("format\n") - 1;
	printf("%s contains %d characters\n", format, length);
	return (0);
}
