#include<stdio.h>
#include<stdlib.h>
#include"utils.h"
#include"list.h"

int main(int argc, char ** argv){
    FILE *in_file, *out_file;

    open_read(&in_file, "les_miserables.txt");
    open_write(&out_file, "out.txt");

    parcourir(list, in_file);
    write_results(list, out_file);

    return EXIT_SUCCESS;
}
