#include "../inc/main.h"


int main(int argc, char* argv[])
{
    const char *file = argv[1];

    make(file);

    printf("y - run & delete\n");
    printf("Y - run\n");
    printf("n - delete\n");
    printf("N - none\n");

    char c = getch();

    return 0;
}