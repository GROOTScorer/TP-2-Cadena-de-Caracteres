#include <stdio.h>
#include <string.h>

int cont=0, i=0, j=0, len=0;

char palabra[30];

main()
{
	printf("Ingrese una palabra: ");
	scanf("%s", & palabra);
	
	len = strlen(palabra);
	
	for(i=0;i<len;i++)
	{
		if(palabra[i] == 'e')
		{
			for(j=0;j<len;j++)
			{
				if(palabra[j] != 'e')
				{
					palabra[i]=palabra[j];
				}
			}
		}
	}
	
	printf("%s", palabra);
}
