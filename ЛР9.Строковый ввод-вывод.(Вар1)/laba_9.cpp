#include <stdio.h>

int main(int argc, char** argv)
{
    FILE* fin;
    FILE* fout;
    size_t size1, size2;
    char line[BUFSIZ];
    int line_num = 0;

    fin = fopen("file1.txt", "r");
    fout = fopen("file2.txt", "w");

    fseek(fin, 0, SEEK_END);
    size1 = ftell(fin);
    fseek(fin, 0, SEEK_SET);

    while(!feof(fin))
    {
        fgets(line, BUFSIZ, fin);
        ++line_num;
        if(line_num % 2 == 0)
            fputs(line, fout);
    }

    fseek(fout, 0, SEEK_END);
    size2 = ftell(fout);
    fseek(fout, 0, SEEK_SET);

    fclose(fout);
    fclose(fin);

    printf("file1.txt size: %ld\nfile2.txt size: %ld", size1, size2);
    return 0;
}
