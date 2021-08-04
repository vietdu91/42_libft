/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:39:11 by emtran            #+#    #+#             */
/*   Updated: 2021/05/30 15:03:48 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	n_list = ft_lstnew((*f)(lst->content));
	if (!n_list)
		return (0);
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&n_list, del);
			return (0);
		}
		ft_lstadd_back(&n_list, tmp);
		lst = lst->next;
	}
	return (n_list);
}
