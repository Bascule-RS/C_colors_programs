/*******************************************************
Nom ......... : rand_colors.c
Role ........ : Little linux terminal program that print
                each caracter of a string in a 1 second
                screen with  multiple random color backgrounds
Auteur ...... : Nicolas Tercé
Version ..... : V1.1 aug/sept 2020
Licence ..... : free
Compilation :
gcc -Wall rand_colors.c -o rand
Pour exécuter, tapez : ./rand
********************************************************/
# include <stdio.h>
# include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BLKHB "\e[0;100m"
#define REDHB "\e[0;101m"
#define GRNHB "\e[0;102m"
#define YELHB "\e[0;103m"
#define BLUHB "\e[0;104m"
#define MAGHB "\e[0;105m"
#define CYNHB "\e[0;106m"
#define WHTHB "\e[0;107m"
#define saisie_length 50
char saisie[saisie_length];

int rando(char  );
int ecran(char c);



int rando(char  lettre)
{
  int nb=(int)(rand() / (double)RAND_MAX * (9- 1));
  printf("\e[0;10%dm%c",nb,lettre);
  return 0;
}

int ecran(char c)
{
  system("clear");
  for(int o=0; o<24;o++)
  {

for (int i=0; i<79;i++)
{
rando(c);

}
printf ("\n");
}
usleep(500000);
return 0;
}



int main(int k, char* entrees[])
{
scanf("mot:");
fgets (saisie,saisie_length , stdin);
char *pointeur = strtok (saisie, "\n");
printf("%s\n",saisie);
for(int p=0; p<strlen(pointeur);p++) ecran(pointeur[p]);
return 0;
}
