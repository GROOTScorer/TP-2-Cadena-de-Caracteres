#include <stdio.h>
#include <string.h>

int i=0;

char palabra[30], palabra2[30], palabra3[30], palabra4[30], palabra5[30];

main()
{
    printf("Ingrese la primera palabra: ");
    scanf("%s", & palabra);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", & palabra2);

    printf("Ingrese la tercera palabra: ");
    scanf("%s", & palabra3);

    printf("Ingrese la cuarta palabra: ");
    scanf("%s", & palabra4);

    printf("Ingrese la quinta palabra: ");
    scanf("%s", & palabra5);

    printf("La cadena de caracteres más larga que se repite entre las 5 palabras es: ");
    for(i=0;i<30;i++)
    {
        if(palabra[i] == palabra2[i] && palabra[i] == palabra3[i] && palabra[i] == palabra4[i] && palabra5[i])
        {
            printf("%c", palabra[i]);
        }

        else
        {
            break;
        }
    }
}