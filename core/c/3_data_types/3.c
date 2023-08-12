#include <stdio.h>

int main(void) {
    int int_number = 69;
    float float_number = 69.021;
    double double_number = 699696969696969969696969696996969696969.699696969696969;
    char char_letter = 'A';  // Usar aspas simples para caracteres individuais
    char char_name[30] = "Samuel";
    printf("O número é: %d \n", int_number);// Usar %d para int
    printf("O número é: %f \n", float_number); // Usar %f para float
    printf("O número é: %lf \n", double_number); // Usar %lf para doble
    printf("A letra é: %c \n", char_letter); // Usar %c para char
    printf("A string é: %s \n", char_name); // Usar %s para string

    return 0;
}