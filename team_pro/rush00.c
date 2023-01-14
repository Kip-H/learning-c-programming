#include <unistd.h>

void rush(int x, int y)
{
    char box;
    char nextline;

    nextline = '\n';
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (i == 0)
            {
                if (j == 0)
                    box = 'A';
                else if (j == y - 1)
                    box = 'C';
                else
                    box = 'B';
            }
            else if (i == x - 1)
            {
                if (j == 0)
                    box = 'C';
                else if (j == y - 1)
                    box = 'A';
                else
                    box = 'B';
            }
            else
            {
                if (j == 0 || j == y - 1)
                    box = 'B';
                else
                    box = ' ';
            }
            write(1, &box, 1);
        }
        write(1, &nextline, 1);
    }
}

int main()
{
    rush(4, 4);
}
