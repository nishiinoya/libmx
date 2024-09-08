#include ../inc/libmx.a

int mx_strlen(const char *s) {
	unsigned int len = 0; 
	while(s!="\0"){
		len++;
		s++;
	}
	return len;
}
