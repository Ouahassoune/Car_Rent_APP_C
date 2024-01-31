#ifndef TTT_H_INCLUDED
#define TTT_H_INCLUDED
#define LONG_MOT 100
#include <conio2.h>
char ch1=05;
char ch2=219;
char ch3=004;
int co;



typedef struct cliente{
	int age;
	int num;
	char password[20];
	char ville[10];
	int cin;
	int date_permi;
	char nom[10];
	unsigned long long int telephone;
	float ctr;
	char prenom[10];
	int nbrreservationc;

}cliente;

typedef struct client{
	cliente clt;
	struct client *clientsuivant;

}client;
// structure voiture
typedef struct listeVoituree{
    char matricule[30];
    char marque[15];
	int puissance;
	char moteur[7];
	char couleur[7];
	char clim[5];
	int prixJour;
	int nbplace;
	int nbrvoiture;
	int nbrreservation;
    }listeVoituree;

typedef struct listeVoiture{
	listeVoituree voit;
	struct listeVoiture *suiv;

}listeVoiture;

listeVoiture * maxnombrereservation(listeVoiture *t){

    char  response;

    t=malloc(sizeof(listeVoiture));
    listeVoiture *p=t;
    listeVoiture *maxliste=t;
    listeVoiture *p1=maxliste;

    FILE *Fc=fopen("fv.txt","r+");
    if(Fc==NULL){
        printf("ce fichier n'existe pas");
        exit(1);}
p1->voit.nbrreservation =0;
while(!feof(Fc)){
fscanf(Fc,"%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n%d\n",p->voit.matricule,p->voit.marque,&p->voit.puissance,p->voit.moteur,p->voit.couleur,p->voit.clim,&p->voit.prixJour,&p->voit.nbplace,&p->voit.nbrvoiture,&p->voit.nbrreservation);
       if(p->voit.nbrreservation>p1->voit.nbrreservation){
        p1=p;
       }
       p->suiv = malloc(sizeof(listeVoiture));
        p = p->suiv;
        }

    int i=0;
gotoxy(40,2+i); printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(14);
gotoxy(45,3+i);  printf("VOITURE Avec Max de Nombre Reservation Est :");
textcolor(15);
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³le matricule du voiture:     ³%s",p1->voit.matricule);
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³la marque du voiture:        ³%s",p->voit.marque);
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³la puissance du voiture:     ³%d",p1->voit.puissance);
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³le moteur du voiture:        ³%s",p1->voit.moteur);
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³la couleur du voiture:       ³%s",p1->voit.couleur);
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³la clim du voiture:          ³%s",p1->voit.clim);
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³Le prix par  jour:           ³%d",p1->voit.prixJour);
gotoxy(40,18+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,19+i); printf("³le nombre de place:          ³%d",p1->voit.nbplace);
gotoxy(40,20+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,21+i); printf("³voiture disponible a lagence:³%d",p1->voit.nbrvoiture);
gotoxy(40,22+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");


gotoxy(40,23+i); printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);




fclose(Fc);
return t;
}
client* clientsfideles(client *t){
    char nom[10],prenom[10],ville[10], password[20];
    int cin,num,nbrreservationc,r=0;
    unsigned long long int telephone;
    char  response;

    t=malloc(sizeof(client));
    client *p=t;
   // client *maxliste=t;
   // client *p1=maxliste;

    FILE *Fc=fopen("client.txt","r+");
    if(Fc==NULL){
        printf("ce fichier n'existe pas");
        exit(1);}
        int i=0;
//p1->voit.nbrreservation =0;
while(!feof(Fc)){
fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&p->clt.num,p->clt.nom,p->clt.prenom,&p->clt.cin,p->clt.ville,&p->clt.password,&p->clt.telephone,&p->clt.nbrreservationc);
       if(p->clt.nbrreservationc>5){

gotoxy(40,2+i); printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(14);
gotoxy(53,3+i); printf("CLIENT FIDELE N: %d",r);
textcolor(15);
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³Num:           ³%d               ",p->clt.num);
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³Nom:           ³%s               ",p->clt.nom);
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³ Prenom        ³%s               ",p->clt.prenom);
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³CIN:           ³%d               ",p->clt.cin);
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³VILLE:         ³%s               ",p->clt.ville);
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³password:      ³%s                ",p->clt.password);
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³TELEPHONE:     ³%llu               ",p->clt.telephone);
gotoxy(40,18+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,19+i); printf("³Nbr RESER:     ³%d               ",p->clt.nbrreservationc);
gotoxy(40,20+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

gotoxy(40,23+i); printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
i+=24;
       } p->clientsuivant = malloc(sizeof(client));
        p = p->clientsuivant;

        r++;
        }


fclose(Fc);
return t;
}
listeVoiture* ajouterVoiture(listeVoiture *t){

    char  response;
    t=malloc(sizeof(listeVoiture));
    listeVoiture *p=t;
    FILE *Fc=fopen("fv.txt","a+");
    if(Fc==NULL){
        printf("ce fichier n'existe pas");
        exit(1);
    }
    int i=0,k=1;

    do{
gotoxy(40,2+i); printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(14);
gotoxy(52,3+i);  printf("SAISIR INFOS DU VOITURE ");
textcolor(15);
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³le matricule du voiture:     ³                         ³");
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³la marque du voiture:        ³                          ");
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³la puissance du voiture:     ³             ");
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³le moteur du voiture:        ³            ");
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³la couleur du voiture:       ³            ");
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³la clim du voiture:          ³                      ");
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³Le prix par  jour:           ³                      ");
gotoxy(40,18+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,19+i); printf("³le nombre de place:          ³                      ");
gotoxy(40,20+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,21+i); printf("³voiture disponible a lagence:³                      ");
gotoxy(40,22+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(71,5+i);scanf("%s",p->voit.matricule);
gotoxy(71,7+i);scanf("%s",p->voit.marque);
gotoxy(71,9+i);scanf("%d",&p->voit.puissance);
gotoxy(71,11+i);scanf("%s",p->voit.moteur);
gotoxy(71,13+i);scanf("%s",p->voit.couleur);
gotoxy(71,15+i);scanf("%s",p->voit.clim);
gotoxy(71,17+i);scanf("%d",&p->voit.prixJour);
gotoxy(71,19+i);scanf("%d",&p->voit.nbplace);
gotoxy(71,21+i);scanf("%d",&p->voit.nbrvoiture);
p->voit.nbrreservation=0;

fprintf(Fc,"%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n%d\n",p->voit.matricule,p->voit.marque,p->voit.puissance,p->voit.moteur,p->voit.couleur,p->voit.clim,p->voit.prixJour,p->voit.nbplace,p->voit.nbrvoiture,p->voit.nbrreservation);
   fclose(Fc);

gotoxy(40,23+i); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);

textcolor(14);
gotoxy(45,24+i);printf ("Saisir (y/Y) Pour UnE Autre VOITURE");
textcolor(15);
    /*do{
        printf("\ndonner le matricule du voiture:\n");
        scanf("%s",p->voit.matricule);
        printf("donner la marque du voiture:\n");
        scanf("%s",p->voit.marque);
        printf("donner la puissance du voiture:\n");
         scanf("%d",&p->voit.puissance);
        printf("donner le moteur du voiture:\n");
        scanf("%s",p->voit.moteur);
        printf("donner la couleur du voiture:\n");
        scanf("%s",p->voit.couleur);
        printf("donner la clim du voiture:\n");
        scanf("%s",p->voit.clim);
        printf("donner le prix par  jour du voiture:\n");
        scanf("%d",&p->voit.prixJour);
        printf("donner le nombre de place du voiture:\n");
        scanf("%d",&p->voit.nbplace);
        printf("donner le nombre de voiture disponible a lagence:\n");
        scanf("%d",&p->voit.nbrvoiture);
        fprintf(Fc,"%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n",p->voit.matricule,p->voit.marque,p->voit.puissance,p->voit.moteur,p->voit.couleur,p->voit.clim,p->voit.prixJour,p->voit.nbplace,p->voit.nbrvoiture);
        printf ("saisir (y/Y) pour une autre Voiture");*/
        response = getche();
        if(response == 'y' || response =='Y'){
        p->suiv = malloc(sizeof(listeVoiture));
        p = p->suiv;
    }
       else{
      p->suiv = NULL;}

  }while(response == 'y' || response == 'Y');

  return t;
   //fclose(Fc);


}
void afficher(struct client *t){
 if(t == NULL) printf("\n---> La liste est vide\n");
 else{
   printf("\n\n ---- Liste des clients ----\n");
   while(t != NULL){
printf(" le Num du Client; %d\n",t->clt.num);
printf("le Nom du Client; %s\n",t->clt.nom);
printf(" le prenom du Client; %s\n",t->clt.prenom);
printf(" le cin du Client; %d\n",t->clt.cin);
printf(" le ville du Client; %s\n",t->clt.ville);
printf(" le password du Client; %s\n",t->clt.password);
printf(" le telephone du Client; %llu\n",t->clt.telephone);

     t = t->clientsuivant;
   }
 }
}
void affichertoutlesvoiture(){
char matricule[30];
char marque[10];
int puissance;
char moteur[10];
char couleur[10];
char clim[10];
int prixJour;
int nbplace;
int nbrvoiture;
int nbrreservation;
int i=0,k=1;
 FILE *Fc=fopen("fv.txt", "r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
    while(!feof(Fc)){
    gotoxy(40,2+i); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);

    fscanf(Fc,"%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n%d\n",matricule,marque,&puissance,moteur,couleur,clim,&prixJour,&nbplace,&nbrvoiture,&nbrreservation);

textcolor(14);
gotoxy(53,3+i);  printf("VOITURE %d",k);
textcolor(15);
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³le Matricule:  ³%s              ³",matricule);
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³la Marque:     ³%s        ",marque);
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³ la Puissance  ³%d             ",puissance);
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³le Moteur:     ³%s            ",moteur);
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³la Couleur:    ³%s            ",couleur);
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³la Clim:       ³%s                ",clim);
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³PriX Par Jour: ³%d              ",prixJour);
gotoxy(40,18+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,19+i); printf("³Nb de place:   ³%d                ",nbplace);
gotoxy(40,20+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,21+i); printf("³Voiture disp   ³%d             ",nbrvoiture);
gotoxy(40,22+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,23+i); printf("³Nbr Reser      ³%d       ",nbrreservation);
gotoxy(40,24+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");



i+=25;
k++;
   /* printf("le Matricule: %s\n",matricule);
    printf("la Marque: %s\n",marque);
    printf("la Puissance %d\n",puissance);
    printf(" le Moteur: %s\n",moteur);
    printf("la Couleur: %s\n",couleur);
    printf("la Clim: %s\n",clim);
    printf("Prix Par Jour :%d\n",prixJour);
    printf("le Nb de Place:%d\n",nbplace);
    printf("le Nb de Voiture disponible a ce moment:%d\n",nbrvoiture);

    printf("\n*************************************\n");*/   }
    co=i;
    fclose(Fc);
}
void cherchervoitureparmat(){
    char matricule[30];
    char mat[30],marqu[10],mot[10],coul[10],clim[10];
    int puis,prix,place,nbrvoiture,nbrreservation;
    int trouve=0;
    int chiffre;

int i=0;
    FILE *fc=fopen("fv.txt","r+");
    if(fc==NULL){printf("ce fich nexiste pas");exit(1);}

     FILE *Fr=fopen("reserver.txt","at+");
     if(Fr== NULL){printf("file exicte pas");
    exit(1);}

   FILE *Ft=fopen("tempnob.txt","at+");
   if(Ft== NULL){printf("file exicte pas");
    exit(1);}
    /*FILE *Fa=fopen("chiffre.txt","w+");
    if(Fa== NULL){printf("file exicte pas");
    exit(1);}*/

   if(fc!=NULL){
do{
    trouve=0;
    gotoxy(40,2+co); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    gotoxy(20,3+co);  printf(" ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    textcolor(14);
    gotoxy(20,4+co);printf (" ³Donner le matricule de voiture que vous voulez(disponible a lagence) :³                 ³");
    textcolor(15);
    gotoxy(20,5+co); printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(100,4+co);scanf("%s",matricule);
   // system("cls");
    rewind(fc);
    while(!feof(fc)){

            fscanf(fc,"%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n%d\n",mat,marqu,&puis,mot,coul,clim,&prix,&place,&nbrvoiture,&nbrreservation);

        if(strcmp(matricule,mat)==0){
                trouve=1;
        if(nbrvoiture!=0){
                system("cls");
                textcolor(14);
gotoxy(40,2+i); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(53,3+i);  printf("VOITURE %s",matricule);
textcolor(15);
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³le Matricule:  ³%s             ",matricule);
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³la Marque:     ³%s        ",marqu);
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³ la Puissance  ³%d             ",puis);
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³le Moteur:     ³%s            ",mot);
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³la Couleur:    ³%s            ",coul);
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³la Clim:       ³%s                ",clim);
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³PriX Par Jour: ³%d              ",prix);
gotoxy(40,18+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,19+i); printf("³Nb de place:   ³%d                ",place);
gotoxy(40,20+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,21+i); printf("³Voiture disp   ³%d             ",nbrvoiture);
gotoxy(40,22+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(2);
gotoxy(40,23+i);printf("la voiture est disponible pour etre loue\n") ;
textcolor(15);
fprintf(Fr,"\n%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n",mat,marqu,puis,mot,coul,clim,prix,place,nbrvoiture);
fclose(Fr);
modificationnb(matricule);

             break;

              }
              else{
                    textcolor(4);
               gotoxy(30,6+co); printf("Aucune Voiture nest disponible a ce moment Merci de choisir une autre. \n") ;
                  textcolor(15);
              break;}
            }
    }
    if(trouve==0){
            textcolor(4);
        gotoxy(30,6+co);printf("Aucune Voiture nexiste avec ce code Matricule \n");
    textcolor(15);
        getch();
    }
    }while(nbrvoiture==0||trouve==0);



   }fclose(fc);
   fclose(Ft);
   remove("fv.txt");
rename("tempnob.txt","fv.txt");
   //fclose(Fr);

//co=i;
}
/*void amour(){
int i, j, n=15;
char name[20+1]={ 'L', 'C', 'V', '\0' };
int len;
len = strlen(name);
for(i=n/2; i<=n; i+=2)
{
for(j=1; j<n-i; j+=2)
{
printf(" ");
}
for(j=1; j<=i; j++)
{
printf("*");
}
for(j=1; j<=n-i; j++)
{
printf(" ");
}
for(j=1; j<=i; j++)
{
printf("*");
}
printf("\n");
}
for(i=n; i>=1; i--)
{
for(j=i; j<n; j++)
{
printf(" ");
}
if(i == n)
{
for(j=1; j<=(n * 2-len)/2; j++)
{
printf("*");
}
printf("%s", name);
for(j=1; j<(n*2-len)/2; j++)
{
printf("*");
}
}
else
{
for(j=1; j<=(i*2)-1; j++)
{
printf("*");
}
}
printf("\n");
}


getch();
system("cls");

}*/

 typedef struct date{
   int jours;
   int mois;
   int annee;
}date;
void duree(){
    int durer;
    date t;
    date tf;

int day = 0, month = 0, year = 0;
     FILE *Fr=fopen("reserver.txt","at+");
    if(Fr== NULL){printf("file exicte pas");exit(1);}
gotoxy(20,24);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,25);  printf("³Date Resrvation Jours/Mois/Annes     ³                                 ³ ");
gotoxy(20,26);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(20,27);  printf("³Date Fin Resrvation Jours/Mois/Annes ³                                 ³ ");
gotoxy(20,28);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
textcolor(14);
/*gotoxy(61,25);scanf("%d",&t.jours);
gotoxy(64,25);scanf("%d%",&t.mois);
gotoxy(70,25);scanf("%d%",&t.annee);
gotoxy(62,27);scanf("%d",&tf.jours);
gotoxy(65,27);scanf("%d%",&tf.mois);
gotoxy(70,27);scanf("%d%",&tf.annee);*/

gotoxy(64,25);scanf("%d/%d/%d",&t.jours,&t.mois,&t.annee);
gotoxy(64,27);scanf("%d/%d/%d",&tf.jours,&tf.mois,&tf.annee);

textcolor(15);
fprintf(Fr,"%d\n%d\n%d\n",t.jours,t.mois,t.annee);
fprintf(Fr,"%d\n%d\n%d\n",tf.jours,tf.mois,tf.annee);
//fclose(Fr);
//calcule Duree reservation :
// year calculation
    if (tf.annee >= t.annee) {
        if (tf.annee == t.annee) {
            if (tf.mois >= t.mois) {
                if (tf.mois == t.mois && tf.jours < t.jours) {
                    printf("something wrong!");
                    return 0;
                }
            } else {
                printf("something wrong!");
                return 0;
            }
        }

        // code
        if (tf.jours < t.jours) {
            tf.mois--;

            if (tf.mois == 0) {
                tf.mois = 12;
                tf.annee--;
            }

            // for the months of 31 days
            if (tf.mois == 1 || tf.mois == 3 || tf.mois == 5 || tf.mois == 7 || tf.mois == 8 || tf.mois == 10 || tf.mois == 12) {
                tf.jours += 31;
            }

            // for the months of 30 days
            else if (tf.mois == 4 || tf.mois == 6 || tf.mois == 9 || tf.mois == 11) {
                tf.jours += 30;
            }

            // for feb
            else if (tf.mois == 2) {
                // checking the leap year
                tf.jours += (tf.annee % 400 == 0 || (tf.annee % 4 == 0 && tf.annee % 100 != 0)) ? 29 : 28;
            }
        }

        // for months
        if (tf.mois < t.mois) {
            tf.annee--;
            tf.mois += 12;
        }

        // calculations
        day = tf.jours - t.jours;
        month = tf.mois - t.mois;
        year = tf.annee - t.annee;

textcolor(14);
gotoxy(20,29); printf("³La duree du location pour ce client est : %d Jour, %d mois et %d annees!  ³", day, month, year);
textcolor(15);
gotoxy(20,30); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
        fprintf(Fr,"La duree est de : %d Jour, %d mois et %d annees!", day, month, year);



    } else {
        printf("something wrong!");
        return 0;
    }
fclose(Fr);
    return 0;


}

client* saisiecltc(client * tete){
int nombre = 0;
    const int MIN = 1, MAX = 100;
      char response;
    tete = malloc(sizeof(struct client));
    client * ptr=tete;
FILE *Fc=fopen("client.txt","a+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
FILE *fr=fopen("reserver.txt","at+");
    if(fr== NULL){printf("file exicte pas");
    exit(1);}
int i=0,k=1;
gotoxy(40,2+i); printf("     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(14);
gotoxy(53,3+i);  printf("SAISIR VOS INFOS %");
textcolor(15);

    srand(time(NULL)); // Initialisation de la donnée seed

    nombre = (rand() % (MAX + 1 - MIN)) + MIN; // MIN <= nombre <= MAX
ptr->clt.num=nombre;
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³Saisir Votre Nom:      ³                         ³");
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³Saisir votre Prenom:   ³                         ³");
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³CIN                    ³                         ³");
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³VILLE:                 ³                         ³");
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³choisir un mot de passe³                         ³");
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³TELEPHONE:             ³                         ³");
gotoxy(40,16+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(65,5+i);scanf("%s",&ptr->clt.nom);
gotoxy(65,7+i);scanf("%s",&ptr->clt.prenom);
gotoxy(65,9+i);scanf("%d",&ptr->clt.cin);
gotoxy(65,11+i);scanf("%s",&ptr->clt.ville);
gotoxy(65,13+i);scanf("%s",&ptr->clt.password);
gotoxy(65,15+i);scanf("%llu",&ptr->clt.telephone);
textcolor(2);
gotoxy(50,18+i);  printf("CREATION DU COMPTE AVEC SUCCES");
textcolor(15);

i+=23;
k++;
ptr->clt.nbrreservationc=0;

fprintf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",ptr->clt.num,ptr->clt.nom,ptr->clt.prenom,ptr->clt.cin,ptr->clt.ville,ptr->clt.password,ptr->clt.telephone,ptr->clt.nbrreservationc);
fclose(Fc);
fclose(fr);


fprintf(fr,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n",ptr->clt.num,ptr->clt.nom,ptr->clt.prenom,ptr->clt.cin,ptr->clt.ville,ptr->clt.password,ptr->clt.telephone);
ptr->clientsuivant = NULL;


  return tete;
//fclose(Fc);
//fclose(fr);
}


client* saisiecltx(client * tete){
      char response;
    tete = malloc(sizeof(struct client));
    client * ptr=tete;
FILE *Fc=fopen("client.txt","a+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
FILE *fr=fopen("reserver.txt","at+");
    if(fr== NULL){printf("file exicte pas");
    exit(1);}
FILE *fk=fopen("tempc.txt","at+");
    if(fk== NULL){printf("file exicte pas");
    exit(1);}
int i=0,k=1;
gotoxy(40,2+i); printf("     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(14);
gotoxy(53,3+i);  printf("SAISIR VOS INFOS %");
textcolor(15);
ptr->clt.num=rand()%101;
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³Saisir Votre Nom:     ³                         ³");
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³Saisir votre Prenom:  ³                         ³");
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³ CIN                  ³                         ³");
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³VILLE:                ³                         ³");
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³password:             ³                         ³");
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³TELEPHONE:            ³                         ³");
gotoxy(40,16+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(65,5+i);scanf("%s",&ptr->clt.nom);
gotoxy(65,7+i);scanf("%s",&ptr->clt.prenom);
gotoxy(65,9+i);scanf("%d",&ptr->clt.cin);
gotoxy(65,11+i);scanf("%s",&ptr->clt.ville);
gotoxy(65,13+i);scanf("%s",&ptr->clt.password);
gotoxy(65,15+i);scanf("%llu",&ptr->clt.telephone);
textcolor(2);
gotoxy(50,18+i);  printf("CREATION DU COMPTE AVEC SUCCES");
textcolor(15);

i+=23;
k++;
ptr->clt.nbrreservationc=0;


fprintf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",ptr->clt.num,ptr->clt.nom,ptr->clt.prenom,ptr->clt.cin,ptr->clt.ville,ptr->clt.password,ptr->clt.telephone,ptr->clt.nbrreservationc);
fclose(Fc);
fprintf(fk,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",ptr->clt.num,ptr->clt.nom,ptr->clt.prenom,ptr->clt.cin,ptr->clt.ville,ptr->clt.password,ptr->clt.telephone,ptr->clt.nbrreservationc+1);
fclose(fk);
fprintf(fr,"\n%d\n%s\n%s\n%d\n%s\n%s\n%llu\n",ptr->clt.num,ptr->clt.nom,ptr->clt.prenom,ptr->clt.cin,ptr->clt.ville,ptr->clt.password,ptr->clt.telephone);
fclose(fr);
//modificationclient(ptr->clt.cin);
ptr->clientsuivant = NULL;


  return tete;



remove("client.txt");
      rename("tempc.txt","client.txt");
}
client* saisieclta(client * tete){
      char response;
    tete = malloc(sizeof(struct client));
    client * ptr=tete;
FILE *Fc=fopen("client.txt","a+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}

int i=0,k=1;

    do{
gotoxy(40,2+i); printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(14);
gotoxy(52,3+i);  printf("SAISIR INFOS DU CLIENT ");
textcolor(15);
ptr->clt.num=rand()%509;
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³Saisir Votre Nom:     ³                         ");
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³Saisir votre Prenom:  ³                          ");
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³ CIN                  ³             ");
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³VILLE:                ³            ");
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³password:             ³            ");
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³TELEPHONE:            ³                      ");
gotoxy(40,16+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(65,5+i);scanf("%s",&ptr->clt.nom);
gotoxy(65,7+i);scanf("%s",&ptr->clt.prenom);
gotoxy(65,9+i);scanf("%d",&ptr->clt.cin);
gotoxy(65,11+i);scanf("%s",&ptr->clt.ville);
gotoxy(65,13+i);scanf("%s",&ptr->clt.password);
gotoxy(65,15+i);scanf("%llu",&ptr->clt.telephone);
ptr->clt.nbrreservationc=0;

fprintf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",ptr->clt.num,ptr->clt.nom,ptr->clt.prenom,ptr->clt.cin,ptr->clt.ville,ptr->clt.password,ptr->clt.telephone,ptr->clt.nbrreservationc);
fclose(Fc);


gotoxy(40,17+i); printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);

textcolor(14);
gotoxy(48,18+i);printf ("Saisir (y/Y) Pour Un Autre Client");
textcolor(15);
response = getch();

    if(response == 'y' || response =='Y'){
        ptr->clientsuivant = malloc(sizeof(struct client));
        ptr = ptr->clientsuivant;
    }else{
      ptr->clientsuivant = NULL;
    }

  }while(response == 'y' || response == 'Y');
system("cls");
  return tete;
//fclose(Fc);
}


void retour(int y){
char ch1[4]="oui";
char ch2[4];
textcolor(4);
gotoxy(40,y); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,y+1); printf("³saisie 'oui'pour retour en arriere:      ³");
gotoxy(40,y+2); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
scanf("%s",ch2);
textcolor(15);{
 if(strcmp(ch2,ch1)==0 ){
    system("cls");
    menu();
 }
}
}

void afficherparcodex(int cinx,char passw[20],int *trouve){
     int choix;
    char nom[10],prenom[10],ville[10], password[20];
    int cin,num,nbrreservationc;
    unsigned long long int telephone;
    int i=0;



 FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}

system("cls");


    while(!feof(Fc)){
 gotoxy(40,2+i);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&num,nom,prenom,&cin,ville,password,&telephone,&nbrreservationc);
    if( cin==cinx && strcmp(passw,password)==0 ){
           *trouve=1;
            do{
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
//textcolor(15);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³1- Affichages des voitures.      ³");
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6); printf("³2- Je reserve une voiture.       ³");
gotoxy(40,7); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8); printf("³3- Afficher Mes Information      ³");
gotoxy(40,9); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
textcolor(4);
gotoxy(40,10);printf("³4-Menu                           ³");
gotoxy(40,11);printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,12);printf("³0-Fin Application                ³");
gotoxy(40,13);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(40,14); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
   gotoxy(57,18); scanf("%d",&choix);
switch(choix){
    system("cls");
case 3 :{afficherparcoden(cinx);
getch();
system("cls");
//system("cls");
break;}
case 2 :{
reserverclientauto(cinx);
reservationc();
remove("client.txt");
rename("tempc.txt","client.txt");
getch();
system("cls");
break;}
case 1 :{
affichertoutlesvoiture();
getch();
system("cls");
break;}
case 4 :{
system("cls");menu();
break;}


 default: printf("\nFIN APPLICATION BYE\n");

}
getch();
}while(choix!=0);

break;

}

}
if(*trouve==0){

textcolor(4);
gotoxy(40,8+i);printf(" Identifiant Errone ");
textcolor(15);
getch();
    }

    fclose(Fc);}

void afficherparcoden(int cinx){
    int numx;
    int trouve=0;
    char nom[10],prenom[10],ville[10],password[20];
    int cin,num,nbrreservationc;
    unsigned long long int telephone;
    int i=0;

 FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}

    while(!feof(Fc)){
 gotoxy(40,2+i);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&num,nom,prenom,&cin,ville,password,&telephone,&nbrreservationc);
    if(cinx==cin){
            trouve=1;
textcolor(14);
gotoxy(53,3+i); printf("MES INFORMATIONS");
textcolor(15);
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³Num:           ³%d               ",num);
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³Nom:           ³%s               ",nom);
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³Prenom         ³%s                 ",prenom);
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³CIN:           ³%d               ",cin);
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³VILLE:         ³%s               ",ville);
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³password:      ³%s                ",password);
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³TELEPHONE:     ³%llu               ",telephone);
gotoxy(40,18+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
//retour(19+i);
break;
}

    }if(trouve==0){
textcolor(4);
gotoxy(40,4+i);printf(" Aucun client nexiste avec le N ");
textcolor(15);
    }
    fclose(Fc);
   }
   void reserverclientauto(int cinx){
    int numx;
    int trouve=0;
    char nom[10],prenom[10],ville[10],password[20];
    int cin,num,nbrreservationc;
    unsigned long long int telephone;
    int i=0;

 FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
 FILE *Fr=fopen("reserver.txt","a+");
    if(Fr== NULL){printf("file exicte pas");
    exit(1);}
    FILE *fk=fopen("tempc.txt","at+");
    if(fk== NULL){printf("file exicte pas");
    exit(1);}

    while(!feof(Fc)){
fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&num,nom,prenom,&cin,ville,password,&telephone,&nbrreservationc);
    if(cinx==cin){
fprintf(Fr,"\n%d\n%s\n%s\n%d\n%s\n%s\n%llu\n",num,nom,prenom,cin,ville,password,telephone);
fclose(Fr);
//break;
fprintf(fk,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",num,nom,prenom,cin,ville,password,telephone,nbrreservationc+1);
}
 else {fprintf(fk,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",num,nom,prenom,cin,ville,password,telephone,nbrreservationc);}
}
    fclose(Fc);
    fclose(fk);

    remove("client.txt");
      rename("tempc.txt","client.txt");
   }
void afficherparcode(){
    int numx;
    int trouve=0;
    char nom[10],prenom[10],ville[10],password[20];
    int cin,num,nbrreservationc,cinx;
    unsigned long long int telephone;
    int i=0;

 FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
    gotoxy(40,2+i); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    gotoxy(40,3+i);  printf(" ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    textcolor(14);
    gotoxy(40,4+i);printf (" ³saisir le CIN de client a afficher:³                   ");
    textcolor(15);
    gotoxy(40,5+i); printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(80,4+i);scanf ("%d",&cinx);
    system("cls");
    while(!feof(Fc)){
 gotoxy(40,2+i);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&num,nom,prenom,&cin,ville,password,&telephone,&nbrreservationc);
    if(cin==cinx){
            trouve=1;
textcolor(14);
gotoxy(53,3+i); printf("CLIENT Ave CIN: %d",cinx);
textcolor(15);
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³Num:           ³%d               ",num);
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³Nom:           ³%s               ",nom);
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³ Prenom        ³%s               ",prenom);
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³CIN:           ³%d               ",cin);
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³VILLE:         ³%s               ",ville);
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³password:      ³%s                ",password);
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³TELEPHONE:     ³%llu               ",telephone);
gotoxy(40,18+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

}

    }if(trouve==0){
textcolor(4);
gotoxy(40,4+i);printf(" Aucun client nexiste avec le CIN :%d ",cinx);
textcolor(15);
    }
    fclose(Fc);
   }
   void choisiclientparcode(){
    int numx;
    int trouve=0;
    char nom[10],prenom[10],ville[10],password[20];
    int cin,num,nbrreservationc;
    unsigned long long int telephone;

 FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
    FILE *Fr=fopen("reserver.txt","at+");
    if(Fr== NULL){printf("file exicte pas");
    exit(1);}
    printf ("saisir le num de client qui veut reserver:");
    scanf ("%d",&numx);
    while(!feof(Fc)){

    fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&num,nom,prenom,&cin,ville,password,&telephone,&nbrreservationc);
    if(numx==num){
            trouve=1;
    printf("\n*************************************\n");
    printf("le Num du Client: %d\n",num);
    printf("le Nom du Client: %s\n",nom);
    printf("le Prenom du Client: %s\n",prenom);
    printf(" le cin du Client: %d\n",cin);
    printf("la ville du Client: %s\n",ville);
    printf("la password du Client: %s\n",password);
    printf("le Telephone :%llu\n",telephone);
    printf("\n*************************************\n");
     fprintf(Fr,"%d\n%s\n%d\n%llu\n%s\n%s\n%s\n",num,password,cin,telephone,ville,nom,prenom);
    }}
    if(trouve==0){
        printf("\n aucun client nexiste avec ce code \n");
    }
    fclose(Fc);
    fclose(Fr);
   }
void affichertoutlesclients(){
int i=0,k=1;

    char nom[10],prenom[10],ville[10],password[20];
    int cin,num,nbrreservationc;
    unsigned long long int telephone;
 FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}

    while(!feof(Fc)){
    gotoxy(40,2+i); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&num,nom,prenom,&cin,ville,password,&telephone,&nbrreservationc);
textcolor(14);
gotoxy(53,3+i);  printf("CLIENT N: %d",k);
textcolor(15);
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³Num:           ³%d               ",num);
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³Nom:           ³%s               ",nom);
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³ Prenom        ³%s               ",prenom);
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³CIN:           ³%d               ",cin);
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³VILLE:         ³%s               ",ville);
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³password:      ³%s                ",password);
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³TELEPHONE:     ³%llu               ",telephone);
gotoxy(40,18+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");



i+=23;
k++;}
   /* while(!feof(Fc)){
    printf("\n*************************************\n");
    fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%d\n%d\n",&num,nom,prenom,&cin,ville,&rue,&telephone);
    printf("le Num du Client: %d\n",num);
    printf("le Nom du Client: %s\n",nom);
    printf("le Prenom du Client: %s\n",prenom);
    printf(" le cin du Client: %d\n",cin);
    printf("la ville du Client: %s\n",ville);
    printf("la Rue du Client: %d\n",rue);
    printf("le Telephone :%d\n",telephone);
    printf("\n*************************************\n");*/
   fclose(Fc);
    }


/*void modification(){
    int modiff,numx,trouve=0;
    char nom[10],prenom[10],ville[10];
    int cin,,num,telephone;

FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
FILE *Ft=fopen("temp.txt","w+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}

    printf ("saisir le num de client a modifier:");
    scanf ("%d",&numx);
    while(!feof(Fc)){

    fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%d\n%d\n",&num,nom,prenom,&cin,ville,&rue,&telephone);
    if(numx==num){
    trouve=1;
    do{
    printf("\n*************************************\n");
    printf("\n1- Modification Nom Client.\n");
    printf("\n2- Modification Prenom Client.\n");
     printf("\n3- Modification cin Client.\n");
      printf("\n4- Modification ville Client.\n");
       printf("\n5- Modification rue Client.\n");
        printf("\n6- Modification Telephone Client.\n");
    printf("\n0-Fin Moddification\n");
    printf("\n*************************************\n");
    printf("quelle modication souhaitez vous faire:");
    scanf("%d",&modiff);
switch(modiff){
case 1: {printf("\n Saisir le nouveau nom\n");
scanf("%s",&nom);
break;}
case 2 :{printf("\n Saisir le nouveau prenom\n");
scanf("%s",&prenom);
break;}
case 3 :{printf("\n Saisir le nouveau cin\n");
scanf("%d",&cin);
break;}
case 4 :{printf("\n Saisir la nouvelle ville\n");
scanf("%s",ville);
break;}
case 5 :{printf("\n Saisir le nouvelle rue\n");
scanf("%d",&rue);
break;}
case 6 :{printf("\n Saisir le telephone \n");
scanf("%d",&telephone);
break;}
 default: printf("\nchoix non valide\n");

}

}while(modiff!=0);
    }
    fprintf(Ft,"%d\n%s\n%s\n%d\n%s\n%d\n%d\n",num,nom,prenom,cin,ville,rue,telephone);

    }

    if(trouve==0){
        printf("\n Aucun client nexiste avec ce code \n");
    }
    else{
        printf("\n Client modifiee avec succes\n");
    }
    fclose(Fc);
    fclose(Ft);
    remove("client.txt");
    rename("temp.txt","client.txt");
   }*/
   void modification(){
    int modiff,numx,trouve=0,nbrreservationc;
    char nom[10],prenom[10],ville[10],password[20];
    int cin,num,cinx;
    unsigned long long int telephone;

FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
FILE *Ft=fopen("temp.txt","w+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
    system("cls");

    gotoxy(30,4);printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,5);printf("³saisir le cin de client a modifier:Ã                            ³");
    gotoxy(30,6);printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

    gotoxy(68,5);scanf ("%d",&cinx);
    while(!feof(Fc)){

    fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&num,nom,prenom,&cin,ville,password,&telephone,&nbrreservationc);
    if(cin==cinx){
    trouve=1;
    do{
   textcolor(13);
    gotoxy(30,8);   printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,9);   printf("³tapez 1 pour    ³ Modification Nom Client.      ³ ");
    gotoxy(30,10);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
    gotoxy(30,11);  printf("³tapez 2 pour    ³ Modification Prenom Client.   ³");
    gotoxy(30,12);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
    gotoxy(30,13);  printf("³tapez 3 pour    ³ Modification cin Client.      ³");
    gotoxy(30,14);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
    gotoxy(30,15);  printf("³tapez 4 pour    ³ Modification ville Client.    ³");
    gotoxy(30,16);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
    gotoxy(30,17);  printf("³tapez 5 pour    ³ Modification password Client. ³");
    gotoxy(30,18);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
    gotoxy(30,19);  printf("³tapez 6 pour    ³ Modification Telephone Client ³");
    gotoxy(30,20);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
    gotoxy(30,21);  printf("³tapez 0 pour    ³ Fin Moddification\n           ³");
    gotoxy(30,22);  printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    textcolor(15);
    gotoxy(30,23); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,24); printf("³quelle modication souhaitez vous faire: ³              ³");
    gotoxy(30,25); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    textcolor(13);
    gotoxy(75,24);scanf("%d",&modiff);
    textcolor(15);
switch(modiff){
case 1: {
    gotoxy(30,27); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,28); printf("³Saisir le nouveau nom      ³              ³");
    gotoxy(30,29); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(61,28); scanf("%s",&nom);
break;}
case 2 :{
    gotoxy(30,27); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,28); printf("³ Saisir le nouveau prenom  ³              ³");
    gotoxy(30,29); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(61,28); scanf("%s",&prenom);
break;}
case 3 :{
     gotoxy(30,27); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,28);  printf("³ Saisir le nouveau cin     ³              ³");
    gotoxy(30,29);  printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(61,28);scanf("%d",&cin);
break;}
case 4 :{
    gotoxy(30,27); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,28); printf("³Saisir la nouvelle ville   ³              ³");
    gotoxy(30,29); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(61,28);scanf("%s",ville);
break;}
case 5 :{
    gotoxy(30,27); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,28); printf("³Saisir le nouvelle password³              ³");
    gotoxy(30,29); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(61,28);scanf("%s",password);
break;}
case 6 :{
    gotoxy(30,27); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,28); printf("³Saisir le telephone        ³              ³");
    gotoxy(30,29); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(61,28);scanf("%llu",&telephone);
break;}
 default:
    gotoxy(30,27); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    gotoxy(30,28); printf("³    choix non valide      ³");
    gotoxy(30,28); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");


}

}while(modiff!=0);
    }
    fprintf(Ft,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",num,nom,prenom,cin,ville,password,telephone,nbrreservationc);

    }

    if(trouve==0){
     system("cls");
   gotoxy(30,25); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
   gotoxy(30,26); printf("³ Aucun client nexiste avec ce code         ³");
   gotoxy(30,27); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

    }
    else{
            system("cls");
   gotoxy(30,25); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
   gotoxy(30,26); printf("³Client modifiee avec succes                ³");
   gotoxy(30,27); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");


    }
    fclose(Fc);
    fclose(Ft);
    remove("client.txt");
    rename("temp.txt","client.txt");
   }

   void modificationnb(char matricule[30]){

    char mat[30],marque[10],moteur[10],couleur[10],clim[10];
    int puissance,prixJour,nbplace,nbrvoiture,nbrreservation,chiffrem,chiffre=0;

   FILE *fc=fopen("fv.txt","r+");
   if(fc==NULL){printf("ce fichier existe pas");exit(1);}


     FILE *Ft=fopen("tempnob.txt","w+");
    if(Ft== NULL){printf("file exicte pas");
    exit(1);}

    while(!feof(fc)){

    fscanf(fc,"%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n%d\n",mat,marque,&puissance,moteur,couleur,clim,&prixJour,&nbplace,&nbrvoiture,&nbrreservation);

    if(strcmp(matricule,mat)==0){
               nbrvoiture=nbrvoiture-1;
               nbrreservation=nbrreservation+1;

    }
    fprintf(Ft,"%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n%d\n",mat,marque,puissance,moteur,couleur,clim,prixJour,nbplace,nbrvoiture,nbrreservation);

    }



fclose(Ft);
fclose(fc);

remove("fv.txt");
rename("tempnob.txt","fv.txt");

   }
  /* void modificationclient(int cinx){

      char nom[10],prenom[10],ville[10];
    int cin,rue,num,telephone,nbrreservationc;
    char  response;



   FILE *fp=fopen("client.txt","r+");
   if(fp==NULL){printf("ce fichier nexiste pas");exit(1);}

    FILE *Fk=fopen("tempc.txt","w+");
    if(Fk== NULL){printf("file exicte pas");
    exit(1);}



    while(!feof(fp)){

   fscanf(fp,"%d\n%s\n%s\n%d\n%s\n%d\n%d\n%d\n",&num,nom,prenom,&cin,ville,&rue,&telephone,&nbrreservationc);
    if(cinx==cin){
               nbrreservationc=nbrreservationc+1;

    }
    fprintf(Fk,"%d\n%s\n%s\n%d\n%s\n%d\n%d\n%d\n",num,nom,prenom,cin,ville,rue,telephone,nbrreservationc);

    }




fclose(fp);
fclose(Fk);

   }*/
