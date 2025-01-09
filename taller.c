#include <stdio.h>

int main (int argc, char *argv[]) {

    char texto[100];
    int palabras = 0, min = 100, max = 0, num = 0, caracteres = 0, NC = 0;

    printf ("Ingrese una frase: " );
    fflush (stdin);
    fgets (texto,100,stdin);

    while (texto[caracteres] != '\0')
    {
        caracteres = caracteres + 1;
    }
    
    if (caracteres == 0 || texto[0] == '\n')
    {
        printf ("La frase no es valida. \n");
        return 0; 
    }

    for (int i = 0; i < caracteres; i++){
        if (texto[i] == ' ' || texto[i] == '\0' || texto[i] == '\n' ){
            if (num > 0){
                palabras = palabras + 1; 
                if (num > max){
                    max = num; 
                }
                if (num < min){
                    min = num; 
                }
                num = 0;  
            }
        }   else{
                num = num + 1; 
                NC = NC + 1;
        }
    }
    printf ("El numero de caracteres es: %d \n ", NC); 
    printf ("El numero de palabras es: %d \n", palabras); 
    printf ("El numero de caracteres de la palabra mas corta es: %d \n", min);
    printf ("El numero de caracteres de la palabra mas larga es: %d \n", max);
    return 0;
}