#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* start) {
    int i, j, tmp;

    for(i = 0, j = strlen(start) - 1; i < j; i++, j--) {
        tmp = start[i];
        start[i] = start[j];
        start[j] = tmp;
    }

    //start[strlen(start) -1] = '\0';
} 

int main(int argc, char* argv[]) {
    char* dest = (char*)malloc(sizeof(char) * (strlen(argv[1]) + 1));
    strcpy(dest, argv[1]);
    reverse(dest);
    //s[0]='B';
    printf("%s\n", dest);
    return 0;
}
   