/*int chiffreaffaire(){
    int chiffrem;
       FILE *Fa=fopen("chiffre.txt","r+");
    if(Fa== NULL){printf("file exicte pas");
    exit(1);}
    fscanf(Fa,"%d",&chiffrem);
printf("le chiffre affaire est:%d",chiffrem);
fclose(Fa);

}*/
void deleteme(){
int numx,trouve=0;
    char nom[10],prenom[10],ville[10],password[20];
    int cin,num,cinx,nbrreservationc;
    unsigned long long int telephone;

FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
FILE *Ft=fopen("temp.txt","w+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³saisir le CIN de client a supprimer³                          ",ch3);
gotoxy(40,5); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(79,4);scanf("%d",&cinx);
    printf (":");
  //  scanf ("%d",&cinx);
    while(!feof(Fc)){

    fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&num,nom,prenom,&cin,ville,password,&telephone,&nbrreservationc);
    if(cinx!=cin){
    fprintf(Ft,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",num,nom,prenom,cin,ville,password,telephone,nbrreservationc);}
    else
        trouve=1;

    }

    if(trouve==0){
            textcolor(4);
       gotoxy(40,7); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
       gotoxy(40,8); printf("³Aucun client n'existe avec ce code a suprimmer³                          ",ch3);
       gotoxy(40,9); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
      textcolor(15);
    }
    else{
          textcolor(2);
       gotoxy(40,7); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
       gotoxy(40,8); printf("³Client supprimer avec succes  ³ ",ch3);
       gotoxy(40,9); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
      textcolor(15);

    }
    fclose(Fc);
    fclose(Ft);
remove("client.txt");
      rename("temp.txt","client.txt");


}

void reservationc (){
    client * tete =NULL;
    FILE *fc;
fc=fopen("reserver.txt","at+");
    if(fc== NULL){printf("file exicte pas");
    exit(1);}
textcolor(2);
gotoxy(50,19);printf("Voir Voiture Disponible Chez Agence ?");
textcolor(15);
gotoxy(50,20);getch();
system("cls");

//affichertoutlesclients();
 //choisiclientparcode();
affichertoutlesvoiture();

cherchervoitureparmat();
duree();
fclose(fc);
remove("client.txt");
      rename("tempc.txt","client.txt");
    }
void reservationa (){
    client * tete =NULL;
    FILE *fc;
fc=fopen("reserver.txt","at+");
    if(fc== NULL){printf("file exicte pas");
    exit(1);}
tete = saisiecltx(tete);
gotoxy(50,19);printf("Voir Voiture Disponible Chez Agence ?");
gotoxy(50,20);getch();
system("cls");

//affichertoutlesclients();
 //choisiclientparcode();
affichertoutlesvoiture();

cherchervoitureparmat();
duree();
fclose(fc);
    }

  /*  void contrat() {
    char mat[10],marqu[10],mot[10],coul[10],clim[10];
    int puis,prix,place,nbrvoiture;
    char nom[10],prenom[10],ville[10];
    int cin,rue,num,telephone;
    int j,m,a;
    int jf,mf,af;
    int k=1,i=0;
    char dureee[200];

  /*FILE*  fc=fopen("contrat.txt","w+");
    if(fc== NULL){printf("file exicte pas");
    exit(1);}
FILE *  fr=fopen("reserver.txt","r+");
    if(fr== NULL){printf("file exicte pas");
    exit(1);}
    while(!feof(fr)){
    fscanf(fr,"%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n %d\n%s\n%s\n%d\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%[^\n]",mat,marqu,&puis,mot,coul,clim,&prix,&place,&nbrvoiture,&num,nom,prenom,&cin,ville,&rue,&telephone,&j,&m,&a,&jf,&mf,&af,dureee);
    //fprintf(fc,"%s\n%s\n%d\n%s\n%s\n%s%d\n%d\n%d\n%s\n%s\n%d\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%[^\n]",mat,marqu,puis,mot,coul,clim,prix,place,nbrvoiture,num,nom,prenom,cin,ville,rue,telephone,j,m,a,jf,mf,af,dureee);}
  //while(!feof(fc)){
    gotoxy(40,2+i); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    //fscanf(fc,"%s\n%s\n%d\n%s\n%s\n%s%d\n%d\n%d\n%s\n%s\n%d\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%[^\n]",mat,marqu,&puis,mot,coul,clim,&prix,&place,&nbrvoiture,&num,nom,prenom,&cin,ville,&rue,&telephone,&j,&m,&a,&jf,&mf,&af,dureee);

textcolor(14);
gotoxy(53,3+i);  printf("CONTRAT N: %d",k);
textcolor(15);
gotoxy(40,4+i);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,5+i);  printf("³Num:           ³%d               ",num);
gotoxy(40,6+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,7+i);  printf("³Nom:           ³%s               ",nom);
gotoxy(40,8+i);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,9+i);  printf("³ Prenom        ³%s               ",prenom);
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³CIN:           ³%d               ",cin);
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³VILLE:         ³%s               ",ville);
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³RUE:           ³%d                ",rue);
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³TELEPHONE:     ³%d               ",telephone);
gotoxy(40,18+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,19+i); printf("³le Matricule:  ³%s               ³",mat);
gotoxy(40,20+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,21+i); printf("³la Marque:     ³%s                ",marqu);
gotoxy(40,22+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,23+i); printf("³la Couleur:    ³%s            ",coul);
gotoxy(40,24+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,25+i); printf("³PriX Par Jour: ³%d              ",prix);
gotoxy(40,26+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,27+i); printf("³Date Reservation: ³%d/%d/%d ",j,m,a);
gotoxy(40,28+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,29+i); printf("³Date FReservation: ³%d/%d/%d ",jf,mf,af);
gotoxy(40,30+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,31+i); printf("³Duree:             ³%[^\n] ",dureee);



gotoxy(40,32+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");



i+=32;
k++;}
//fclose(fc);
fclose(fr);
    }*/


void contrat() {
    char mat[10],marqu[10],mot[10],coul[10],clim[10];
    int puis,prix,place,nbrvoiture;
    char nom[10],prenom[10],ville[10],password[20];
    int cin,num;
    unsigned long long int telephone;
    int j,m,a;
    int jf,mf,af;
    int k=1,i=0;
    char dureee[200];

 /* FILE*  fc=fopen("contrat.txt","w+");
    if(fc== NULL){printf("file exicte pas");
    exit(1);}*/
FILE *    fr=fopen("reserver.txt","r+");
    if(fr== NULL){printf("file exicte pas");
    exit(1);}
    while(!feof(fr)){
fscanf(fr,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%[^\n]\n",&num,nom,prenom,&cin,ville,password,&telephone,mat,marqu,&puis,mot,coul,clim,&prix,&place,&nbrvoiture,&j,&m,&a,&jf,&mf,&af,dureee);
   // fscanf(fr,"     %s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n               %s\n%s\n%d\n%s\n%s\n%d\n                                 %d\n%d\n%d\n%d\n%d\n%d\n%[^\n]\n"
     //      ,mat,marqu,&puis,mot,coul,clim,&prix,&place,&nbrvoiture     num,nom,prenom,&cin,ville,password,&telephone ,&j,&m,&a,&jf,&mf,&af,dureee);
    //fprintf(fc,"%s\n%s\n%d\n%s\n%s\n%s%d\n%d\n%d\n%s\n%s\n%d\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%[^\n]",mat,marqu,puis,mot,coul,clim,prix,place,nbrvoiture,num,nom,prenom,cin,ville,rue,telephone,j,m,a,jf,mf,af,dureee);}
  //while(!feof(fc)){
    gotoxy(40,2+i); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    //fscanf(fc,"%s\n%s\n%d\n%s\n%s\n%s%d\n%d\n%d\n%s\n%s\n%d\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%[^\n]",mat,marqu,&puis,mot,coul,clim,&prix,&place,&nbrvoiture,&num,nom,prenom,&cin,ville,&rue,&telephone,&j,&m,&a,&jf,&mf,&af,dureee);
textcolor(14);
gotoxy(53,3+i);  printf("CONTRAT N: %d",k);
textcolor(15);
gotoxy(40, 4+i); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40, 5+i); printf("³Nom:           ³%s                                                 ",nom);
gotoxy(40, 6+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40, 7+i); printf("³Prenom         ³%s                                              ",prenom);
gotoxy(40, 8+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40, 9+i); printf("³CIN:           ³%d                                                 ",cin);
gotoxy(40,10+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,11+i); printf("³VILLE:         ³%s                                                ",ville);
gotoxy(40,12+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
//gotoxy(40,13+i); printf("³RUE:           ³%d                                                 ",rue);
//gotoxy(40,13+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,13+i); printf("³TELEPHONE:     ³%llu                                           ",telephone);
gotoxy(40,14+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,15+i); printf("³le Matricule:  ³%s                                                 ",mat);
gotoxy(40,16+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,17+i); printf("³la Marque:     ³%s                                               ",marqu);
gotoxy(40,18+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,19+i); printf("³la Couleur:    ³%s                                                ",coul);
gotoxy(40,20+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,21+i); printf("³PriX Par Jour: ³%d                                                ",prix);
gotoxy(40,22+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,23+i); printf("³DateReservation³%d/%d/%d                                        ",j,m,a);
gotoxy(40,24+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,25+i); printf("³DateRetour   : ³%d/%d/%d                                       ",jf,mf,af);
gotoxy(40,26+i); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
textcolor(2);
gotoxy(40,27+i); printf("³Duree:         ³%s                                                               ",dureee);
gotoxy(40,28+i); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
i+=30;
k++;}
//fclose(fc);
fclose(fr);
    }
// Tri non fonctionnel
client* trifparnum(client *tete){
    char nom[11],prenom[11],ville[11],password[20];
    int cin,num;
    unsigned long long int telephone;

FILE *Fc=fopen("client.txt","r+");
    if(Fc== NULL){printf("file exicte pas");
    exit(1);}

    tete = malloc(sizeof(struct client));
    client * ptr=tete;


while(feof(Fc)){
        fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n",&num,nom,prenom,&cin,ville,password,&telephone);
        ptr->clt.num=num;
        //ptr->clt.nom=nom;
        strcpy(ptr->clt.nom , nom);
        //ptr->clt.prenom=prenom;
        strcpy(ptr->clt.prenom , prenom);
        ptr->clt.cin=cin;
        //ptr->clt.ville=ville;
        strcpy(ptr->clt.ville , ville);
        strcpy(ptr->clt.password,password);
        ptr->clt.telephone=telephone;
        ptr->clientsuivant = malloc(sizeof(struct client));
        ptr = ptr->clientsuivant;

    }
    printf("jusqua present pas de probleme  %s ",ptr->clt.nom);
    // tri du liste chainee
client * p1;

client * p2;
//client * tempp=malloc(sizeof(struct client));
cliente tempp;
/*while(p1->clientsuivant!=NULL){
 while(p2->clientsuivant!=NULL){
  if(p1->clt.num<p2->clt.num){
    tempp=p1->clt;
    p1->clt=p2->clt;
    p2->clt=tempp;}
   p2=p2->clientsuivant; }
p1=p1->clientsuivant;}
*/

for(p1=tete;p1->clientsuivant!=NULL;p1=p1->clientsuivant)
for(p2=tete->clientsuivant;p2!=NULL;p2=p2->clientsuivant){

   if(p1->clt.num<p2->clt.num){
    tempp=p1->clt;
    p1->clt=p2->clt;
    p2->clt=tempp;}
}


return tete;
fclose(Fc);}
void chiffredaffaire(){
int sum=0;
FILE *    fr=fopen("reserver.txt","r+");
 char mat[10],marqu[10],mot[10],coul[10],clim[10];
    int puis,prix,place,nbrvoiture;
    char nom[10],prenom[10],ville[10],password[20];
    int cin,num;
    unsigned long long int telephone;
    int j,m,a;
    int jf,mf,af;
    int k=1,i=0;
    char dureee[200];
    sum == sum;
while (!feof(fr)){

fscanf(fr,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%[^\n]\n",&num,nom,prenom,&cin,ville,password,&telephone,mat,marqu,&puis,mot,coul,clim,&prix,&place,&nbrvoiture,&j,&m,&a,&jf,&mf,&af,dureee);

    //fscanf(fr,"\n%s\n%s\n%d\n%s\n%s\n%s\n%d\n%d\n%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n%d\n%d\n%d\n%d\n%d\n%[^\n]\n",mat,marqu,&puis,mot,coul,clim,&prix,&place,&nbrvoiture,nom,prenom,&cin,ville,password,&telephone,&j,&m,&a,&jf,&mf,&af,dureee);
      if((mf-m)==0&&(af-a)==0)
        sum =sum + prix*(jf-j);
     else if ((af-a)==0)
     sum=sum+((prix*(jf-j))+(prix*(mf-m)*30));
       else
         sum=sum+((prix*(jf-j))+(prix*(mf-m)*30)+(prix*(af-a)*365));
}
gotoxy(40,1); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    textcolor(15);

gotoxy(20,2); printf(" ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    textcolor(15);
gotoxy(20,3); printf (" ³ le chiffre d'affaire est :                        ³%d                               ³",sum);
    textcolor(15);
gotoxy(20,4); printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
/*gotoxy(40, 1); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40, 2); printf("³le chiffre d'affaire est           ³%d                                               ³ ",sum);
gotoxy(40, 3); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
//gotoxy(50,19);printf("le chiffre d'affaire est %d ",sum);*/

getch();
system("cls");
//printf("le prix est %d ",sum);

}
void p(){
    int choix;
    char ch1=05;
    char ch2=219;
    char ch3=004;
do{
gotoxy(20,2);  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(20,3);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
textcolor(2);

gotoxy(20,4);  printf("³         BIENVENNUE, NOUS AVONS L'HONNEUR DE VOTRE VISITER .                 ³");
textcolor(15);

gotoxy(20,5);  printf("Ã                                                                             Ã");
gotoxy(20,6);  printf("³ l'objectif de notre nouvelle application est de faciliter la location       ³");
gotoxy(20,7);  printf("Ã                                                                             Ã");

gotoxy(20,8);  printf("³des voitures dans nos quotidienne pour vous comme nos cheres clients et meme ³");
gotoxy(20,9);  printf("Ã                                                                             Ã");

gotoxy(20,10); printf("³ pour nous . cette facilitee apparait sur l'utilisation de notre application.³");
gotoxy(20,11); printf("Ã                                                                             Ã");

gotoxy(20,12); printf("³ nous avons bien travailles sur la clarte des etapes pour creer un compte    ³");
gotoxy(20,13); printf("Ã                                                                             Ã");

gotoxy(20,14); printf("³ et pour voir aussi nos catalogues des voitures en ligne.                    ³");
gotoxy(20,15); printf("Ã                                                                             Ã");

gotoxy(20,16); printf("³ et vous pouvez choisir que vous voulez en alaise.aussi vous pouvez faire    ³");
gotoxy(20,17); printf("Ã                                                                             Ã");

gotoxy(20,18); printf("³ une reservation avec une grande  securite , grace a la creation du compte   ³");
gotoxy(20,19); printf("Ã                                                                             Ã");

gotoxy(20,20); printf("³ personnel . notre application vous accordez la confidantialite ,            ³");
gotoxy(20,21); printf("Ã                                                                             Ã");

gotoxy(20,22); printf("³ et de garder vos informations  chez nous  a fin de ne repeter  pas          ³");
gotoxy(20,23); printf("Ã                                                                             Ã");

gotoxy(20,24); printf("³ les memes etapes sur une autre reservation dans l'avenir                    ³");
gotoxy(20,25); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

gotoxy(20,26); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(2);

gotoxy(20,27); printf(" %c1.routour en arriere .                                                    ",ch3);
textcolor(15);

gotoxy(57,32);scanf("%d",&choix);
system("cls");
if(choix!=1);
gotoxy(40,6);textcolor(4);gotoxy(30,16);
printf("Error :votre choix est incorrect, Choisissez soit (1)!!");
textcolor(15);
switch(choix){
case 1: {system("cls");
aproposnous();
break;}
//case 2 :{system("cls");//t//eter= clientsfideles(teter);
//break;}
}
}while(choix!=1&&choix!=2 );
}
void real(){
    int choix;
    char ch1=05;
    char ch2=219;
    char ch3=004;
do{
gotoxy(20,2);  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(20,3);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,4);  printf("³Avec un grand travail qui etait pas facile nous avons pu organiser et realiser³");
gotoxy(20,5);  printf("Ã                                                                              Ã");

gotoxy(20,6);  printf("³ cette application grace a ces trois personnes:                               ³");
gotoxy(20,7);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");


textcolor(2);

gotoxy(20,8);  printf("³  Youssef Ouahassoune                                                         ³");
gotoxy(20,9);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");

//gotoxy(20,9);  printf("Ã                                                                          Ã");

gotoxy(20,10); printf("³ Ghizlane nemrouche                                                           ³");
gotoxy(20,11); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");

//gotoxy(20,11); printf("Ã                                                                              Ã");

gotoxy(20,12); printf("³ Nihal saidy                                                                  ³");
gotoxy(20,13); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(20,15); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(4);
gotoxy(40,17); printf(" %c1.RETOUR EN ARRIERE.                                                        ",ch3);
textcolor(15);

gotoxy(57,20);scanf("%d",&choix);
system("cls");
if(choix!=1);
gotoxy(40,6);textcolor(4);gotoxy(30,16);
printf("Error :votre choix est incorrect, Choisissez soit (1)!!");
textcolor(15);
switch(choix){
case 1: {system("cls");
aproposnous();
break;}
//case 2 :{system("cls");//t//eter= clientsfideles(teter);
//break;}
}
}while(choix!=1&&choix!=2 );}



void offre(){
    int choix;
    char ch1=05;
    char ch2=219;
    char ch3=004;
do{
gotoxy(20,5);  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(20,6);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(20,7);  printf("³depuis toujours nous travaillons sur l'amelioration de nos services ,         ³");
gotoxy(20,8);  printf("Ã                                                                              Ã");

gotoxy(20,9);  printf("³pour cela nous vous accordons des bonus ,mais avec une petite condition       ³");
gotoxy(20,10); printf("Ã                                                                              Ã");

gotoxy(20,11); printf("³si,par exemple vous avez reservee cinq fois ou plus ,vous aurez  une reduction³");
gotoxy(20,12); printf("Ã                                                                              Ã");

gotoxy(20,13); printf("³ de 30 pour cent .et merci                                                    ³");
gotoxy(20,14); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");



gotoxy(20,15); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(2);

gotoxy(40,16); printf(" %c1.RETOUR EN ARRIERE.                                                    ",ch3);
textcolor(15);

gotoxy(57,20);scanf("%d",&choix);
system("cls");
if(choix!=1);
gotoxy(40,6);textcolor(4);gotoxy(30,16);
printf("Error :votre choix est incorrect, Choisissez soit (1)!!");
textcolor(15);
switch(choix){
case 1: {system("cls");
aproposnous();
break;}
//case 2 :{system("cls");//t//eter= clientsfideles(teter);
//break;}
}
}while(choix!=1&&choix!=2 );}










void aproposnous(){
     int choix;
    char ch1=05;
    char ch2=219;
    char ch3=004;

 do{
gotoxy(40,2);  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4);  printf("³ %c1.  Interet de ce projet:          ³",ch3);
gotoxy(40,5);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6);  printf("³ %c2.  Nos offres:                   ³",ch3);
gotoxy(40,7);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8);  printf("³ %c3.  Les Realisateures de ce projet:³",ch3);
gotoxy(40,9);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
textcolor(2);

gotoxy(40,10); printf("³ %c4.Retour au menu                   ³",ch3);
textcolor(15);

gotoxy(40,11); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(40,12); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(57,14);scanf("%d",&choix);

system("cls");
 if(choix!=1 && choix!=2&& choix!=3 && choix!=4  ){
        gotoxy(40,6);textcolor(4);gotoxy(30,16);
printf("Error :votre choix est incorrect, Choisissez soit (1), (2), (3) ou (4)!!");}
textcolor(15);


switch(choix){
case 1: {system("cls");
p();
break;}
case 2 :{system("cls");offre();
break;}
case 3 :{system("cls");real();
break;}
case 4 :{system("cls");menu();
break;}

}
}while(choix!=1&&choix!=2 && choix!=3 && choix!=4);}
void statistique (){
    int choix;
    char ch1=05;
    char ch2=219;
    char ch3=004;
     listeVoiture *tetex=NULL;
     client *teter=NULL;
do{
gotoxy(40,2);  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3);  printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4);  printf("³ %c1.nombre maximal de reservation    ³",ch3);
gotoxy(40,5);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6);  printf("³ %c2.Les clients fideles              ³",ch3);
gotoxy(40,7);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8);  printf("³ %c3.chiffre d'affaire de l'agence    ³",ch3);
gotoxy(40,9);  printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,10); printf("³ %c4.retour au menu                   ³",ch3);
gotoxy(40,11); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(40,12); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(57,14);scanf("%d",&choix);
system("cls");
if(choix!=1&&choix!=2 && choix!=3 && choix!=4  ){
        gotoxy(40,6);textcolor(4);gotoxy(30,16);
printf("Error :votre choix est incorrect, Choisissez soit (1), (2), (3) ou (4)!!");}
textcolor(15);


