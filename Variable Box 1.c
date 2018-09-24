#include <stdio.h>
#include <stdlib.h>


void border(int size) {
    for (int k = 1; k <= size; k++) {
        printf("*");
    }

    printf("\n");


}

void middle(int size){

    for (int k = 1; k <= size - 2; k++)

    {
        printf("*");

        for ( int k = 1 ; k <= size - 2; k++) {

            printf("-");

        }
        printf("*\n");
    }
}

void box(int size) {

        border(size);
        middle(size);
        border(size);

}


int main() {
    int size1;
    int size2;
    scanf("%d %d", &size1, &size2);
    box(size1);
    box(size2);
    return EXIT_SUCCESS;
}
