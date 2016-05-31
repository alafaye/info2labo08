/*
 * Auteur: Alexandre Lafaye
 * Labo07: Files, args.
 *
 * But: Le but de ce laboratoire est de gérer l'ouverture/fermeture
 * des fichiers et les arguments dans le main.
 *
 * Date: 03.05.2016
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

#define LIMIT_SIZE_PASS 128

/* Returns EXIT_SUCCESS or EXIT_FAILURE */
int open_read(FILE ** in_file, char * in_file_name){

    /* First check if input file exists */
    if((*in_file = fopen(in_file_name, "rb")) == NULL){
        printf("Le fichier d'entrée n'existe pas!");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

/* Returns EXIT_SUCCESS or EXIT_FAILURE */
int open_write(FILE ** out_file, char * out_file_name){

    char accept;
    /* Then check if output file exists */
    if((*out_file = fopen(out_file_name, "rb")) != NULL){
        fclose(*out_file);
        /* Asking if the file need to be deleted */
        printf("Le fichier de sortie : %s existe déjà, l'écraser? [y/n] : ",
                out_file_name);
        if(scanf("%c", &accept)!=1){
            return EXIT_FAILURE;
        }
        while(getchar()!='\n');

        if(accept=='y'){
            if((*out_file = fopen(out_file_name, "wb")) == NULL){
                printf("Echec de l'ouverture du fichier de sortie!");
                return EXIT_FAILURE;
            }
        }
        else{
            fclose(*out_file);
            return EXIT_FAILURE;
        }
    }
    else if((*out_file = fopen(out_file_name, "wb")) == NULL){
        printf("Echec de l'ouverture du fichier de sortie!");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

void write_results(LIST * list, FILE * out_file){
    char c;
    struct ELEMENT old_ele;
    struct ELEMENT ele=*list->head;
    while(ele.suivant != NULL){
        while((c = fgetc(ele.mot)) != '\0'){
            fputc(c, out_file);
        }
    }
}
