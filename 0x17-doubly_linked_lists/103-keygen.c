#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * f4 - checks the maximum num
 *
 * @usrn: username
 * @len: length of username
 * Return: the max number
 */
int f4(char *usrn, int len)
{
	int a = *usrn;
	int b = 0;
	unsigned int rand_num;

	while (b < len)
	{
		if (a < usrn[b])
			a = usrn[b];
		b = b + 1;
	}

	srand(b ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - muls each username character of
 *
 * @usrn: ...
 * @len: username's length
 * Return: multiplied char
 */
int f5(char *usrn, int len)
{
	int a, b = 0;

	while (b < len)
	{
		a = a + usrn[b] * usrn[b];
		b = b + 1;
	}

	return (((unsigned int)a ^ 239) & 63);
}

/**
 * f6 - creates a random char
 *
 * @usrn: ...
 * Return: the random char
 */
int f6(char *usrn)
{
	int a, b = 0;

	while (b < *usrn)
	{
		a = rand();
		b += 1;
	}

	return (((unsigned int)a ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, a, b;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	a = b = 0;
	while (b < len)
	{
	       a = a + argv[1][b];
	       b = b + 1;
	}
	keygen[1] = ((char *)alph)[(a ^ 79) & 63];
	/* ----------- f3 ----------- */
	a = 1;
	b = 0;
	while (b < len)
	{
		a = argv[1][b] * a;
		b += 1;
	}
	keygen[2] = ((char *)alph)[(a ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (a = 0; keygen[a]; ++a)
		printf("%c", keygen[a]);
	return (0);
}
