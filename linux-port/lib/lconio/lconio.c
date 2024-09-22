#include "lconio.h"

void switch_raw_mode(bool mode)
{
        termios term;
        if (mode)
        {
                // collecting current terminal state
                tcgetattr(STDIN_FILENO, &term);

                // disabling canon mode & char printing
                term.c_lflag &= ~(ICANON | ECHO);

                // installing new state of terminal
                tcsetattr(STDIN_FILENO, TCSANOW, &term);
        }
        else
        {
                // collecting current terminal state 
                tcgetattr(STDIN_FILENO, &term);

                // enabling canon mode & char printing
                term.c_lflag |= (ICANON | ECHO);

                // installing new state of terminal
                tcsetattr(STDIN_FILENO, TCSANOW, &term);
        }
}

int getch()
{
        switch_raw_mode(true);

        int c = getchar();

        switch_raw_mode(false);

        return c;
}
