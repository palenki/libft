/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:23:45 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/06/11 18:17:45 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_dellst(t_list *start, void *content, void (*del)(void *))
{
	if (content)
		del(content);
	ft_lstclear(&start, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new_node;
	void	*new_content;

	if (!del || !f)
		return (NULL);
	start = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (ft_dellst(start, new_content, del));
		new_node = ft_lstnew(new_content);
		if (!new_node)
			return (ft_dellst(start, new_content, del));
		ft_lstadd_back(&start, new_node);
		lst = lst->next;
	}
	return (start);
}
