/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:58:36 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 15:09:05 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst != NULL)
	{
		while (*lst != NULL)
		{
			del((*lst)->content);
			tmp = *lst;
			*lst = (*lst)->next;
			free(tmp);
		}
	}
}
