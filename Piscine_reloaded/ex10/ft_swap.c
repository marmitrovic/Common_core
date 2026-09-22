/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:50:13 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/09/22 18:56:36 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main (void)
{
	int a = 5;
	int b = 6;
	if (a == 6 && b == 5)
		write(1, "ok", 2);
	else
		write(1, "no", 2);
	ft_swap(&a, &b);

	if (a == 6 && b == 5)
		write(1, "ok", 2);
	else
		write(1, "no", 2);
	return 0;
}*/