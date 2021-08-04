/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:15:01 by emtran            #+#    #+#             */
/*   Updated: 2021/05/31 13:45:55 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (*alst == 0)
		*alst = new;
	else
	{
		tmp = *alst;
		while (tmp->next != 0)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}
