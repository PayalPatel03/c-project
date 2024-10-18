#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int i;
    evenFile = fopen("evenfile.txt", "w");
    oddFile = fopen("oddfile.txt", "w");

    if (evenFile == NULL || oddFile == NULL) 
    {
        printf("Error opening file(s)!\n");
        return 1;
    }
    for (i = 50; i <= 70; i += 2) 
    {
        if (i > 50) 
        {
            fprintf(evenFile, ", ");
        }
        fprintf(evenFile, "%d", i);
    }
    for (i = 51; i < 70; i += 2) 
    {
        if (i > 51) 
        {
            fprintf(oddFile, ", ");
        }
        fprintf(oddFile, "%d", i);
    }
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers have been written to even_file.txt and odd_file.txt.\n");

    return 0;
}
