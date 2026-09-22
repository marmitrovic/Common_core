/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:21:30 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/09/22 18:21:33 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if(n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
int main (void)
{
	ft_is_negative(-5);
	ft_is_negative(5);
	ft_is_negative(0);
	return (0);
}*/
