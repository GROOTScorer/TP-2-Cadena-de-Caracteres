#include <stdio.h>
#include <string.h>

int cont=0, i=0, len=0, palindromo=1;

char palabra[30];

main()
{
	printf("Ingrese una palabra: ");
	scanf("%s", & palabra);
	
	len = strlen(palabra);
	
		for(i=0;i<len/2;i++)
		{
			if(palabra[i] != palabra[len-1-i])
			{
				palindromo=0;
			}
		}
	
	
	
	if(palindromo == 0)
	{
		printf("No es palindromo.");
	}
	
	else
	{
		printf("Es palindromo.");
	}
}
