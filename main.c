#include <stdio.h>
#include "ft_printf.h"

int	main(int argc, char **argv)
{
	int	original;
	int	ft;
	int	test;

	test = atoi(argv[1]);
	original = 0;
	ft = 0;
	if (argc == 2)
	{

		original = printf(" %d ", test);
		ft = ft_printf(" %d ", test);
		printf("\n");
		printf("%i %i", original, ft);
		printf("\n");
		original = printf(" %i ", test);
		ft = ft_printf(" %i ", test);
		printf("\n");
		printf("%i %i", original, ft);
		printf("\n");
		original = printf("%p", test);
		ft = ft_printf("%p", test);
		printf("\n");
		printf("%i %i", original, ft);
		printf("\n");
		return (0);
	}
	else
		printf("Here is what was printed %s\n", argv[1]);
		ft_printf("Here is what was printed %s\n", argv[1]);
		return (0);
}
