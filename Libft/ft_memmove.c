/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:46:32 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/09/24 09:56:05 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (ptrd < ptrs)
	{
		while (len--)
			*ptrd++ = *ptrs++;
	}
	else
	{
		while (len)
		{
			ptrd[len] = ptrs[len];
			len--;
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