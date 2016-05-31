#include <stdio.h>

#define ACCENT1_2OCT 0xc3
#define ACCENT2_2OCT 0xc5 
#define PONCT2OCT 0xc2 
#define PONCT3OCT 0xE2
#define CR1 0x0D
#define CR2 0x0A
#define SPACE 0x20

struct ELEMENT{int occurence; char *word; struct ELEMENT *next;} ;
typedef struct {struct ELEMENT *head; struct ELEMENT *tail;} LIST;

void parcourir(LIST *list, FILE *file){
    int c;
    while((c = fgetc(file)) != EOF){
	/*
	 * Initialisation du mot
	 */
	
	/*
	 * Vérification du char et entrée dans l'élément
	 * Si retour à la ligne ou espace commence un nouvel elem
	 */
	if(c==(ACCENT1_2OCT || ACCENT2_2OCT || PONCT2OCT)){
	}
	else if(c==(PONCT3OCT)){
	}
	else if(c==(SPACE || CR1 || CR2)){
	}
	else{
	}
    }
}

void add_word(LIST *list, char * word){
    struct ELEMENT old_ele;
    while()
}

void liberer(LIST *list){
}
