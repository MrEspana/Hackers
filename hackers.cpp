#include <stdio.h>
#include <stdlib.h>

struct hackers{
	
	char nombre[30];
	char ip[14];
	struct hackers *siguiente;

};

struct agenda *primero, *ultimo;

void menu(){
	
	printf("MENU:/N1: Agregar/n2: Elimar/n3: Mostrar/n4: Salir/n");
	
}

void anadir_hacker(){
	struct hackers *nuevo;
	
	nuevo = (struct hackers *) malloc (sizeof(struct hackers));
	if(nuevo==NULL) printf("No hay espacio en la memoria");
	
	printf("Ingresar Nuevo Elemento:/n");
	printf("Ingresar Nombre:"); fflush(stdout);
	gets(nuevo->nombre);
	printf("Ingresar IP"); fflush(stdout);
	gets(nuevo->ip);
	
	nuevo->siguiente = NULL;
	if(primero==NULL)
	{
		printf("Primer Elemento");
		primero = nuevo;
		ultimo = nuevo;	
	}
	
	else
	{
		ultimo-> siguiente = nuevo;
		ultimo = nuevo;
	}
	
	//kevin puto
	//erick es mas puto
}

int main()
{
	int menu, salir;
	
	primero = (struct hacker *) NULL;
    ultimo = (struct hacker *) NULL;
    
    salir=1;
    do
    {
    	menu();
    	scanf("%i", &menu);
    	switch(menu)
    	{
    		case 1: añadir_hacker();
    			break;
    		
			
			case 4: salir++;	
		}
	}
	while(salir == 1);
}