switch(choix){
case 1: {system("cls");
tetex=maxnombrereservation(tetex);
break;}
case 2 :{system("cls");teter= clientsfideles(teter);
break;}
case 3 :{system("cls"); chiffredaffaire();//chiffredaffaire(); chiffredaffaire(){
break;}
case 4 :{system("cls");menu();
break;}

}
}while(choix!=1&&choix!=2 && choix!=3 && choix!=4);}

void menu (){
//amour();
int choix;
    client * tete =NULL;
    listeVoiture *tetev=NULL;
    listeVoiture *tetex=NULL;
char ch1=05;
char ch2=219;
char ch3=004;
char ch4=017;
char ch5=11;
char ch6=03;

//system("color F0");


do{

gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³             %c1.CLIENT           ³",ch3);
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6); printf("³             %c2.AGENCE           ³",ch3);
textcolor(3);
gotoxy(40,7); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8); printf("³         %c  A PROPOS NOUS        ³",ch6);
gotoxy(40,9); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(40,10); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);

gotoxy(57,12);scanf("%d",&choix);
system("cls");
if(choix!=1&&choix!=2&&choix!=3 ){gotoxy(40,6);textcolor(4);gotoxy(36,14);printf("Error : Choisir soit CLIENT(1) ou AGENCE(2)!!");}
textcolor(15);
}while(choix!=1&&choix!=2&&choix!=3);

