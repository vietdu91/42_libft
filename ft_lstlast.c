/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:45:04 by emtran            #+#    #+#             */
/*   Updated: 2021/05/27 14:14:01 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list			*tmp;

	if (lst == 0)
		return (0);
	tmp = lst;
	while (tmp->next != 0)
	{
		tmp = tmp->next;
	}
	return (tmp);
}