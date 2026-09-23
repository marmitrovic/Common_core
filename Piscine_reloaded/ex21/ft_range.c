/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:38:08 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/09/23 13:06:42 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	*res;
	int	min = 5;
	int	max = 10;
	int	i;

	res = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("res[%d] = %d\n", i, res[i]);
		i++;
	}
	free(res);
	return (0);
}*/