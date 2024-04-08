#include <stdio.h>

char nombre[30];

main()
{
	printf("Ingrese su nombre: ");
	scanf("%s", & nombre);
	
	printf("Su nombre es %s", nombre);
}