switch(choix){
case 1: {
do{
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³    %c1_ Creation Account         ³",ch3);
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6); printf("³    %c2_ Deja Client              ³",ch3);
gotoxy(40,7); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(40,8); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);

gotoxy(57,10);scanf("%d",&choix);
system("cls");
if(choix!=1&&choix!=2 ){gotoxy(40,6);textcolor(4);gotoxy(36,12);printf("Error : Choose either to sign up or Login!!");}
textcolor(15);
}while(choix!=1&&choix!=2);
switch(choix){
   case 1: {
    do{

system("cls");
//textcolor(2);
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
//textcolor(15);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³1- Saisir Vos Information.       ³"); //il faut changer la rue avec password
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
textcolor(4);
gotoxy(40,6); printf("³2-Menu                           ³");
gotoxy(40,7); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8);  printf("³0-Fin Application                ³");
gotoxy(40,9); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(40,10); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
   gotoxy(57,12); scanf("%d",&choix);
switch(choix){
case 1: {  system("cls");tete = saisiecltc(tete);
break;}
case 2 :{
system("cls");menu();
break;}
 default: printf("\nFIN APPLICATION BYE\n");
}
getch();
}while(choix!=0);

break;

}
   case 2: {

int cinx;
char passw[LONG_MOT];
  int cle=15;
  int num;
int trouve=0;
system("cls");
do{
 gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    gotoxy(40,3);  printf(" ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    textcolor(14);
    gotoxy(40,4);printf (" ³saisir Votre CIN :                 ³                   ");
    textcolor(15);
    gotoxy(40,5); printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
     gotoxy(40,6);printf (" ³saisir Votre PASSWORD :            ³                   ");
    textcolor(15);
    gotoxy(40,7); printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(80,4);scanf ("%d",&cinx);
    //gotoxy(80,6);scanf ("%s",&passw);



  if (num !=100) {
  num=0;
 gotoxy(80,6); while((passw[num]=getch()) != 13) {
  putchar('*');
  num++;
  }}
passw[num]='\0';



    afficherparcodex(cinx,passw,&trouve);
    system("cls");
    }while(trouve==0);
break;



}}break;}
case 2: {

  char pass[LONG_MOT];
  char str[100];
  int cle;
  int num;
  FILE *fichier;
  fichier=fopen("passwordadmin.txt","rb");

  cle=15;
  fscanf(fichier,"%s",&str);

  fclose(fichier);

  do {
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³          Enter Password:        ³");
gotoxy(40,5); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
  if (num !=100) {
  num=0;
  textcolor(2);
 gotoxy(55,7); while((pass[num]=getch()) != 13) {
  putchar('*');
  num++;
  }}

  pass[num]='\0';
textcolor(15);
system("cls");
  }while(strcmp (str,pass) != 0);
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
gotoxy(40,18); printf("³8- Statistique                   ³");
gotoxy(40,19); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,20); printf("³9- Je reserve Pour Un Client.    ³");
gotoxy(40,21); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,22); printf("³10- CONTRAT.                     ³");
gotoxy(40,23); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,24); printf("³11-Menu                          ³");
textcolor(4);
gotoxy(40,25); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,26); printf("³0-Fin Application                ³");
gotoxy(40,27); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(40,28); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    gotoxy(57,30); scanf("%d",&choix);
switch(choix){
case 1: {system("cls");
tete = saisieclta(tete);
break;}
case 2 :{system("cls");afficherparcode();
break;}
case 5 :{system("cls");
    affichertoutlesclients();
break;}

case 6 :{modification();
break;}
case 7 :{
    system("cls");deleteme();
break;}
case 8 :{
system("cls");
    statistique();
break;}
case 9 :{system("cls");
      reservationa ();
      remove("client.txt");
      rename("tempc.txt","client.txt");
      remove("fv.txt");
      rename("tempnob.txt","fv.txt");
break;}
case 3 :{system("cls");
tetev = ajouterVoiture(tetev);
break;}
case 4 :{
    system("cls");affichertoutlesvoiture();
break;}
case 10 :{
    system("cls");contrat();
break;}
case 11 :{
system("cls");menu();
break;}
case 12 :{
system("cls"); chiffredaffaire();//chiffreaffaire();
break;}
case 13 :{

break;}

 default: printf("\nFIN APPLICATION BYE\n");

}
getch();
}while(choix!=0);
break;
}
case 3:{
    system("cls");aproposnous(0);
    break;
}
}}

