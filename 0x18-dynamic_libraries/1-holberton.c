#include "main.h"
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _strlen(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

// Implement other functions similarly
