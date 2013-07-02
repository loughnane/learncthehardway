#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	if(argc!=2){//if argument counts doesn't equal 2..
		printf("ERROR: You need one argument.\n"); // say you don't have enough arguments
		//this is how you abort a program
		return 1;
	}
    int val;

http://linux.die.net/man/2/write    printf("%d\n",val);
	return 0;
}