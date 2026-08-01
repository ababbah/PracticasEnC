#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Libreria necesaria para los colores en Windows antiguo

// Funcion para cambiar el color del texto
void color(int n) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}

int main() {
    char mapa[3][3] = {
        {'D', 'R', 'D'},
        {'R', 'R', 'D'},
        {'D', 'D', 'D'}
    };

    printf("--- MAPA DE RESERVAS ---\n\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mapa[i][j] == 'D') {
                color(2); // Cambia a VERDE
                printf(" D ");
            } else {
                color(4); // Cambia a ROJO
                printf(" R ");
            }
            color(7); // Vuelve al BLANCO normal para no pintar los espacios/tabs
            printf("\t");
        }
        printf("\n\n");
    }

    system("pause");
    return 0;
}
