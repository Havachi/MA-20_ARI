#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//Constante
#define NUMERO_VERSION 0.1
#define HORIZONTAL_MAX 10
#define VERTICAL_MAX 10
//Variable Globale
int bateaurestants;
int GrilleDeJeu[HORIZONTAL_MAX][VERTICAL_MAX] =
{{0,1,1,1,1,0,0,0,0,0},
 {0,0,1,0,0,0,0,0,0,0},
 {0,0,0,1,1,1,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,1,0,0,0,0,0,0},
 {0,0,0,1,0,0,1,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};



int AfficherMenu()
{//MENU PRINCIPAL
     int rmenu;
     float version=NUMERO_VERSION;
            printf("Version %f\n",version);//Version
            printf("\n\n\n\n\n\n\n\n\n");

           //image bateau principale
            printf("                                     |__\n");
            printf("                                     |\\/\n");
            printf("                                     ---\n");
            printf("                                     / | [  \n");
            printf("                              !      | |||\n");
            printf("                            _/|     _/|-++'\n");
            printf("                        +  +--|    |--|--|_ |-\n");
            printf("                     { /|__|  |/\\__|  |--- |||__/\n");
            printf("                    +---------------___[}-_===_.'____                 /\\\n");
            printf("                ____`-' ||___-{]_| _[}-  |     |_[___\\==--            \\/   _\n");
            printf(" __..._____--==/___]_|__|_____________________________[___\\==--____,------' . \n");
            printf("|                                                                            /\n");
            printf(" \\_____________________________________________________Cheeki Breeki_______/\n");
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
            printf("%c1: Solo	2:Multijoueur(Developpement)	3:Quitter%c\n",179,179);
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);

           //Entrée et verification menu.


            printf("%c%c%c%c%c%c%c%c%c\n",218,196,196,196,196,196,196,196,196);
            do
            {
                printf("%c",179);
                scanf("%d",&rmenu);
                if(rmenu!=1&&rmenu!=2&&rmenu!=3) printf("%cR‚ponse Invalide!\n",179);
            }while(rmenu!=1&&rmenu!=2&&rmenu!=3);

        system("cls");
        return rmenu;
    }
int main()
{
    while(1){
       int rmenu;
       rmenu = AfficherMenu();
       switch(rmenu){
            case 1:{
                do{
                    afficheGrille();
                }while(bateaurestants>0);

            }
       }
    }
}
int afficheGrille(){
bateaurestants = 10;
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
Sleep(500);
printf("%c %d %d %d %d %d %d %d %d %d %d %c \n",186,GrilleDeJeu[0][0],GrilleDeJeu[0][1],GrilleDeJeu[0][2],GrilleDeJeu[0][3],GrilleDeJeu[0][4],GrilleDeJeu[0][5],GrilleDeJeu[0][6],GrilleDeJeu[0][7],GrilleDeJeu[0][8],GrilleDeJeu[0][9],186);
Sleep(500);
printf("%c %d %d %d %d %d %d %d %d %d %d %c \n",186,GrilleDeJeu[1][1],GrilleDeJeu[1][1],GrilleDeJeu[1][2],GrilleDeJeu[1][3],GrilleDeJeu[1][4],GrilleDeJeu[1][5],GrilleDeJeu[1][6],GrilleDeJeu[1][7],GrilleDeJeu[1][8],GrilleDeJeu[1][9],186);
Sleep(500);
printf("%c %d %d %d %d %d %d %d %d %d %d %c \n",186,GrilleDeJeu[2][1],GrilleDeJeu[2][1],GrilleDeJeu[2][2],GrilleDeJeu[2][3],GrilleDeJeu[2][4],GrilleDeJeu[2][5],GrilleDeJeu[2][6],GrilleDeJeu[2][7],GrilleDeJeu[2][8],GrilleDeJeu[2][9],186);
Sleep(500);
system("cls");


}
