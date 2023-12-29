#include "pgm.h"
#include "mandelbrot.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void create_image(char *path, int nrows, int ncols)
{
    FILE *fd = fopen(path, "w+");

    if (fd == NULL)
    {
        return -1;
    }
    




    fclose(fd);
}



int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr, "Uso: %s <nome file> <max iterazioni> <nrows>\n", argv[0]);
        return 1;
    }

    const char *path = argv[1];
    int maxIter = atoi(argv[2]);
    int nrows = atoi(argv[3]);
    int ncols = 1.5 * nrows;
    double r = 2.0;

    create_image(path, nrows, ncols, maxIter, r);

    return 0;
}