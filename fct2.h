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
gotoxy(40,4+i);  printf("�������������������������������������������������������Ŀ");
gotoxy(40,5+i);  printf("�le matricule du voiture:     �%s",p1->voit.matricule);
gotoxy(40,6+i);  printf("�������������������������������������������������������Ĵ");
gotoxy(40,7+i);  printf("�la marque du voiture:        �%s",p->voit.marque);
gotoxy(40,8+i);  printf("�������������������������������������������������������Ĵ");
gotoxy(40,9+i);  printf("�la puissance du voiture:     �%d",p1->voit.puissance);
gotoxy(40,10+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,11+i); printf("�le moteur du voiture:        �%s",p1->voit.moteur);
gotoxy(40,12+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,13+i); printf("�la couleur du voiture:       �%s",p1->voit.couleur);
gotoxy(40,14+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,15+i); printf("�la clim du voiture:          �%s",p1->voit.clim);
gotoxy(40,16+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,17+i); printf("�Le prix par  jour:           �%d",p1->voit.prixJour);
gotoxy(40,18+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,19+i); printf("�le nombre de place:          �%d",p1->voit.nbplace);
gotoxy(40,20+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,21+i); printf("�voiture disponible a lagence:�%d",p1->voit.nbrvoiture);
gotoxy(40,22+i); printf("���������������������������������������������������������");


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
gotoxy(40,4+i);  printf("���������������������������������Ŀ");
gotoxy(40,5+i);  printf("�Num:           �%d               ",p->clt.num);
gotoxy(40,6+i);  printf("���������������������������������Ĵ");
gotoxy(40,7+i);  printf("�Nom:           �%s               ",p->clt.nom);
gotoxy(40,8+i);  printf("���������������������������������Ĵ");
gotoxy(40,9+i);  printf("� Prenom        �%s               ",p->clt.prenom);
gotoxy(40,10+i); printf("���������������������������������Ĵ");
gotoxy(40,11+i); printf("�CIN:           �%d               ",p->clt.cin);
gotoxy(40,12+i); printf("���������������������������������Ĵ");
gotoxy(40,13+i); printf("�VILLE:         �%s               ",p->clt.ville);
gotoxy(40,14+i); printf("���������������������������������Ĵ");
gotoxy(40,15+i); printf("�password:      �%s                ",p->clt.password);
gotoxy(40,16+i); printf("���������������������������������Ĵ");
gotoxy(40,17+i); printf("�TELEPHONE:     �%llu               ",p->clt.telephone);
gotoxy(40,18+i); printf("���������������������������������Ĵ");
gotoxy(40,19+i); printf("�Nbr RESER:     �%d               ",p->clt.nbrreservationc);
gotoxy(40,20+i); printf("�����������������������������������");

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
gotoxy(40,4+i);  printf("�������������������������������������������������������Ŀ");
gotoxy(40,5+i);  printf("�le matricule du voiture:     �                         �");
gotoxy(40,6+i);  printf("�������������������������������������������������������Ĵ");
gotoxy(40,7+i);  printf("�la marque du voiture:        �                          ");
gotoxy(40,8+i);  printf("�������������������������������������������������������Ĵ");
gotoxy(40,9+i);  printf("�la puissance du voiture:     �             ");
gotoxy(40,10+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,11+i); printf("�le moteur du voiture:        �            ");
gotoxy(40,12+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,13+i); printf("�la couleur du voiture:       �            ");
gotoxy(40,14+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,15+i); printf("�la clim du voiture:          �                      ");
gotoxy(40,16+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,17+i); printf("�Le prix par  jour:           �                      ");
gotoxy(40,18+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,19+i); printf("�le nombre de place:          �                      ");
gotoxy(40,20+i); printf("�������������������������������������������������������Ĵ");
gotoxy(40,21+i); printf("�voiture disponible a lagence:�                      ");
gotoxy(40,22+i); printf("���������������������������������������������������������");
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
gotoxy(40,4+i);  printf("���������������������������������Ŀ");
gotoxy(40,5+i);  printf("�le Matricule:  �%s              �",matricule);
gotoxy(40,6+i);  printf("���������������������������������Ĵ");
gotoxy(40,7+i);  printf("�la Marque:     �%s        ",marque);
gotoxy(40,8+i);  printf("���������������������������������Ĵ");
gotoxy(40,9+i);  printf("� la Puissance  �%d             ",puissance);
gotoxy(40,10+i); printf("���������������������������������Ĵ");
gotoxy(40,11+i); printf("�le Moteur:     �%s            ",moteur);
gotoxy(40,12+i); printf("���������������������������������Ĵ");
gotoxy(40,13+i); printf("�la Couleur:    �%s            ",couleur);
gotoxy(40,14+i); printf("���������������������������������Ĵ");
gotoxy(40,15+i); printf("�la Clim:       �%s                ",clim);
gotoxy(40,16+i); printf("���������������������������������Ĵ");
gotoxy(40,17+i); printf("�PriX Par Jour: �%d              ",prixJour);
gotoxy(40,18+i); printf("���������������������������������Ĵ");
gotoxy(40,19+i); printf("�Nb de place:   �%d                ",nbplace);
gotoxy(40,20+i); printf("���������������������������������Ĵ");
gotoxy(40,21+i); printf("�Voiture disp   �%d             ",nbrvoiture);
gotoxy(40,22+i); printf("���������������������������������Ĵ");
gotoxy(40,23+i); printf("�Nbr Reser      �%d       ",nbrreservation);
gotoxy(40,24+i); printf("�����������������������������������");



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
    gotoxy(20,3+co);  printf(" ����������������������������������������������������������������������������������������Ŀ");
    textcolor(14);
    gotoxy(20,4+co);printf (" �Donner le matricule de voiture que vous voulez(disponible a lagence) :�                 �");
    textcolor(15);
    gotoxy(20,5+co); printf(" ������������������������������������������������������������������������������������������");
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
gotoxy(40,4+i);  printf("���������������������������������Ŀ");
gotoxy(40,5+i);  printf("�le Matricule:  �%s             ",matricule);
gotoxy(40,6+i);  printf("���������������������������������Ĵ");
gotoxy(40,7+i);  printf("�la Marque:     �%s        ",marqu);
gotoxy(40,8+i);  printf("���������������������������������Ĵ");
gotoxy(40,9+i);  printf("� la Puissance  �%d             ",puis);
gotoxy(40,10+i); printf("���������������������������������Ĵ");
gotoxy(40,11+i); printf("�le Moteur:     �%s            ",mot);
gotoxy(40,12+i); printf("���������������������������������Ĵ");
gotoxy(40,13+i); printf("�la Couleur:    �%s            ",coul);
gotoxy(40,14+i); printf("���������������������������������Ĵ");
gotoxy(40,15+i); printf("�la Clim:       �%s                ",clim);
gotoxy(40,16+i); printf("���������������������������������Ĵ");
gotoxy(40,17+i); printf("�PriX Par Jour: �%d              ",prix);
gotoxy(40,18+i); printf("���������������������������������Ĵ");
gotoxy(40,19+i); printf("�Nb de place:   �%d                ",place);
gotoxy(40,20+i); printf("���������������������������������Ĵ");
gotoxy(40,21+i); printf("�Voiture disp   �%d             ",nbrvoiture);
gotoxy(40,22+i); printf("�����������������������������������");
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
gotoxy(20,24);  printf("�����������������������������������������������������������������������Ŀ");
gotoxy(20,25);  printf("�Date Resrvation Jours/Mois/Annes     �                                 � ");
gotoxy(20,26);  printf("�����������������������������������������������������������������������Ĵ");
gotoxy(20,27);  printf("�Date Fin Resrvation Jours/Mois/Annes �                                 � ");
gotoxy(20,28);  printf("�����������������������������������������������������������������������Ĵ");
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
gotoxy(20,29); printf("�La duree du location pour ce client est : %d Jour, %d mois et %d annees!  �", day, month, year);
textcolor(15);
gotoxy(20,30); printf("�������������������������������������������������������������������������");
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

    srand(time(NULL)); // Initialisation de la donn�e seed

    nombre = (rand() % (MAX + 1 - MIN)) + MIN; // MIN <= nombre <= MAX
