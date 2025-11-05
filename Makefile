CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -O2
PROGS = hello_world sum_two_numbers calculator factorial prime_check fibonacci reverse_string file_io_example

all: $(PROGS)

%: programs/%.c
\t$(CC) $(CFLAGS) -o $@ $<

clean:
\trm -f $(PROGS) program_output.txt

.PHONY: all clean
