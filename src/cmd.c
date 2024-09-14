#include "../inc/cmd.h"

void make(const char *file)
{
    char command[100] = {};
    sprintf(command, "gcc -Wall %s.c -o %s.exe", file, file);
    system(command);
}