ptr->clt.num=nombre;
gotoxy(40,4+i);  printf("�������������������������������������������������Ŀ");
gotoxy(40,5+i);  printf("�Saisir Votre Nom:      �                         �");
gotoxy(40,6+i);  printf("�������������������������������������������������Ĵ");
gotoxy(40,7+i);  printf("�Saisir votre Prenom:   �                         �");
gotoxy(40,8+i);  printf("�������������������������������������������������Ĵ");
gotoxy(40,9+i);  printf("�CIN                    �                         �");
gotoxy(40,10+i); printf("�������������������������������������������������Ĵ");
gotoxy(40,11+i); printf("�VILLE:                 �                         �");
gotoxy(40,12+i); printf("�������������������������������������������������Ĵ");
gotoxy(40,13+i); printf("�choisir un mot de passe�                         �");
gotoxy(40,14+i); printf("�������������������������������������������������Ĵ");
gotoxy(40,15+i); printf("�TELEPHONE:             �                         �");
gotoxy(40,16+i); printf("���������������������������������������������������");
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
gotoxy(40,4+i);  printf("������������������������������������������������Ŀ");
gotoxy(40,5+i);  printf("�Saisir Votre Nom:     �                         �");
gotoxy(40,6+i);  printf("������������������������������������������������Ĵ");
gotoxy(40,7+i);  printf("�Saisir votre Prenom:  �                         �");
gotoxy(40,8+i);  printf("������������������������������������������������Ĵ");
gotoxy(40,9+i);  printf("� CIN                  �                         �");
gotoxy(40,10+i); printf("������������������������������������������������Ĵ");
gotoxy(40,11+i); printf("�VILLE:                �                         �");
gotoxy(40,12+i); printf("������������������������������������������������Ĵ");
gotoxy(40,13+i); printf("�password:             �                         �");
gotoxy(40,14+i); printf("������������������������������������������������Ĵ");
gotoxy(40,15+i); printf("�TELEPHONE:            �                         �");
gotoxy(40,16+i); printf("��������������������������������������������������");
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
gotoxy(40,4+i);  printf("������������������������������������������������Ŀ");
gotoxy(40,5+i);  printf("�Saisir Votre Nom:     �                         ");
gotoxy(40,6+i);  printf("������������������������������������������������Ĵ");
gotoxy(40,7+i);  printf("�Saisir votre Prenom:  �                          ");
gotoxy(40,8+i);  printf("������������������������������������������������Ĵ");
gotoxy(40,9+i);  printf("� CIN                  �             ");
gotoxy(40,10+i); printf("������������������������������������������������Ĵ");
gotoxy(40,11+i); printf("�VILLE:                �            ");
gotoxy(40,12+i); printf("������������������������������������������������Ĵ");
gotoxy(40,13+i); printf("�password:             �            ");
gotoxy(40,14+i); printf("������������������������������������������������Ĵ");
gotoxy(40,15+i); printf("�TELEPHONE:            �                      ");
gotoxy(40,16+i); printf("��������������������������������������������������");
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
gotoxy(40,y); printf("�����������������������������������������Ŀ");
gotoxy(40,y+1); printf("�saisie 'oui'pour retour en arriere:      �");
gotoxy(40,y+2); printf("�����������������������������������������Ĵ");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�1- Affichages des voitures.      �");
gotoxy(40,5); printf("���������������������������������Ĵ");
gotoxy(40,6); printf("�2- Je reserve une voiture.       �");
gotoxy(40,7); printf("���������������������������������Ĵ");
gotoxy(40,8); printf("�3- Afficher Mes Information      �");
gotoxy(40,9); printf("���������������������������������Ĵ");
textcolor(4);
gotoxy(40,10);printf("�4-Menu                           �");
gotoxy(40,11);printf("���������������������������������Ĵ");
gotoxy(40,12);printf("�0-Fin Application                �");
gotoxy(40,13);printf("�����������������������������������");
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
gotoxy(40,4+i);  printf("���������������������������������Ŀ");
gotoxy(40,5+i);  printf("�Num:           �%d               ",num);
gotoxy(40,6+i);  printf("���������������������������������Ĵ");
gotoxy(40,7+i);  printf("�Nom:           �%s               ",nom);
gotoxy(40,8+i);  printf("���������������������������������Ĵ");
gotoxy(40,9+i);  printf("�Prenom         �%s                 ",prenom);
gotoxy(40,10+i); printf("���������������������������������Ĵ");
gotoxy(40,11+i); printf("�CIN:           �%d               ",cin);
gotoxy(40,12+i); printf("���������������������������������Ĵ");
gotoxy(40,13+i); printf("�VILLE:         �%s               ",ville);
gotoxy(40,14+i); printf("���������������������������������Ĵ");
gotoxy(40,15+i); printf("�password:      �%s                ",password);
gotoxy(40,16+i); printf("���������������������������������Ĵ");
gotoxy(40,17+i); printf("�TELEPHONE:     �%llu               ",telephone);
gotoxy(40,18+i); printf("�����������������������������������");
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
    gotoxy(40,3+i);  printf(" �����������������������������������������������������Ŀ");
    textcolor(14);
    gotoxy(40,4+i);printf (" �saisir le CIN de client a afficher:�                   ");
    textcolor(15);
    gotoxy(40,5+i); printf(" �������������������������������������������������������");
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
gotoxy(40,4+i);  printf("���������������������������������Ŀ");
gotoxy(40,5+i);  printf("�Num:           �%d               ",num);
gotoxy(40,6+i);  printf("���������������������������������Ĵ");
gotoxy(40,7+i);  printf("�Nom:           �%s               ",nom);
gotoxy(40,8+i);  printf("���������������������������������Ĵ");
gotoxy(40,9+i);  printf("� Prenom        �%s               ",prenom);
gotoxy(40,10+i); printf("���������������������������������Ĵ");
gotoxy(40,11+i); printf("�CIN:           �%d               ",cin);
gotoxy(40,12+i); printf("���������������������������������Ĵ");
gotoxy(40,13+i); printf("�VILLE:         �%s               ",ville);
gotoxy(40,14+i); printf("���������������������������������Ĵ");
gotoxy(40,15+i); printf("�password:      �%s                ",password);
gotoxy(40,16+i); printf("���������������������������������Ĵ");
gotoxy(40,17+i); printf("�TELEPHONE:     �%llu               ",telephone);
gotoxy(40,18+i); printf("�����������������������������������");

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
gotoxy(40,4+i);  printf("���������������������������������Ŀ");
gotoxy(40,5+i);  printf("�Num:           �%d               ",num);
gotoxy(40,6+i);  printf("���������������������������������Ĵ");
gotoxy(40,7+i);  printf("�Nom:           �%s               ",nom);
gotoxy(40,8+i);  printf("���������������������������������Ĵ");
gotoxy(40,9+i);  printf("� Prenom        �%s               ",prenom);
gotoxy(40,10+i); printf("���������������������������������Ĵ");
gotoxy(40,11+i); printf("�CIN:           �%d               ",cin);
gotoxy(40,12+i); printf("���������������������������������Ĵ");
gotoxy(40,13+i); printf("�VILLE:         �%s               ",ville);
gotoxy(40,14+i); printf("���������������������������������Ĵ");
gotoxy(40,15+i); printf("�password:      �%s                ",password);
gotoxy(40,16+i); printf("���������������������������������Ĵ");
gotoxy(40,17+i); printf("�TELEPHONE:     �%llu               ",telephone);
gotoxy(40,18+i); printf("�����������������������������������");



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

    gotoxy(30,4);printf("����������������������������������������������������������������Ŀ");
    gotoxy(30,5);printf("�saisir le cin de client a modifier:�                            �");
    gotoxy(30,6);printf("������������������������������������������������������������������");

    gotoxy(68,5);scanf ("%d",&cinx);
    while(!feof(Fc)){

    fscanf(Fc,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",&num,nom,prenom,&cin,ville,password,&telephone,&nbrreservationc);
    if(cin==cinx){
    trouve=1;
    do{
   textcolor(13);
    gotoxy(30,8);   printf("������������������������������������������������Ŀ");
    gotoxy(30,9);   printf("�tapez 1 pour    � Modification Nom Client.      � ");
    gotoxy(30,10);  printf("������������������������������������������������Ĵ");
    gotoxy(30,11);  printf("�tapez 2 pour    � Modification Prenom Client.   �");
    gotoxy(30,12);  printf("������������������������������������������������Ĵ");
    gotoxy(30,13);  printf("�tapez 3 pour    � Modification cin Client.      �");
    gotoxy(30,14);  printf("������������������������������������������������Ĵ");
    gotoxy(30,15);  printf("�tapez 4 pour    � Modification ville Client.    �");
    gotoxy(30,16);  printf("������������������������������������������������Ĵ");
    gotoxy(30,17);  printf("�tapez 5 pour    � Modification password Client. �");
    gotoxy(30,18);  printf("������������������������������������������������Ĵ");
    gotoxy(30,19);  printf("�tapez 6 pour    � Modification Telephone Client �");
    gotoxy(30,20);  printf("������������������������������������������������Ĵ");
    gotoxy(30,21);  printf("�tapez 0 pour    � Fin Moddification\n           �");
    gotoxy(30,22);  printf("��������������������������������������������������");
    textcolor(15);
    gotoxy(30,23); printf("�������������������������������������������������������Ŀ");
    gotoxy(30,24); printf("�quelle modication souhaitez vous faire: �              �");
    gotoxy(30,25); printf("���������������������������������������������������������");
    textcolor(13);
    gotoxy(75,24);scanf("%d",&modiff);
    textcolor(15);
switch(modiff){
case 1: {
    gotoxy(30,27); printf("������������������������������������������Ŀ");
    gotoxy(30,28); printf("�Saisir le nouveau nom      �              �");
    gotoxy(30,29); printf("��������������������������������������������");
    gotoxy(61,28); scanf("%s",&nom);
break;}
case 2 :{
    gotoxy(30,27); printf("������������������������������������������Ŀ");
    gotoxy(30,28); printf("� Saisir le nouveau prenom  �              �");
    gotoxy(30,29); printf("��������������������������������������������");
    gotoxy(61,28); scanf("%s",&prenom);
break;}
case 3 :{
     gotoxy(30,27); printf("������������������������������������������Ŀ");
    gotoxy(30,28);  printf("� Saisir le nouveau cin     �              �");
    gotoxy(30,29);  printf("��������������������������������������������");
    gotoxy(61,28);scanf("%d",&cin);
break;}
case 4 :{
    gotoxy(30,27); printf("������������������������������������������Ŀ");
    gotoxy(30,28); printf("�Saisir la nouvelle ville   �              �");
    gotoxy(30,29); printf("��������������������������������������������");
    gotoxy(61,28);scanf("%s",ville);
break;}
case 5 :{
    gotoxy(30,27); printf("������������������������������������������Ŀ");
    gotoxy(30,28); printf("�Saisir le nouvelle password�              �");
    gotoxy(30,29); printf("��������������������������������������������");
    gotoxy(61,28);scanf("%s",password);
break;}
case 6 :{
    gotoxy(30,27); printf("������������������������������������������Ŀ");
    gotoxy(30,28); printf("�Saisir le telephone        �              �");
    gotoxy(30,29); printf("��������������������������������������������");
    gotoxy(61,28);scanf("%llu",&telephone);
break;}
 default:
    gotoxy(30,27); printf("��������������������������Ŀ");
    gotoxy(30,28); printf("�    choix non valide      �");
    gotoxy(30,28); printf("����������������������������");


}

}while(modiff!=0);
    }
    fprintf(Ft,"%d\n%s\n%s\n%d\n%s\n%s\n%llu\n%d\n",num,nom,prenom,cin,ville,password,telephone,nbrreservationc);

    }

    if(trouve==0){
     system("cls");
   gotoxy(30,25); printf("�������������������������������������������Ŀ");
   gotoxy(30,26); printf("� Aucun client nexiste avec ce code         �");
   gotoxy(30,27); printf("���������������������������������������������");

    }
    else{
            system("cls");
   gotoxy(30,25); printf("�������������������������������������������Ŀ");
   gotoxy(30,26); printf("�Client modifiee avec succes                �");
   gotoxy(30,27); printf("���������������������������������������������");


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
gotoxy(40,3); printf("������������������������������������������������������������Ŀ");
gotoxy(40,4); printf("�saisir le CIN de client a supprimer�                          ",ch3);
gotoxy(40,5); printf("��������������������������������������������������������������");
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
       gotoxy(40,7); printf("����������������������������������������������Ŀ");
       gotoxy(40,8); printf("�Aucun client n'existe avec ce code a suprimmer�                          ",ch3);
       gotoxy(40,9); printf("������������������������������������������������");
      textcolor(15);
    }
    else{
          textcolor(2);
       gotoxy(40,7); printf("������������������������������Ŀ");
       gotoxy(40,8); printf("�Client supprimer avec succes  � ",ch3);
       gotoxy(40,9); printf("��������������������������������");
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
gotoxy(40,4+i);  printf("���������������������������������Ŀ");
gotoxy(40,5+i);  printf("�Num:           �%d               ",num);
gotoxy(40,6+i);  printf("���������������������������������Ĵ");
gotoxy(40,7+i);  printf("�Nom:           �%s               ",nom);
gotoxy(40,8+i);  printf("���������������������������������Ĵ");
gotoxy(40,9+i);  printf("� Prenom        �%s               ",prenom);
gotoxy(40,10+i); printf("���������������������������������Ĵ");
gotoxy(40,11+i); printf("�CIN:           �%d               ",cin);
gotoxy(40,12+i); printf("���������������������������������Ĵ");
gotoxy(40,13+i); printf("�VILLE:         �%s               ",ville);
gotoxy(40,14+i); printf("���������������������������������Ĵ");
gotoxy(40,15+i); printf("�RUE:           �%d                ",rue);
gotoxy(40,16+i); printf("���������������������������������Ĵ");
gotoxy(40,17+i); printf("�TELEPHONE:     �%d               ",telephone);
gotoxy(40,18+i); printf("���������������������������������Ĵ");
gotoxy(40,19+i); printf("�le Matricule:  �%s               �",mat);
gotoxy(40,20+i); printf("���������������������������������Ĵ");
gotoxy(40,21+i); printf("�la Marque:     �%s                ",marqu);
gotoxy(40,22+i); printf("���������������������������������Ĵ");
gotoxy(40,23+i); printf("�la Couleur:    �%s            ",coul);
gotoxy(40,24+i); printf("���������������������������������Ĵ");
gotoxy(40,25+i); printf("�PriX Par Jour: �%d              ",prix);
gotoxy(40,26+i); printf("���������������������������������Ĵ");
gotoxy(40,27+i); printf("�Date Reservation: �%d/%d/%d ",j,m,a);
gotoxy(40,28+i); printf("���������������������������������Ĵ");
gotoxy(40,29+i); printf("�Date FReservation: �%d/%d/%d ",jf,mf,af);
gotoxy(40,30+i); printf("���������������������������������Ĵ");
gotoxy(40,31+i); printf("�Duree:             �%[^\n] ",dureee);



gotoxy(40,32+i); printf("�����������������������������������");



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
gotoxy(40, 4+i); printf("�����������������������������������������������������������������������Ŀ");
gotoxy(40, 5+i); printf("�Nom:           �%s                                                 ",nom);
gotoxy(40, 6+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40, 7+i); printf("�Prenom         �%s                                              ",prenom);
gotoxy(40, 8+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40, 9+i); printf("�CIN:           �%d                                                 ",cin);
gotoxy(40,10+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40,11+i); printf("�VILLE:         �%s                                                ",ville);
gotoxy(40,12+i); printf("�����������������������������������������������������������������������Ĵ");
//gotoxy(40,13+i); printf("�RUE:           �%d                                                 ",rue);
//gotoxy(40,13+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40,13+i); printf("�TELEPHONE:     �%llu                                           ",telephone);
gotoxy(40,14+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40,15+i); printf("�le Matricule:  �%s                                                 ",mat);
gotoxy(40,16+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40,17+i); printf("�la Marque:     �%s                                               ",marqu);
gotoxy(40,18+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40,19+i); printf("�la Couleur:    �%s                                                ",coul);
gotoxy(40,20+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40,21+i); printf("�PriX Par Jour: �%d                                                ",prix);
gotoxy(40,22+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40,23+i); printf("�DateReservation�%d/%d/%d                                        ",j,m,a);
gotoxy(40,24+i); printf("�����������������������������������������������������������������������Ĵ");
gotoxy(40,25+i); printf("�DateRetour   : �%d/%d/%d                                       ",jf,mf,af);
gotoxy(40,26+i); printf("�����������������������������������������������������������������������Ĵ");
textcolor(2);
gotoxy(40,27+i); printf("�Duree:         �%s                                                               ",dureee);
gotoxy(40,28+i); printf("�������������������������������������������������������������������������");
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

gotoxy(20,2); printf(" ����������������������������������������������������������������������������������������Ŀ");
    textcolor(15);
gotoxy(20,3); printf (" � le chiffre d'affaire est :                        �%d                               �",sum);
    textcolor(15);
gotoxy(20,4); printf(" ������������������������������������������������������������������������������������������");
/*gotoxy(40, 1); printf("�����������������������������������������������������������������������Ŀ");
gotoxy(40, 2); printf("�le chiffre d'affaire est           �%d                                               � ",sum);
gotoxy(40, 3); printf("�����������������������������������������������������������������������Ĵ");
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
gotoxy(20,3);  printf("�����������������������������������������������������������������������������Ŀ");
textcolor(2);

gotoxy(20,4);  printf("�         BIENVENNUE, NOUS AVONS L'HONNEUR DE VOTRE VISITER .                 �");
textcolor(15);

gotoxy(20,5);  printf("�                                                                             �");
gotoxy(20,6);  printf("� l'objectif de notre nouvelle application est de faciliter la location       �");
gotoxy(20,7);  printf("�                                                                             �");

gotoxy(20,8);  printf("�des voitures dans nos quotidienne pour vous comme nos cheres clients et meme �");
gotoxy(20,9);  printf("�                                                                             �");

gotoxy(20,10); printf("� pour nous . cette facilitee apparait sur l'utilisation de notre application.�");
gotoxy(20,11); printf("�                                                                             �");

gotoxy(20,12); printf("� nous avons bien travailles sur la clarte des etapes pour creer un compte    �");
gotoxy(20,13); printf("�                                                                             �");

gotoxy(20,14); printf("� et pour voir aussi nos catalogues des voitures en ligne.                    �");
gotoxy(20,15); printf("�                                                                             �");

gotoxy(20,16); printf("� et vous pouvez choisir que vous voulez en alaise.aussi vous pouvez faire    �");
gotoxy(20,17); printf("�                                                                             �");

gotoxy(20,18); printf("� une reservation avec une grande  securite , grace a la creation du compte   �");
gotoxy(20,19); printf("�                                                                             �");

gotoxy(20,20); printf("� personnel . notre application vous accordez la confidantialite ,            �");
gotoxy(20,21); printf("�                                                                             �");

gotoxy(20,22); printf("� et de garder vos informations  chez nous  a fin de ne repeter  pas          �");
gotoxy(20,23); printf("�                                                                             �");

gotoxy(20,24); printf("� les memes etapes sur une autre reservation dans l'avenir                    �");
gotoxy(20,25); printf("�������������������������������������������������������������������������������");

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
gotoxy(20,3);  printf("������������������������������������������������������������������������������Ŀ");
gotoxy(20,4);  printf("�Avec un grand travail qui etait pas facile nous avons pu organiser et realiser�");
gotoxy(20,5);  printf("�                                                                              �");

gotoxy(20,6);  printf("� cette application grace a ces trois personnes:                               �");
gotoxy(20,7);  printf("������������������������������������������������������������������������������Ĵ");


textcolor(2);

gotoxy(20,8);  printf("�  Youssef Ouahassoune                                                         �");
gotoxy(20,9);  printf("������������������������������������������������������������������������������Ĵ");

//gotoxy(20,9);  printf("�                                                                          �");

gotoxy(20,10); printf("� Ghizlane nemrouche                                                           �");
gotoxy(20,11); printf("������������������������������������������������������������������������������Ĵ");

//gotoxy(20,11); printf("�                                                                              �");

gotoxy(20,12); printf("� Nihal saidy                                                                  �");
gotoxy(20,13); printf("��������������������������������������������������������������������������������");
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
gotoxy(20,6);  printf("������������������������������������������������������������������������������Ŀ");
gotoxy(20,7);  printf("�depuis toujours nous travaillons sur l'amelioration de nos services ,         �");
gotoxy(20,8);  printf("�                                                                              �");

gotoxy(20,9);  printf("�pour cela nous vous accordons des bonus ,mais avec une petite condition       �");
gotoxy(20,10); printf("�                                                                              �");

gotoxy(20,11); printf("�si,par exemple vous avez reservee cinq fois ou plus ,vous aurez  une reduction�");
gotoxy(20,12); printf("�                                                                              �");

gotoxy(20,13); printf("� de 30 pour cent .et merci                                                    �");
gotoxy(20,14); printf("��������������������������������������������������������������������������������");



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
gotoxy(40,3);  printf("�������������������������������������Ŀ");
gotoxy(40,4);  printf("� %c1.  Interet de ce projet:          �",ch3);
gotoxy(40,5);  printf("�������������������������������������Ĵ");
gotoxy(40,6);  printf("� %c2.  Nos offres:                   �",ch3);
gotoxy(40,7);  printf("�������������������������������������Ĵ");
gotoxy(40,8);  printf("� %c3.  Les Realisateures de ce projet:�",ch3);
gotoxy(40,9);  printf("�������������������������������������Ĵ");
textcolor(2);

gotoxy(40,10); printf("� %c4.Retour au menu                   �",ch3);
textcolor(15);

gotoxy(40,11); printf("���������������������������������������");
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
gotoxy(40,3);  printf("�������������������������������������Ŀ");
gotoxy(40,4);  printf("� %c1.nombre maximal de reservation    �",ch3);
gotoxy(40,5);  printf("�������������������������������������Ĵ");
gotoxy(40,6);  printf("� %c2.Les clients fideles              �",ch3);
gotoxy(40,7);  printf("�������������������������������������Ĵ");
gotoxy(40,8);  printf("� %c3.chiffre d'affaire de l'agence    �",ch3);
gotoxy(40,9);  printf("�������������������������������������Ĵ");
gotoxy(40,10); printf("� %c4.retour au menu                   �",ch3);
gotoxy(40,11); printf("���������������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�             %c1.CLIENT           �",ch3);
gotoxy(40,5); printf("���������������������������������Ĵ");
gotoxy(40,6); printf("�             %c2.AGENCE           �",ch3);
textcolor(3);
gotoxy(40,7); printf("���������������������������������Ĵ");
gotoxy(40,8); printf("�         %c  A PROPOS NOUS        �",ch6);
gotoxy(40,9); printf("�����������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�    %c1_ Creation Account         �",ch3);
gotoxy(40,5); printf("���������������������������������Ĵ");
gotoxy(40,6); printf("�    %c2_ Deja Client              �",ch3);
gotoxy(40,7); printf("�����������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�1- Saisir Vos Information.       �"); //il faut changer la rue avec password
gotoxy(40,5); printf("���������������������������������Ĵ");
textcolor(4);
gotoxy(40,6); printf("�2-Menu                           �");
gotoxy(40,7); printf("���������������������������������Ĵ");
gotoxy(40,8);  printf("�0-Fin Application                �");
gotoxy(40,9); printf("�����������������������������������");
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
    gotoxy(40,3);  printf(" �����������������������������������������������������Ŀ");
    textcolor(14);
    gotoxy(40,4);printf (" �saisir Votre CIN :                 �                   ");
    textcolor(15);
    gotoxy(40,5); printf(" �������������������������������������������������������");
     gotoxy(40,6);printf (" �saisir Votre PASSWORD :            �                   ");
    textcolor(15);
    gotoxy(40,7); printf(" �������������������������������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�          Enter Password:        �");
gotoxy(40,5); printf("�����������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�1- Saisir un nouveau client.     �");
gotoxy(40,5); printf("���������������������������������Ĵ");
gotoxy(40,6); printf("�2- Afficher les clients par num. �");
gotoxy(40,7); printf("���������������������������������Ĵ");
gotoxy(40,8); printf("�3- Saisir une nouvelle voiture.  �");
gotoxy(40,9); printf("���������������������������������Ĵ");
gotoxy(40,10); printf("�4- Affichages des voitures.      �");
gotoxy(40,11); printf("���������������������������������Ĵ");
gotoxy(40,12); printf("�5- Affichage de tout les clients �");
gotoxy(40,13); printf("���������������������������������Ĵ");
gotoxy(40,14); printf("�6- Modification.                 �");
gotoxy(40,15); printf("���������������������������������Ĵ");
gotoxy(40,16); printf("�7- Supprimer Un Client.          �");
gotoxy(40,17); printf("���������������������������������Ĵ");
gotoxy(40,18); printf("�8- Statistique                   �");
gotoxy(40,19); printf("���������������������������������Ĵ");
gotoxy(40,20); printf("�9- Je reserve Pour Un Client.    �");
gotoxy(40,21); printf("���������������������������������Ĵ");
gotoxy(40,22); printf("�10- CONTRAT.                     �");
gotoxy(40,23); printf("���������������������������������Ĵ");
gotoxy(40,24); printf("�11-Menu                          �");
textcolor(4);
gotoxy(40,25); printf("���������������������������������Ĵ");
gotoxy(40,26); printf("�0-Fin Application                �");
gotoxy(40,27); printf("�����������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�             %cFRANCAIS           �",ch1);
gotoxy(40,5); printf("���������������������������������Ĵ");
gotoxy(40,6); printf("�             %cENGLISH            �",ch1);
gotoxy(40,7); printf("�����������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�             %c1.customer         �",ch3);
gotoxy(40,5); printf("���������������������������������Ĵ");
gotoxy(40,6); printf("�             %c2.agency           �",ch3);
gotoxy(40,7); printf("���������������������������������Ĵ");
gotoxy(40,8); printf("�             %c3.ABOUT US         �",ch3);
gotoxy(40,9); printf("�����������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�    %c1_ Creation Account         �",ch3);
gotoxy(40,5); printf("���������������������������������Ĵ");
gotoxy(40,6); printf("�    %c2_ Already Client           �",ch3);
gotoxy(40,7); printf("�����������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�1- Enter your information.       �"); //il faut changer la rue avec password
gotoxy(40,5); printf("���������������������������������Ĵ");
textcolor(4);
gotoxy(40,6); printf("�2-Flashback                      �");
gotoxy(40,7); printf("���������������������������������Ĵ");
gotoxy(40,8);  printf("�0-End of application             �");
gotoxy(40,9); printf("�����������������������������������");
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
    gotoxy(40,5);  printf(" �����������������������������������������Ŀ");
    textcolor(14);
    gotoxy(40,6);  printf (" �enter your CIN :       �                   ");
    textcolor(15);
    gotoxy(40,7);  printf(" �������������������������������������������");
    gotoxy(40,8); printf (" �enter your PASSWORD :  �                    ");
    textcolor(15);
    gotoxy(40,9); printf(" �������������������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�          Enter Password:        �");
gotoxy(40,5); printf("�����������������������������������");
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
gotoxy(40,3); printf("���������������������������������Ŀ");
gotoxy(40,4); printf("�1- Enter a new customer.         �");
gotoxy(40,5); printf("���������������������������������Ĵ");
gotoxy(40,6); printf("�2- View clients by CIN.          �");
gotoxy(40,7); printf("���������������������������������Ĵ");
gotoxy(40,8); printf("�3- Enter a new car.              �");
gotoxy(40,9); printf("���������������������������������Ĵ");
gotoxy(40,10); printf("�4- Car displays.                 �");
gotoxy(40,11); printf("���������������������������������Ĵ");
gotoxy(40,12); printf("�5-View all clients.              �");
gotoxy(40,13); printf("���������������������������������Ĵ");
gotoxy(40,14); printf("�6-Modification.                  �");
gotoxy(40,15); printf("���������������������������������Ĵ");
gotoxy(40,16); printf("�7-Delete a client.               �");
gotoxy(40,17); printf("���������������������������������Ĵ");
gotoxy(40,18); printf("�8-Statistics                     �");
gotoxy(40,19); printf("���������������������������������Ĵ");
gotoxy(40,20); printf("�9-I book for a client.           �");
gotoxy(40,21); printf("���������������������������������Ĵ");
gotoxy(40,22); printf("�10- CONTRACT.                    �");
gotoxy(40,23); printf("���������������������������������Ĵ");
gotoxy(40,24); printf("�11-Flashback                     �");
textcolor(4);
gotoxy(40,25); printf("���������������������������������Ĵ");
gotoxy(40,26); printf("�0-End of application             �");
gotoxy(40,27); printf("�����������������������������������");
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
