/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:08:10 by emtran            #+#    #+#             */
/*   Updated: 2021/05/28 18:31:25 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_elem;

	n_elem = malloc(sizeof(t_list));
	if (n_elem == 0)
		return (0);
	n_elem->content = content;
	n_elem->next = 0;
	return (n_elem);
}
