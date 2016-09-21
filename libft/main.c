#include "libft.h"
#include "ft_printf.h"
#include "ft_time.h"
#include "ft_random.h"
#include <stdio.h>

#define PCLOCK 		ft_printf("Clock : [%llu]\n", CLOCK)
#define PUTNB(a)	ft_printf(#a " = %i" ENDL, a)

int main (void)
{
	int i = 0, j = 0;
	uint32_t s, e;
	ft_printf("Bonjour il est {w:1:%hk} heure!\nClock  : [%llu] \n", TIME, CLOCK);
	s = CLOCK;
	while (i < 3000000)
	{
		PCLOCK;
		i = RAND(0,3000000);
		PUTNB(i);
		j++;
	}
	e = CLOCK;
	ft_printf("Nombre de boucles = %i\nTemps de boucle %f\n", j, CPS(e - s));
	printf("printf = %f\n", CPS(e -s));
	return (0);
}