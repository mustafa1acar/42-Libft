/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:57:28 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 15:25:09 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*r;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	r = *lst;
	while (r->next != NULL)
		r = r->next;
	r->next = new;
}

/*
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		(*lst)->next = NULL;
	}
//	while ((*lst)->next != NULL)
//		(*lst) = (*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
}
*/