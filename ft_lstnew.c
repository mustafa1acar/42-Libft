/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:24:28 by macar             #+#    #+#             */
/*   Updated: 2022/01/11 13:46:24 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_n;

	new_n = (t_list *)malloc(sizeof(t_list));
	if (new_n == NULL)
		return (0);
	new_n->content = content;
	new_n->next = NULL;
	return (new_n);
}
