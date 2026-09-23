/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 09:15:17 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/09/23 09:16:06 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	while (nb != 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(15));
	return (0);
}*/