#include ../inc/libmx.a

void mx_printstr(const char *) {
	int length = mx_strlen(s);
	write(1, s, length);
}
