# C07 Video malloc:

Malloc: Memory Allocation. >> use #include <stdlib.h>
Allocates a size in bytes of memory and returns a void pointer (void *) to the allocated memory. You have to be very precise when it comes to the size you're asking for.
Free: frees the part of the memory you asked Malloc to provide you with. 

To define, as a pointer, a variable whose size hasn't been defined yet. It'll just contain the address of a memory area that we'll ask the system to provide us with. 

EXAMPLE 1: character string
declare a string:
	char 	*str;
(NOT a str[], because this would be a fixed size string)
On the top of the file, DEFINE the length of the string with a header
	#define	LEN		42
to allocate the memory for this string:
	str = malloc(LEN + 1);
So what you are doing here is asking, using malloc, for a size LEN (which is 42 in this case) part of the memory (in bytes).  BUT you always have to do your strings' length + 1, to make room for the '\0' terminating character.
To make absolutely sure you have to right amount of bytes in the malloc, you can use "sizeof". This gives you the size in bytes of a type of variable. so in this case it would become
	str = malloc(sizeof(char) * (LEN + 1));

EXAMPLE 2: array of ints
	int i;
	int *str;

	str = malloc(sizeof(int) * (LEN + 1));
	i = 0;

it's easier to write
	str = malloc(*str) * (LEN + 1));
Because this will tell sizeof to take on the variable type of whatever *str is at that moment. 

remember that malloc returns a void * (aka an address without a type) *str is now a char (ex 1), not a void. This needs to be "cast" in order to work
	str = (char*)malloc(sizeof(*str) * (LEN + 1));

Now to also free up the part of the memory used, you can use the function "free". You literally take the variable that you asked to allocate a piece of the memory to, and that's it.
	free(str);
This allows you to "release" parts of the memory you don't need anymore (because you already did what you needed to do) which makes your programmes more efficient.

Notes:
./a.out &		> to run a programme in the background
top			> to check the status of your programmes
