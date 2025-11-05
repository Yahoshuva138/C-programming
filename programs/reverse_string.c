#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[1024];
    if (!fgets(buf, sizeof(buf), stdin)) return 1;
    size_t len = strlen(buf);
    if (len && buf[len-1] == '\n') buf[--len] = '\0';
    for (size_t i = 0; i < len/2; ++i) {
        char t = buf[i]; buf[i] = buf[len-1-i]; buf[len-1-i] = t;
    }
    printf("%s\n", buf);
    return 0;
} 
