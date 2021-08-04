/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 09:11:52 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 11:46:41 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	a;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	a = 0;
	if (size < dest_size)
		return (src_size + size);
	while (src[a] && dest_size + a < size - 1)
	{
		dest[dest_size + a] = src[a];
		a++;
	}
	if (size == 0)
		dest[dest_size] = '\0';
	else
		dest[dest_size + a] = '\0';
	return (dest_size + src_size);
}
