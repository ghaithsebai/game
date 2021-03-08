#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct 
	{
	char question[100];
	char reponse[100];
	char solution[100];
	}enigme;

void afficherEnigme(enigme e, SDL_Surface * screen);
void genererEnigme(enigme * e, char *nomfichier);
void sauvegarder (personne p, background b, char * nomfichier) ; 
void charger ( personne * p, background *b , char * nomfichier)
enigme generer();
void afficherEnigme(enigme e, SDL_Surface * screen);









#endif
