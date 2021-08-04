/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:55:26 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 11:39:18 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t	i;

	if (dest == 0 && src == 0)
		return (0);
	i = 0;
	if (src < dest)
	{
		while (count > 0)
		{
			((char *)dest)[count - 1] = ((char *)src)[count - 1];
			count--;
		}
	}
	else
	{
		while (i < count)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
