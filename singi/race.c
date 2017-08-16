#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

#define FILENAME "pwndata"

int main()
{	
	FILE *fp;

	fp=fopen(FILENAME, "w+");
	chmod(FILENAME,0600);
	fprintf(fp, "hello world!\n");;
	fclose(fp);
	unlink(FILENAME);
	return 0;
}