#include "main.h"

/**
 * times_table - Prints out the full 9 times table.
 */
void times_table(void)
{
    int x, y, sol;

    for (x = 0; x <= 9; x++)
    {
        for (y = 0; y <= 9; y++)
        {
            sol = x * y;

            if (y > 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (sol < 10)
                _putchar(' ');
            else
                _putchar((sol / 10) + '0');

	    _putchar((sol % 10) + '0');
        }
        _putchar('\n');
    }
}
