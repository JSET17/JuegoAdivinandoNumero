#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num, n, numAlto, numBajo;

void game();

int main() {
    game();
    return 0;
}


void game() {
    srand(time(NULL));
    num=rand() % 21;

    numAlto = num + 5;
    numBajo = num - 5;

    do {
        system("cls");
        printf("-----Adivina el numero-----\n\n");
        printf("Cual es: ");
        scanf("%d", &n);

        if(n == num) {
            system("cls");
            printf("\nAdivinaste.\n");
            printf("El numero es %d\n\n", num);
            system("pause");
        }

        if(n < num) {
            if( n >= numBajo) {
                system("cls");
                printf("\nCaliente.\n\n");
                system("pause");
            }
        }

        if(n > num) {
            if(n <= numBajo) {
                system("cls");
                printf("\nCaliente.\n\n");
                system("pause");
            }
        }

        if(n > num && n > numBajo) {
            system("cls");
            printf("\nFrio.\n\n");
            system("pause");
        }

        if(n < num && n < numBajo) {
            system("cls");
            printf("\nFrio.\n\n");
            system("pause");
        }
    } while(n != num);
}
