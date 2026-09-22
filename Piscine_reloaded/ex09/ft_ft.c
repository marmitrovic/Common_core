/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:47:33 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/09/22 18:47:34 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main(void)
{
	int nbr = 5;
	char c = nbr + '0';

	write(1, &c, 1);

	ft_ft(&nbr);

	if (nbr == 42)
		write(1, "42", 2);
	else
		write(1, "NO", 2);
	return 0;
}*/