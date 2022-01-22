/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:55:41 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 18:32:16 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s_len;
	size_t	end;

	if (!s)
		return (NULL);
	end = 0;
	s_len = ft_strlen(s);
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	dest = (char *)malloc(sizeof(char) * end + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, end + 1);
	return (dest);
}
