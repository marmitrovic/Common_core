/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 19:54:47 by marko             #+#    #+#             */
/*   Updated: 2026/09/24 09:15:02 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;
	size_t			i;

	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (0);
	i = 0;
	if (dest < src)
	{
		while (i < len)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			ptrd[len] = ptrs[len];
		}
	}
	return (dest);
}

/*

int main(){
	char name[] = "marko mitrovic";

	char newname[25];

	printf("Now name is here: %s\n", (char *)name);

	ft_memmove(newname, name, 5);

	printf("After memcpy name is here: %s\n", (char *)newname);
}
	*/