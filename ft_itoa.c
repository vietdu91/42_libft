/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manu_tran <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:22:23 by manu_tran         #+#    #+#             */
/*   Updated: 2021/05/31 11:17:18 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_nbrlen(int n)
{
	unsigned int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	if (n == 0)
	{
		len++;
		return (len);
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	ft_check(long int nb, unsigned int len, char *str)
{
	if (nb == 0)
	{
		str[0] = 48;
		return (*str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb != 0)
	{
		str[len] = 48 + (nb % 10);
		nb = nb / 10;
		len--;
	}
	return (*str);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nb;

	nb = n;
	len = ft_nbrlen(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	str[len--] = '\0';
	ft_check(nb, len, str);
	return (str);
}
