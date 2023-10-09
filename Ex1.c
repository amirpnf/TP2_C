#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
    int res = 0;
    int x, y, z;
    for(int i = 0; i <= 500; i++) {
        x = i / 100;
        y = (i % 100) / 10;
        z = i % 10; 
        if(pow(x, 3) + pow(y, 3) + pow(z, 3) == i) {
            printf("%d \n", i);
        }
    }
    return 0;
}