#include <stdio.h>

int main() {
	printf("Step 1\n");

	char c = 98;
	int i = 8976;
	long l = 5;

	printf("\nStep 2\n");

	printf("&c: %d\n", (int)&c);
	printf("&i: %d\n", (int)&i);
	printf("&l: %d\n", (int)&l);
	printf("&c: %p\n", &c);
	printf("&i: %p\n", &i);
	printf("&l: %p\n", &l);

	printf("\nStep 3\n");

	char *cp = &c;
	int *ip = &i;
	long *lp = &l;

	printf("\nStep 4\n");

	printf("cp: %p\n", cp);
	printf("ip: %p\n", ip);
	printf("lp: %p\n", lp);

	printf("\nStep 5\n");

	*cp = 100;
	*ip = 20;
	*lp = 30775748;
	printf("c: %d\n", c);
	printf("i: %d\n", i);
	printf("l: %ld\n", l);

	printf("\nStep 6\n");

	unsigned int var = 2150000000;
	int *ivar = (int *)&var;
	char *cvar = (char *)&var;

	printf("\nStep 7\n");

	printf("var: %p, var points to: %d\n", ivar, *ivar);
	printf("var: %p, var points to: %d\n", cvar, *cvar);

	printf("\nStep 8\n");

	printf("var: %u\n", var);
	printf("var: %x\n", var);

	printf("\nStep 9\n");

	int a;
	for (a = 0; a < 4; a++) {
		printf("char %d: %hhu\n", (a + 1), *(cvar + a));
	}

	printf("\nStep 10\n");

	for (a = 0; a < 4; a++) {
		++*(cvar + a);
	}
	printf("var: %u\n", var);
	printf("var: %x\n", var);
	for (a = 0; a < 4; a++) {
		printf("char %d: %hhu\n", (a + 1), *(cvar + a));
	}

	printf("\nStep 11\n");

	for (a = 0; a < 4; a++) {
		*(cvar + a) = *(cvar + a) + 16;
	}
	printf("var: %u\n", var);
	printf("var: %x\n", var);
	for (a = 0; a < 4; a++) {
		printf("char %d: %hhu\n", (a + 1), *(cvar + a));
	}

	return 0;
}