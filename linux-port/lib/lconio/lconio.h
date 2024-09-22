#ifndef LCONIO_H_
#define LCONIO_H_

#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <stdbool.h>

typedef struct termios termios;

int getch();

#endif
