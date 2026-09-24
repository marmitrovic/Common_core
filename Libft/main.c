/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:56:54 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/09/24 13:27:15 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello 42 madrid", ' ');
	i = 0;
	while (result[i])
	{
		printf("Reč %d: %s\n", i, result[i]);
		i++;
	}
	return (0);
}
