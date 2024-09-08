#include ../inc/libmx.a

void mx_printchar(char c) {
	write(1, &c, 1); 
}
