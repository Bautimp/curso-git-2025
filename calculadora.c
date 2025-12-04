#include <stdio.h>

//Prototipo
int suma(int a, int b);
int resta(int a, int b);
void mostrar_menu();

// Función para mostrar el menú de operaciones
void mostrar_menu(){
    printf("\n CALCULADORA \n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Salir\n");
    printf("Seleccione una opcion: ");
}

int suma(int a, int b) {
    return(a+b);
}

int resta(int a, int b) {
    //completar
}

int main() {
    int opcion = 0, num1, num2, resultado;
    while (opcion!=3) {
        mostrar_menu();
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Ingrese primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese segundo numero: ");
                scanf("%d", &num2);
                resultado = suma(num1, num2);
                printf("Resultado: %d + %d = %d\n", num1, num2, resultado);
                break;
            case 2:
                printf("Ingrese primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese segundo numero: ");
                scanf("%d", &num2);
                resultado = resta(num1, num2);
                printf("Resultado: %d - %d = %d\n", num1, num2, resultado);
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
                break;
        }
    }
    return 0;
}