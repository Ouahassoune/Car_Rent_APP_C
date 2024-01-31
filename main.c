#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fct2.h"

#include <windows.h>
#include <string.h>
#include <conio2.h>
//#include<graphics.h>

/*COORD coord={0,0}; // this is global variable
                                   //center of axis is set to the top left cornor of the screen

void gotoxy(int x,int y)
{
  	coord.X=x;
 	coord.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}*/
/*void mode(){
        int choix;
char ch1=05;
char ch2=219;
char ch3=004;
char ch4=017;
char ch5=11;
int m;

do{
gotoxy(40,2);  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4);  printf("³ %c             Mode Nuit             ³",ch5);
gotoxy(40,5);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6);  printf("³ %c             Mode Jour             ³",ch4);
gotoxy(40,7); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(40,8); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(57,9);scanf("%d",&choix);
system("cls");
if(choix!=1&&choix!=2 ){
        gotoxy(40,6);textcolor(4);gotoxy(30,16);
printf("Error :votre choix est incorrect, Choisissez soit (1), (2), (3) ou (4)!!");}
textcolor(15);


switch(choix){
case 1: {system("cls");system("color 0F");
m=1;
break;}
case 2 :{system("cls");system("color 30");
m=2;
break;}


}
}while(choix!=1&&choix!=2);

}*/

int main(){
    int choix,m;
    client * tete =NULL;
    listeVoiture *tetev=NULL;
    listeVoiture *tetex=NULL;
char ch1=05;
char ch2=219;
char ch3=004;
char ch4=017;
char ch5=11;
char ch6=03;

gotoxy(40,9); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(14);
gotoxy(40,10); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,11); printf("³     BIENVENUE A NOTRE AGENCE    ³",ch3);
gotoxy(40,12); printf("³              DE                 ³",ch3);
gotoxy(40,13); printf("³      LOCATION DE VOITURE        ³",ch3);
gotoxy(40,14); printf("³               %c                 ³",ch6);
gotoxy(40,15); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(40,16); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);

gotoxy(57,16);getch();
system("cls");
//mode();
//printf("%d",m);
langue();
    return 0;
}
