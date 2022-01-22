/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:26:41 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 15:52:52 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*cnt;

	if (lst == NULL)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		cnt = f(lst->content);
		tmp = ft_lstnew(cnt);
		if (tmp == NULL)
		{
			del(cnt);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
/*
//part2

	t_list	*new;

	if (lst)
	{
		new = f(lst);
		new->next = ft_lstmap(lst->next, f, del);
		return (new);
	}
	return (NULL);



t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = f(&(lst->content));
	if (new == NULL)
	{
		del(new->content);
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
		new->next = f(&(lst->content));
		new = new->next;
	}
	return (new);
}

*/