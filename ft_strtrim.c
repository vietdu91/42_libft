/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <manu_tran@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:26:05 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 14:04:45 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_checkset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (s1[i] && ft_checkset(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	if (i == j)
		len = 0;
	else
	{
		while (j >= i && ft_checkset(s1[j], set))
			j--;
		len = j - i + 1;
	}
	i = 0;
	while (s1[i] && ft_checkset(s1[i], set))
		i++;
	return (ft_substr(s1, i, len));
}
