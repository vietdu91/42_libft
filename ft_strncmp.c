/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:11:55 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 11:47:20 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	b;

	b = 0;
	if (n == 0)
		return (0);
	while (b < n - 1 && s1[b] == s2[b] && s1[b] && s2[b])
	{
		if (b == n - 1)
			return (0);
		b++;
	}
	return ((unsigned char)s1[b] - (unsigned char)s2[b]);
}
