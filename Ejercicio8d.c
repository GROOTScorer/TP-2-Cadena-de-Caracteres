#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i=0, len=0;

char oracion[50];

main()
{
    printf("Ingrese una oracion: ");
    fgets(50, oracion, stdin);

    len=strlen(oracion);

    for(i=0;i<len;i++)
    {
        if(oracion[i] == 0)
        {
            if(oracion[i+1] >= 97 && oracion[i] <= 122 && oracion[i] != ' ')
            {
                oracion[i+1]=oracion[i+1];
            }

            else if(oracion[i+1] >= 65 && oracion[i] <= 90 && oracion[i] != ' ')
            {
                oracion[i+1]=oracion[i+1]^32;
            }
        }
    }

    printf("La palabra en todo mayusculas es %s", oracion);
}