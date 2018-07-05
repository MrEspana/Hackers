#include <stdio.h>
#include <stdlib.h>

struct hackers{
	
	char nombre[30];
	int ip;
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
	scanf("%i", &nuevo->ip);
	
	nuevo->siguiente = NULL;
	if(primero==NULL)
	{
		printf("prime")
	}
	
	struct hackers *nuevo;
	
	
	//kevin puto
	//erick es mas puto
}

int main()
{
	menu();
}

