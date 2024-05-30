// Christmas_tree

#include <stdio.h>

int main(void)
{
    unsigned int size = 0;
    unsigned int i;
    unsigned int j;

    printf("Enter tree size : ");
    scanf("%u", &size);

    puts("");

    for(i = 0; i < size; i++) { 
        for(j = 0; j < size - i - 1; j++) { 
            printf(" ");
        }

        for(j = 0; j < i * 2 + 1; j++) {
            printf("*");

        }
        puts("");
    }

    for(i = 0; i < size - 1; i++ ) {
        printf(" ");
    }
    if(size > 0) {
        printf("*");
    }

    puts("");

}