void langue(){
    int choix;
    do{

gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
textcolor(14);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³             %cFRANCAIS           ³",ch1);
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6); printf("³             %cENGLISH            ³",ch1);
gotoxy(40,7); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(40,8); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);

gotoxy(57,10);scanf("%d",&choix);
system("cls");
if(choix!=1&&choix!=2){
    textcolor(4);gotoxy(40,12);printf("Error :  CLIENT(1) // AGENCE(2)!!");}
textcolor(15);
}while(choix!=1&&choix!=2);
 switch(choix){
case 1:{
    system("cls");
    menu();
    break; }
case 2:{
    system("cls");
    menu2();
    break;
}}}


void menu2 (){
//amour();
int choix;
    client * tete =NULL;
    listeVoiture *tetev=NULL;
    listeVoiture *tetex=NULL;
    char ch1=05;
char ch2=219;
char ch3=004;
char ch4=017;
char ch5=11;

do{

gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³             %c1.customer         ³",ch3);
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6); printf("³             %c2.agency           ³",ch3);
gotoxy(40,7); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8); printf("³             %c3.ABOUT US         ³",ch3);
gotoxy(40,9); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(40,10); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);


gotoxy(57,12);scanf("%d",&choix);
system("cls");
if(choix!=1&&choix!=2&&choix!=3 ){gotoxy(40,6);textcolor(4);gotoxy(36,14);printf("Error : Choisir soit CLIENT(1) ou AGENCE(2)!!");}
textcolor(15);
}while(choix!=1&&choix!=2&&choix!=3);

