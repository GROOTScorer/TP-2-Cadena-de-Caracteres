#include <stdio.h>
#include <string.h>

int cont=0, i=0, len=0;

char palabra[30];

main()
{
	printf("Ingrese una palabra: ");
	scanf("%s", & palabra);
	
	len = strlen(palabra);
	
	for(i=0;i<len;i++)
	{
		if(palabra[i] == 'a' || palabra[i] == 'A')
		{
			cont++;
		}
		
		else if(palabra[i] == 'e'|| palabra[i] == 'E')
		{
			cont++;
		}
		
		else if(palabra[i] == 'i'|| palabra[i] == 'I')
		{
			cont++;
		}
		
		else if(palabra[i] == 'o'|| palabra[i] == 'O')
		{
			cont++;
		}
		
		else if(palabra[i] == 'u'|| palabra[i] == 'U')
		{
			cont++;
		}
	}
	
	printf("Hay %d vocales en esa palabra.", cont);
}
