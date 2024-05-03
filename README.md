# libft
Library of functions, will add to as the 42 cursus continues.
Includes: 

# printf

Implements the following conversions:  
 • %c Prints a single character.  
 • %s Prints a string (as defined by the common C convention).  
 • %p The void * pointer argument has to be printed in hexadecimal format.  
 • %d Prints a decimal (base 10) number.  
 • %i Prints an integer in base 10.  
 • %u Prints an unsigned decimal (base 10) number.  
 • %x Prints a number in hexadecimal (base 16) lowercase format.  
 • %X Prints a number in hexadecimal (base 16) uppercase format.  
 • %% Prints a percent sign.  


# get_next_line

A function that returns a line read from a file descriptor.  
 • Repeated calls (e.g., using a loop) to the get_next_line() will read the text file pointed to by the file descriptor, one line at a time.  
 • The function returns the line that was read. If there is nothing else to read or if an error occurred, it will return NULL.  
 • The code is compiled as follows (a buffer size of 42 is used as an example): cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c  
 • Only one static variable is used.  
 • Can manage multiple file descriptors at the same time.  


From fract-ol: ft_atod (transforms char * input to double)
