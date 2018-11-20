/* License GPLv3
 * Copyright 2018 Luiz Torro
 * Author: luiz.torro@gmail.com */

#include <stdio.h>
#include <unistd.h>

void print_usage() {
	printf (
		"-h -?\tShow this instruction.\n"
		"-a\tOption a.\n"
		"-b\tOption b with argument.\n"
	);
}

int main(int argc, char **argv) {
	int opt;
	while ((opt = getopt(argc, argv, "?hab:")) != -1) {
		switch(opt) {
		case 'a':
			printf("Valid option '%c'\n", opt);
			break;
		case 'b':
			printf("Valid option '%c' with argument '%s'\n", opt, optarg);
			break;
		case 'h':
		default:
			print_usage();
			break;	
		}
	}
}
