/*
 * Auteur: Alexandre Lafaye
 * Labo08: Listes chaînées
 *
 * But: Gérer des listes chaînées.
 *
 * Date: 24.05.2016
 */

int open_read(FILE ** in_file, char * in_file_name);

int open_write(FILE ** out_file, char * out_file_name);

void write_results(LISTE * list, FILE * out_file);
