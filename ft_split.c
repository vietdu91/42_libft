/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:26:11 by manu_tran         #+#    #+#             */
/*   Updated: 2021/06/08 10:50:21 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	w;
	size_t	i;

	i = 1;
	w = 0;
	while (*s)
	{
		if (*s == c)
			i = 1;
		else
		{
			if (i == 1)
				w++;
			i = 0;
		}
		s++;
	}
	return (w);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	a;

	a = 0;
	while (*s && *s != c)
	{
		s++;
		a++;
	}
	return (a);
}

static char	**ft_freetamere(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	w;
	size_t	j;

	j = 0;
	if (!s)
		return (0);
	tab = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!tab)
		return (0);
	while (ft_wordcount(s, c))
	{
		while (*s == c && *s)
			s++;
		w = 0;
		tab[j] = (char *)malloc(sizeof(char) * ft_wordlen(s, c) + 1);
		if (!tab[j])
			return (ft_freetamere(tab));
		while (*s && *s != c)
			tab[j][w++] = *s++;
		tab[j++][w] = '\0';
	}
	tab[j] = 0;
	return (tab);
}
