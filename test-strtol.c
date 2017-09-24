#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
//#include <string.h>

/*
 * STRTOL(3)                            Linux Programmer's Manual                            STRTOL(3)
 * 
 * NAME
 *        strtol, strtoll, strtoq - convert a string to a long integer
 * 
 * SYNOPSIS
 *        #include <stdlib.h>
 * 
 *        long int strtol(const char *nptr, char **endptr, int base);
 * 
 *        long long int strtoll(const char *nptr, char **endptr, int base);
 * 
 *    Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
 * 
 *        strtoll():
 *            _XOPEN_SOURCE >= 600 || _BSD_SOURCE || _SVID_SOURCE || _ISOC99_SOURCE ||
 *            _POSIX_C_SOURCE >= 200112L;
 *            or cc -std=c99
 */

void test_strtol(void)
{
	char *end = NULL;
	char str[32];
	int int_val;
	unsigned int uint_val;
	long int lint_val;
	unsigned long int ulint_val;

	printf("start test-strtol\n");
	printf("\n");

	printf("CHAR_MIN\t=%d\n", CHAR_MIN);
	printf("CHAR_MAX\t=%d\n", CHAR_MAX);
	printf("UCHAR_MAX\t=%d\n", UCHAR_MAX);

	printf("SHRT_MIN\t=%d\n", SHRT_MIN);
	printf("SHRT_MAX\t=%d\n", SHRT_MAX);
	printf("USHRT_MAX\t=%u\n", USHRT_MAX);

	printf("INT_MIN\t\t=%d\n", INT_MIN);
	printf("INT_MAX\t\t=%d\n", INT_MAX);
	printf("UINT_MAX\t=%u\n", UINT_MAX);

	printf("LONG_MIN\t=%ld\n", LONG_MIN);
	printf("LONG_MAX\t=%ld\n", LONG_MAX);
	printf("ULONG_MAX\t=%lu\n", ULONG_MAX);

	printf("LLONG_MIN\t=%lld\n", LLONG_MIN);
	printf("LLONG_MAX\t=%lld\n", LLONG_MAX);
	printf("ULLONG_MAX\t=%llu\n", ULLONG_MAX);

	printf("\n");
	
	sprintf(str, "%d", INT_MAX); 
	int_val = (int)strtol(str, &end, 10);
	perror("strtol error");
	printf("INT_MAX\t\t=%d\n", int_val);
	
	sprintf(str, "%u", UINT_MAX); 
	uint_val = (unsigned int)strtol(str, &end, 10);
	perror("strtol error");
	printf("UINT_MAX\t=%u\n", uint_val);
	
	sprintf(str, "%ld", LONG_MAX); 
	lint_val = strtol(str, &end, 10);
	perror("strtol error");
	printf("LONG_MAX\t=%ld\n", lint_val);
	
	sprintf(str, "%lu", ULONG_MAX); 
	ulint_val = strtoul(str, &end, 10);
	perror("strtoul error");
	printf("ULONG_MAX\t=%lu\n", ulint_val);
}
