#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int writefunction()
{
	int    fd;
	char   writebuffer[32];
	int    lcounter = 0;
	size_t buffsize = 31;

	fd = open ("abcfile", O_WRONLY|O_APPEND);
	while (lcounter++ < 16)
	{
		printf("please enter the next string to send to the reader\n");
		buffsize = read(0, writebuffer, buffsize);
		if (buffsize > 0)
		{
			write(fd, writebuffer, buffsize);
		}
		buffsize = 31;
	}
	close(fd);
	return;
}

int main ()
{
	printf("I am the writer program\n");
	writefunction();
	printf("Hall No , I am done with writing\n");
	return 1;
}
