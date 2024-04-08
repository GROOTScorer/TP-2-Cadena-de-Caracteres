#include <stdio.h>
#include <string.h>

int cont=0, i=0, j=0, len=0, len2=0, anagrama=1;

char palabra[30], palabra2[30];

main()
{
	printf("Ingrese una palabra: ");
	scanf("%s", & palabra);
	
	printf("Ingrese otra palabra: ");
	scanf("%s", & palabra2);
	
	len=strlen(palabra);
	
	len2=strlen(palabra2);
	
	if(len == len2)
	{
		for(i=0;i<len;i++)
		{
			for(j=0;j<len2;j++)
			{
				if(palabra2[j] == palabra[i])
				{
					cont++;
					palabra[i]=' ';
					palabra2[j]=' ';
					break;
				}
			}
		}
	}
	
	else
	{
		anagrama=0;
	}
	
	if(cont == len)
	{
		printf("Es un anagrama.");
	}
	
	else
	{
		printf("No es un anagrama.");
	}
}
