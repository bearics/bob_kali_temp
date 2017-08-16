#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char *buf1, *buf2;

	buf1 = (char*)malloc(128);
	memcpy(buf1, "hello world!\n", 13);
	free(buf1);

	buf2 = (char*)malloc(128);
	printf("%s\n", buf2);
	return 0;
}
