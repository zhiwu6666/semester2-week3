
#include <stdio.h>

/*
 * Example using memory addresses
 */

int main( void ) {

    int k1 = 2;    // we define 2 integer variables
    int k2 = -3;

    printf(" %p , %p\n",(void *)&k1,(void *)&k2);  // we print the memory addresses of both

    // what can you deduce about the memory usage and memory layout from inspecting the addresses?
    printf("Address distance in bytes: %ld\n", (long)((char *)&k2 - (char *)&k1));

    return 0;
}