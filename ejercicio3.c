#include <stdio.h>

int main () {
    printf("this computing enveiroment uses \n");
    printf("%zu byte for chars\n ", sizeof(char));
    printf("%zu bytes for shorts\n", sizeof(short int));
    printf("%zu byte for ints\n ", sizeof(int));
    printf("%zu bytes for longs\n", sizeof(long int));
    printf("%zu byte for long long\n ", sizeof(long long int));
    printf("%zu bytes for floats\n", sizeof(float));
    printf("%zu bytes for doubles\n", sizeof(double));
    printf("%zu byte for pinters\n ", sizeof(int*));
    
    return 0;
}