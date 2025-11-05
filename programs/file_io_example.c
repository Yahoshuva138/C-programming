#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *fname = "program_output.txt";
    FILE *f = fopen(fname, "w");
    if (!f) { perror("fopen"); return 1; }
    fprintf(f, "Hello from file I/O example!\n");
    fclose(f);

    f = fopen(fname, "r");
    if (!f) { perror("fopen"); return 1; }
    char line[256];
    while (fgets(line, sizeof(line), f)) fputs(line, stdout);
    fclose(f);
    return 0;
} 
