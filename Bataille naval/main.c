#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define NUMERO_VERSION 0.1
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
    AfficherMenu();
    return 0;
}
