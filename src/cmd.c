#include "../inc/cmd.h"

void make(const char *file)
{
    char command[100] = {};
    sprintf(command, "gcc -Wall %s.c -o %s.exe", file, file);
    system(command);
}

void run(const char *file)
{
    char command[100] = {};
    sprintf(command, ".\\%s", file);
    system(command);
}

void delete(const char *file)
{
    char command[100] = {};
    sprintf(command, "del /Q %s.exe", file);
    system(command);
}