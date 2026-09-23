/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:17:58 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/09/23 17:37:05 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	if (!tab || !f)
		return (0);
	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*
int	is_capital(char *str)
{
	if (str && str[0] >= 'A' && str[0] <= 'Z')
		return (1);
	return (0);
}

int	main(void)
{
	char *array[] = {
		"Apple",
		"banana",
		"Cat",
		"dog",
		"Elephant",
		NULL
	};

	int result = ft_count_if(array, &is_capital);

	printf("Broj stringova koji pocinju velikim slovom: %d\n", result);
	printf("Ocekivani rezultat: 3\n");

	return (0);
}*/