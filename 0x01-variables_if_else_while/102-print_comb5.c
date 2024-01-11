#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 0
 */
int main(void)
{
	int ix, iy, jx, jy;

	for (ix = 0; ix <= 9; ix++)
	{
		iy = 0;
		while (iy <= 9)
		{
			jx = 0;
			while (jx <= 9)
			{
				jy = 0;
				for (; jy <= 9; jy++)
				{
					if ((ix == jx) && (iy == jy))
						continue;
					if ((ix * 10 + iy) > (jx * 10 + jy))
						continue;
					if (ix > jx)
						continue;
					putchar(ix + 48);
					putchar(iy + 48);
					putchar(' ');
					putchar(jx + 48);
					putchar(jy + 48);

					putchar(',');
					putchar(' ');
				}
				jx++;
			}
			iy++;
		}
	}

	putchar('\n');

	return (0);
}
