/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:26:41 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 11:19:24 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t max)
{
	unsigned char	*chdest;
	unsigned char	*chsrc;
	size_t			i;

	chdest = (unsigned char *)dest;
	chsrc = (unsigned char *)src;
	if (dest == 0 && src == 0)
		return (0);
	i = 0;
	while (i < max)
	{
		chdest[i] = chsrc[i];
		if (chdest[i] == (unsigned char)ch)
			return ((void *)&chdest[i + 1]);
		i++;
	}
	return (0);
}
