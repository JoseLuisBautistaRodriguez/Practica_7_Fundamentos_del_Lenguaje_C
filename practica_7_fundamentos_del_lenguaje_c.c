//					Práctica 7 "Fundamentos del lenguaje C"

	/*
	-----------------------------------------------------------------------------------------------------------------------
		Actividad: 
	
	Desarrollar un programa que utilice números aleatorios
	simulando el juego del dado (numeros del 1 al 6) donde
	el usuario tiene que adivinar que número ha generado el
	dado a través de 3 oportunidades, el programa debe 
	indicar cuando gana o pierde el usuario.
	-----------------------------------------------------------------------------------------------------------------------
	*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dadomaquina();
int dadousuario(int a, int b);

int main(){					// * Función Principal del Programa -------------------------------------------------------
	
	int i, j, k, m, p, num;
	i = 1;
	k = 1;

	while(i == 1 ){
		
		dadomaquina();
		
		num = dadomaquina();
		printf("\n\n		Juego del dado\nSe a lanzado un dado y se obtuvo un n%cmero, adivina cual es.\n", 163);
		
		for( j = 0 ; j < 3; j++ ){
			
			p = dadousuario(k, num);
			
			if ( p == 0 ){
				
				printf("\n\n	Se terminaron tus vidas :(\n");
				j = j + 4;
				
			}else if( p == 1 ){
				
				printf("\n");
				j = j + 4;
			}else if( p == 78 ){
				
				printf("Tienes %d vidas.", 3 - k);
					
			}
			
			
			
			k++;
		}		
		
	printf("\n\n	Continuar: 1 = si\n	Terminar:  2 = no\n	 %cOtra partida? ", 168);
	scanf("%d", &m);
	
	system("cls");	
	k = 1;

		if( m < 1 && m > 2 ){
		
			printf("\n	Lo que haz ingresado no es v%clido." , 160);
		
		}
				
	i = i + (m-1);
		
	}
	
	printf("\n	El juego ha terminado.\n\n\n");
	
	system ("pause");
	return 0;
}
	
int dadomaquina(){			    // * Función generadora del número aleatorio, con un intervalo de trabajo de 1 a 6. -------
	
	int numero;
	
	srand(time(NULL));
	numero = rand() % 6 + 1 ;
	
	return (numero);
}	

int dadousuario(int a, int b){	// * Función encargada de interactuar con el usuario.--------------------------------------
	
	int n, c;
	c = 3 ;
	
	printf("\n\n	Ingresa un n%cmero entre 1 y 6: ", 163);
	scanf("%d", &n);
	
	if( n > 6 || n < 1){
		
		printf("\n El n%cmero %d no es un valor valido.\n S%clo puedes ingresar un valor entre 1 y 6.\n	Ingresa un valor entre 1 y 6: ", 163, n, 162);
		scanf("%d", &n);
		
		printf("\nHaz ingresado el n%cmero %d.", 163, n);
		
		if ( n < 1 || n > 6 ){
			
			printf("\nNo es un valor valido.\n");
			n = 78;			
			
		}
				
	}else{
		
		printf("\nHaz ingresado el n%cmero %d.", 163, n);
		
	}
	
		
	if ( b == n ){
			
		printf("\n\n	 %c%c%c%c%c%c%c%c%c%c	%cFelicidades!	%c%c%c%c%c%c%c%c%c%c\n	El dado tiene el valor %d.Haz ganado. ", 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, 173 , 178, 178, 178, 178, 178, 178, 178, 178, 178, 178, b);
		n = 1 ;
			
	}else if( n != 78){
		
		printf("\nEl n%cmero no es igual al del dado, te quedan %d vidas.", 163, c - a ); 
		n = 2 ;
		
	}
		 
	if ( a == c ){
		
		printf("\n\n Haz usado todas tus vidas.El dado gener%c el n%cmero %d. " , 162, 163, b);
		n = 0;
		
	}
	
	return (n);
}

	/*
	
	Datos Generales del archivo:
	------------------------------------------------------------------------------------------------------------------------
	Universidad Nacional Autónoma de México
	Facultad de Ingeniería
	Fundamentos de Programación
	Grupo: 1120
	
	Práctica: 7  ""
	 
	Autores: Jose Luis Bautista Rodríguez 
	Fecha de entrega: 12/10/2017
	Lugar:  Av. Universidad 3000, Copilco Universidad, 04510 Ciudad de México, CDMX, México
	------------------------------------------------------------------------------------------------------------------------
	
	*/

