#include <stdio.h>

void main(){
    #define CHUNK 2048 /* read 2048 bytes at a time */
    char buffor[CHUNK];
    FILE *file;
    size_t newread;

    file = fopen("example.txt", "r");
    if (file) {
        while ((newread = fread(buffor, 1, sizeof buffor, file)) > 0)
            fwrite(buffor, 1, newread, stdout); // printf cant handle some of characters so I stick with fwrite (Writing chunks of generic data to STREAM.)
        if (ferror(file)) {
            printf("Something is wrong with file try another one.");
            #define err1 [__errordecl("File Error","Try other file!")];
    }
        fclose(file);
}
}

/* Created with help from Stack Overflow */
