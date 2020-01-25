/*
 * Author's name and email: Michael
 * Program description: Display min max values and unsigned max values of 
 *  char, short, int, long, long long.
 * Latest version: 12:39 PM, 9/29/2019.
 * Older versions:
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("SCHAR_MIN: %4hi\nSCHAR_MAX: %4hi\n\n", SCHAR_MIN, SCHAR_MAX);
	printf("UCHAR_MAX: %4hu\n\n", UCHAR_MAX);

	printf("SHRT_MIN: %6hi\nSHRT_MAX: %6hi\n\n", SHRT_MIN, SHRT_MAX);
	printf("USHRT_MAX: %5hu\n\n", USHRT_MAX);

	printf("INT_MIN: %11d\nINT_MAX: %11d\n\n", INT_MIN, INT_MAX);
	printf("UINT_MAX: %10u\n\n", UINT_MAX);

	printf("LONG_MIN: %11ld\nLONG_MAX: %11ld\n\n", LONG_MIN, LONG_MAX);
	printf("UINT_MAX: %11lu\n\n", ULONG_MAX);

	printf("LONG LONG_MIN: %20lld\nLONG LONG_MAX: %20lld\n\n", LLONG_MIN, LLONG_MAX);
	printf("UINT_MAX: %25llu\n\n", ULLONG_MAX);
	
	getchar();
	return 0;
}
