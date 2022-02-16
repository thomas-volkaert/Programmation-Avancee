#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SDL.h>
#include <SDL_types.h>

#define HEIGHT 400
#define WIDTH 400

void pause(){
	SDL_Event event;
	SDL_WaitEvent(&event);
}

void dessine(SDL_Surface * s){
	int i,j;
	SDL_FillRect(s,NULL,SDL_MapRGB(s->format, 10,10,5) ) ;
	SDL_Rect position;
	for(i=50;i<1000;i=i+100){
		for(j=0;j<1000;j=j+50){
			position.x = i-j;
			position.y=j;
			SDL_Surface *Blanc=NULL;
			Blanc = SDL_CreateRGBSurface(SDL_HWSURFACE,50,50,32,0,0,0,0) ;
			SDL_FillRect(Blanc,NULL,SDL_MapRGB(Blanc-> format, 255,255,255));
			SDL_BlitSurface(Blanc,NULL,s,&position);
		}
	}
 	SDL_Flip(s) ;
 	pause() ;
}



int main(int argc, char ** argv){
// Initialiation
if(SDL_Init(SDL_INIT_VIDEO) !=0){
 fprintf(stderr,"\nUnable to initialize SDL: %s\n", SDL_GetError() );
 exit(EXIT_FAILURE) ;
 }
//création de la surface principale
SDL_Surface * ecran = NULL ;
if((ecran = SDL_SetVideoMode(WIDTH,HEIGHT,32, SDL_HWSURFACE))==NULL){
 fprintf(stderr,"Erreur VideoMode %s\n",SDL_GetError());
 exit(EXIT_FAILURE) ;
}
// Légende de la fenêtre
SDL_WM_SetCaption("Légende de la fenêtre",NULL) ;
//Remplissage de la fenêtre en noir
SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format, 0,0,0) ) ;
//////////////////////////////////////////////////////////////////////////////////////

//création 2ème surface


//Afficher les modifications
SDL_Flip(ecran) ;
//Appel à une fonction qui dessine
dessine(ecran);
SDL_Flip(ecran) ;
pause() ;
// Quit
SDL_Quit() ;
return EXIT_SUCCESS ;
}
