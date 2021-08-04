/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:59:24 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 11:38:55 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t count)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	unsigned int	i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (s1 == 0 && s2 == 0)
		return (0);
	i = 0;
	while (i < count)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
