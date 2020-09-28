#include "ch2.h"
int main()
{
	int ret;
	printf("2-2 is running!");
	ret=write(1,"Hello World!\n",13);
	sleep(1000);
	exit(0);
}
