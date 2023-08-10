#include <stdio.h>
/**
 * main - to print the size of data types
 *
 * Return: always (0)
 *
 */
int main(void)
{
        char P;
        int L;
        long int W;
        long long int S;
        float A;

        printf("Size of a char: %lu byte(s)\n", sizeof(P));
        printf("Size of an int: %lu byte(s)\n", sizeof(L));
        printf("Size of a long int: %lu byte(s)\n", sizeof(W));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(S));
        printf("Size of a float: %lu byte(s)\n", sizeof(A));
        return (0);
}
