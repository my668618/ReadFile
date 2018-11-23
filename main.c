#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text;
    FILE *file;
    file = fopen("C:\\readMe.txt", "r");
    if (file == NULL)
    {
        printf("Cannot open file!");
    }
    else
    {
        fscanf(file, "%c", &text);
        printf("Contents: %c", text);
        fclose(file);
    }
}
