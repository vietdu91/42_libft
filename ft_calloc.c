/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 22:22:40 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 11:14:45 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*c;
	size_t	i;

	c = malloc(size * num);
	if (c == 0)
		return (0);
	i = 0;
	while (i < num * size)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}
