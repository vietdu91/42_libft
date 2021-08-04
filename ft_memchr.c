/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:51:38 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 11:38:46 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	char	*s;
	char	c;
	size_t	i;

	s = (char *)ptr;
	c = (unsigned char)ch;
	i = 0;
	while (i < count)
	{
		if (s[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
