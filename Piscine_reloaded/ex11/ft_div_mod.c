/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 08:57:18 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/09/23 09:07:18 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main (void)
{
	int a = 42;
	int b = 5;

	int mod;
	int div;
	ft_div_mod(a, b, &div, &mod);
	printf("num %d, %d ", div, mod);

	return (0);
}*/