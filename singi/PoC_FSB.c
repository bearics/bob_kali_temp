#include <stdio.h>

int main()
{
	char buf[256];
	fgets(buf,255,stdin);
	printf(buf);
}