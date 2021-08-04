/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <manu_tran@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:30:16 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 11:48:46 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = 0;
	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char) * 1);
		if (str == 0)
			return (0);
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(&s[start]))
		str = malloc(sizeof(char) * ft_strlen(&s[start]) + 1);
	else
		str = malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (s[start] != '\0' && len-- != 0)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
