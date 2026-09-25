#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		line_count;

	line_count = 1;
	// Otvaramo test.txt u read-only modu
	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Greska pri otvaranju fajla!\n");
		return (1);
	}
	printf("--- POCETAK TESTIRANJA ---\n\n");
	// Citamo liniju po liniju u petlji
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Linija %d: %s", line_count, line);
		free(line); // OBAVEZNO oslobadjamo liniju koju nam je GNL vratio!
		line_count++;
	}
	printf("\n--- KRAJ FAJLA (GNL je vratio NULL) ---\n");
	close(fd);
	return (0);
}