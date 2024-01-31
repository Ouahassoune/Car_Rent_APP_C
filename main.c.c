#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fct2.h"
#include"../../conio21/conio2.h"
#include <windows.h>
#include <string.h>
//#include <conio2.h>
#include<graphics.h>

/*COORD coord={0,0}; // this is global variable
                                   //center of axis is set to the top left cornor of the screen

void gotoxy(int x,int y)
{
  	coord.X=x;
 	coord.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}*/





int main(){
//amour();
int choix;
    client * tete =NULL;
    listeVoiture *tetev=NULL;
char ch1=05;
char ch2=219;
char ch3=004;

system("color F0");

do{
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("              %c1.CLIENT",ch3);
gotoxy(40,4); printf("              %c2.AGENCE\n",ch3);
gotoxy(40,8);scanf("%d",&choix);
system("cls");
if(choix!=1&&choix!=2 ){gotoxy(40,6);color(2,8);printf("Error : Choisir soit CLIENT(1) ou AGENCE(2)!!");}
}while(choix!=1&&choix!=2);
printf("xxx");
switch(choix){
case 1: {
    do{
system("cls");
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³1- Saisir un nouveau client.     ³");
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6); printf("³2- Affichages des voitures.      ³");
gotoxy(40,7); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8); printf("³3- Modification.                 ³");
gotoxy(40,9); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,10); printf("³4- Je reserve.                   ³");
gotoxy(40,11); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,12); printf("³5- Affichage de tout les clients ³");
gotoxy(40,13); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,12); printf("³0-Fin Application                ³");
gotoxy(40,13); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(40,14); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    scanf("%d",&choix);
switch(choix){
case 1: {tete = saisieclt(tete);
break;}
case 5 :{affichertoutlesclients();
break;}
case 3 :{modification();
break;}
case 4 :{reservation ();
break;}
case 2 :{affichertoutlesvoiture();
break;}


 default: printf("\nFIN APPLICATION BYE\n");

}
getch();
}while(choix!=0);

break;

}
case 2: {

do{
system("cls");
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³1- Saisir un nouveau client.     ³");
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6); printf("³2- Afficher les clients par num. ³");
gotoxy(40,7); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8); printf("³3- Saisir une nouvelle voiture.  ³");
gotoxy(40,9); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,10); printf("³4- Affichages des voitures.      ³");
gotoxy(40,11); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,12); printf("³5- Affichage de tout les clients ³");
gotoxy(40,13); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,14); printf("³6- Modification.                 ³");
gotoxy(40,15); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,16); printf("³7- Supprimer Un Client.          ³");
gotoxy(40,17); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,18); printf("³8- Tri liste cllient par Num.    ³");
gotoxy(40,19); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,20); printf("³9- Je reserve.                   ³");
gotoxy(40,21); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,22); printf("³0-Fin Application                ³");
gotoxy(40,23); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(40,24); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    scanf("%d",&choix);
switch(choix){
case 1: {tete = saisieclt(tete);
break;}
case 2 :{afficherparcode();
break;}
case 5 :{affichertoutlesclients();
break;}

case 6 :{modification();
break;}
case 7 :{deleteme();
break;}
case 8 :{tete=trifparnum(tete);
afficher(tete);
break;}
case 9 :{reservation ();
break;}
case 3 :{tetev = ajouterVoiture(tetev);
break;}
case 4 :{affichertoutlesvoiture();
break;}

 default: printf("\nFIN APPLICATION BYE\n");

}
getch();
}while(choix!=0);
break;
}
}
    return 0;
}
