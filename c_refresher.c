
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int global_var = 42;

int main(int argc, char *argv[]) {
	int stack_var = 100;
	int *heap_ptr = malloc(sizeof(int));
	*heap_ptr = 200;

	printf("argc: %d, argv[0]: %s, argv[1]:  %s\n", argc, argv[0], argv[1]);
	printf("global (data, segment): %p -> %d\n", &global_var, global_var);
	printf("stack local:		%p -> %d\n", &stack_var, stack_var);
	printf("heap allocated		%p -> %d\n", heap_ptr, *heap_ptr);

	printf("press any key and press ENTER...\n");
	getchar();

	free(heap_ptr);
	return 0;
}
