#include <stdio.h>
struct ELEMENT{int occurence; char *mot; struct ELEMENT *suivant;} ;
typedef struct {struct ELEMENT *head; struct ELEMENT tail;} LIST;

void parcourir(LIST *list, FILE *file);
void add_word(LIST *list, char * word);
void liberer(LIST *list);
