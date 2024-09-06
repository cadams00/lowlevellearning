#include <stdio.h>

union myunion {
    int x;
    char c;
    short s;
};

int main() {
    union myunion u;
    u.x = 0x41424344;
    printf("%hx %hhx\n", u.s, u.c); 
  }