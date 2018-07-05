#include <stdio.h>
#include <stdlib.h>

struct hacker{
	
	char nombre[30];
	char ip[14];
	struct hacker *siguiente;

};

struct hacker *primero, *ultimo;

void menu(){
	
	printf("MENU:\n1: Agregar\n2: Eliminar\n3: Mostrar\n4: Salir\n");
	
}

void nuevo_hacker(){
	struct hacker *nuevo;
	
	nuevo = (struct hacker *) malloc (sizeof(struct hacker));
	if(nuevo==NULL) 
		printf("No hay espacio en la memoria\n");

	printf("Ingresar nuevo elemento\n Ingresar Nombre:"); 
	fflush(stdin);
	gets(nuevo->nombre);

	printf("Ingresar IP:\n"); 
	fflush(stdin);
	gets(nuevo->ip);
	
	nuevo->siguiente = NULL;
	if(primero==NULL)
	{
		printf("Primer Elemento\n");
		primero = nuevo;
		ultimo = nuevo;	
	}
	else
	{
		ultimo -> siguiente = nuevo;
		ultimo = nuevo;
	}
	
	//kevin puto
	//erick es mas puto
}

int main()
{
	int opcion, salir = 1;
	
    do
    {
    	menu();
    	scanf("%i", &opcion);
    	switch(opcion)
    	{
    		case 1: nuevo_hacker();
    			break;
    		
			
			case 4: salir++;
				break;	
		}
	}
	while(salir == 1);
	
	return (0);
}