switch(choix){
case 1: {
do{
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³    %c1_ Creation Account         ³",ch3);
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6); printf("³    %c2_ Already Client           ³",ch3);
gotoxy(40,7); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
gotoxy(40,8); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);

gotoxy(57,10);scanf("%d",&choix);
system("cls");
if(choix!=1&&choix!=2 ){gotoxy(40,6);textcolor(4);gotoxy(36,12);printf("Error : Choose either to sign up or Login!!");}
textcolor(15);
}while(choix!=1&&choix!=2);
switch(choix){
   case 1: {
    do{

system("cls");
//textcolor(2);
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
//textcolor(15);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³1- Enter your information.       ³"); //il faut changer la rue avec password
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
textcolor(4);
gotoxy(40,6); printf("³2-Flashback                      ³");
gotoxy(40,7); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8);  printf("³0-End of application             ³");
gotoxy(40,9); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(40,10); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
   gotoxy(57,12); scanf("%d",&choix);
switch(choix){
case 1: {  system("cls");tete = saisiecltc(tete);
break;}
case 2 :{
system("cls");menu();
break;}
 default: printf("\nFIN APPLICATION BYE\n");
}
getch();
}while(choix!=0);

break;

}
   case 2: {

int cinx;
char pass[20],passw[LONG_MOT];
  int cle=15;
  int num;
int trouve=0;
system("cls");
do{
 gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    gotoxy(40,5);  printf(" ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    textcolor(14);
    gotoxy(40,6);  printf (" ³enter your CIN :       ³                   ");
    textcolor(15);
    gotoxy(40,7);  printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(40,8); printf (" ³enter your PASSWORD :  ³                    ");
    textcolor(15);
    gotoxy(40,9); printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    gotoxy(75,6);scanf ("%d",&cinx);




  if (num !=100) {
  num=0;
 gotoxy(75,8); while((passw[num]=getch()) != 13) {
  putchar('*');
  num++;
  }}
passw[num]='\0';



    afficherparcodex(cinx,passw,&trouve);
    system("cls");
    }while(trouve==0);
break;



}}break;}
case 2: {

  char pass[20];
  char str[100];
  int cle;
  int num;
  FILE *fichier;
  fichier=fopen("passwordadmin.txt","rb");

  cle=15;
  fscanf(fichier,"%s",&str);

  fclose(fichier);

  do {
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³          Enter Password:        ³");
gotoxy(40,5); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
  if (num !=100) {
  num=0;
  textcolor(2);
 gotoxy(55,7); while((pass[num]=getch()) != 13) {
  putchar('*');
  num++;
  }}

  pass[num]='\0';
textcolor(15);
system("cls");
  }while(strcmp (str,pass) != 0);
do{
system("cls");
gotoxy(40,2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
gotoxy(40,3); printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
gotoxy(40,4); printf("³1- Enter a new customer.         ³");
gotoxy(40,5); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,6); printf("³2- View clients by CIN.          ³");
gotoxy(40,7); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,8); printf("³3- Enter a new car.              ³");
gotoxy(40,9); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,10); printf("³4- Car displays.                 ³");
gotoxy(40,11); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,12); printf("³5-View all clients.              ³");
gotoxy(40,13); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,14); printf("³6-Modification.                  ³");
gotoxy(40,15); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,16); printf("³7-Delete a client.               ³");
gotoxy(40,17); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,18); printf("³8-Statistics                     ³");
gotoxy(40,19); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,20); printf("³9-I book for a client.           ³");
gotoxy(40,21); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,22); printf("³10- CONTRACT.                    ³");
gotoxy(40,23); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,24); printf("³11-Flashback                     ³");
textcolor(4);
gotoxy(40,25); printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
gotoxy(40,26); printf("³0-End of application             ³");
gotoxy(40,27); printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
textcolor(15);
gotoxy(40,28); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ch1,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch2,ch1);
    gotoxy(57,30); scanf("%d",&choix);
switch(choix){
case 1: {system("cls");
tete = saisieclta(tete);
break;}
case 2 :{system("cls");afficherparcode();
break;}
case 5 :{system("cls");
    affichertoutlesclients();
break;}

case 6 :{modification();
break;}
case 7 :{
    system("cls");deleteme();
break;}
case 8 :{
system("cls");
    statistique();
break;}
case 9 :{system("cls");
      reservationa ();
remove("client.txt");
      rename("tempc.txt","client.txt");
      remove("fv.txt");
      rename("tempnob.txt","fv.txt");

break;}
case 3 :{system("cls");
tetev = ajouterVoiture(tetev);
break;}
case 4 :{
    system("cls");affichertoutlesvoiture();
break;}
case 10 :{
    system("cls");contrat();
break;}
case 11 :{
system("cls");menu2();
break;}
case 12 :{
//system("cls");chiffreaffaire();
break;}
case 13 :{

break;}

 default: printf("\nFIN APPLICATION BYE\n");

}
getch();
}while(choix!=0);
break;
}
case 3:{
    system("cls");aproposnous(0);
    break;
}
}

}




#endif // TTT_H_INCLUDED
