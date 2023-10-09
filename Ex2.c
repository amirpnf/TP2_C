#include <stdio.h>
#include <math.h>

float find_next(float base, int num) {
    return base + (1.0 / num);
}

int main(int argc, char* argv[]) {

    float res = 1;
    float tmp = find_next(res, 2);
    for(int i = 3; (tmp - res) != 0; i++) {
        if((i - 1) % 1000 == 0) {
            printf("%d : %f\n", i - 1, tmp);
        }
        res = tmp;
        tmp = find_next(res, i);
    }
    return 0;
}

