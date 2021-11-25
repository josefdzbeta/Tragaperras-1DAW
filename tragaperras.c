#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
unsigned sleep(unsigned seconds);
int num1, num2, num3;
int i;
int moneda;
int partida;
int siNo;

void gotoxy(int x, int y){ 
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
}
main()
{
	
	printf ("Introducir monedas: ");
	scanf ("%d", &moneda);
	
	srand(time(NULL));
	getchar ();
	partida=0;
	while (moneda>0)
	{
		
		printf ("\t\t\t\t\t  Presiona ENTER para jugar\n\n\n");
		getchar();
		system("cls");
		
		
			
		
			printf(ANSI_COLOR_RED"\n\n\t\t\t\t		                             @@    \n");
			printf("\t\t\t\t                                          @@***/@@ \n");
			printf("\t\t\t\t                                          @@////@@ \n");
			printf(ANSI_COLOR_YELLOW "\t\t\t\t               TRAGAPERRAS               "ANSI_COLOR_RESET ANSI_COLOR_RED"   @.,@   \n");
			printf("\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   @  @   \n");
			printf("\t\t\t\t@/((@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@((/@   @  @   \n");
			printf("\t\t\t\t@/(@@         @@         @@         @@#/@   @  @   \n");
			printf("\t\t\t\t@/(@@         @@         @@         @@#/@   @  @   \n");
			printf("\t\t\t\t@/(@@         @@         @@         @@(/@   @..@   \n");
			printf("\t\t\t\t@/(@@         @@         @@         @@(/@    @@    \n");
			printf("\t\t\t\t@/(@@         @@         @@         @@(/@,,,,,,@  \n");
			printf("\t\t\t\t@/(@@         @@         @@         @@(/@,,,,,*@  \n");
			printf(ANSI_COLOR_BLUE"\t\t\t\t@/((&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&((/@@@@@@@@  \n");
			printf("\t\t\t\t@@@@@@@&(&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         \n");
			printf("\t\t\t\t  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@///@@@@           \n"ANSI_COLOR_RESET);
			
			for (i=0; i<=20; i++)
			{
				num1= rand () %3 + 1;
				num2= rand () %3 + 1;
				num3= rand () %3 + 1;
				gotoxy(41,11);
				printf(ANSI_COLOR_YELLOW"%d"ANSI_COLOR_RESET, num1);
				gotoxy(52,11);
				printf(ANSI_COLOR_BLUE"%d"ANSI_COLOR_RESET, num2);
				gotoxy(63,11);
				printf(ANSI_COLOR_YELLOW"%d"ANSI_COLOR_RESET, num3);
				usleep(100000);
				
			}
		
			
		gotoxy(54,17);
		if (num1==num2 && num2==num3)
		{
			printf (ANSI_COLOR_YELLOW"\n\n\t\t\t\t\t\tENHORABUENA!!"ANSI_COLOR_RESET);
			printf (ANSI_COLOR_MAGENTA"\n\t\t\t\t\t   HAS GANADO "ANSI_COLOR_YELLOW"5"ANSI_COLOR_RESET ANSI_COLOR_MAGENTA" MONEDAS!\n"ANSI_COLOR_RESET);
			moneda=moneda+5;
	
			
		
		}
		else 
		{
			printf (ANSI_COLOR_MAGENTA"\n\n\t\t\t\t\t    Sigue Intentandolo\n"ANSI_COLOR_RESET);
		}
		
		partida++;
		moneda--;
		printf (ANSI_COLOR_YELLOW"\nPartidas jugadas:"ANSI_COLOR_RESET"%d\n", partida);
		printf (ANSI_COLOR_BLUE"Monedas que te quedan:"ANSI_COLOR_RESET"%d\n", moneda);
		
		
		if (moneda==0)
		{
			do{
				printf(ANSI_COLOR_YELLOW"Quieres introducir monedas?" ANSI_COLOR_RESET ANSI_COLOR_CYAN" (Si = 1, No = 0)? "ANSI_COLOR_RESET);
				scanf("%d", &siNo);
			}while(siNo!=0 && siNo!=1);
			
			
			if(siNo==1)
			{
				printf (ANSI_COLOR_BLUE"Introducir monedas: "ANSI_COLOR_RESET);
				scanf ("%d", &moneda);	
			}
			else
			{
				printf ("Fin Partida");
			}
			
		}
	}
	
	
}
