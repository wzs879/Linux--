#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/utsname.h>
#include <rpc/types.h>
#include <errno.h>
#define err_exit(MESSAGE) (               \
	perror(MESSAGE),                  \
	exit(1)                            \
)
