#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

float x,y;
char wybor;

int calkowita, calkowita2;

int main()
{

for(;;)
{
   


    printf("\n");
    printf ("MENU GLOWNE \n");
    printf ( "----------------- \n");
    printf ( "1. Zaokraglanie \n");
    printf ( "2. Zmiana na system szesnastkowy \n");
    printf ( "3. Zera \n");
    printf ("4. Koniec programu \n");


    printf ("\n ");
    wybor=getch();

    switch(wybor)
    {
    case '1':
    	
    printf ("Podaj wybrana przez siebie liczbe : ");
    cin >> x;
            printf ( "%. 2lf" , x);
    break;

    case '2':
    	 
    printf ("Podaj wybrana przez siebie liczbe calkowita : ");
    cin >> calkowita;
               printf("System szesnastkowy: %x ", calkowita);
    break;

    case '3':
              printf ("Podaj wybrana przez siebie liczbe calkowita : ");
    cin >> calkowita2;
               printf("%06d", calkowita2);
    break;

    case '4':
            exit(0);
    break;

    default: printf ("Nie ma takiej opcji w menu!");
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}
