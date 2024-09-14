#include "../inc/main.h"

#define C_IS_NOT_CORRECT 1

int main(int argc, char* argv[])
{
    const char *file = argv[1];

    make(file);

    printf("y - run & delete\n");
    printf("Y - run\n");
    printf("n - delete\n");
    printf("N - none\n");

    char c;
    
    while (C_IS_NOT_CORRECT)
    {
        c = getch();

        if (
            c!='y' &&
            c!='Y' &&
            c!='n' &&
            c!='N'
        )
        {
            printf("\a");
            continue;
        }

        switch (c)
        {
            case 'y':
                run(file);
                delete(file);
                break;

            case 'Y':
                run(file);
                break;

            case 'n':
                delete(file);
                break;

            case 'N':
                break;
        }

        break;
    }

    return 0;
}