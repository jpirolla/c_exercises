#include<stdlib.h>
#include<stdio.h>

enum{
	PROGNAME,
	ARGUMENT1,
	ARGUMENT2,
	NARGS
};

int main(int argc, char *argv[]) {
	print("%d\n",argc);
	for(int i=0; i<argc; i++){
		printf("s\n", argv[i]);
	}
	return(0);
}