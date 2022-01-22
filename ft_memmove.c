/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:36:44 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 13:11:09 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	int				i;

	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *) src;
	if (len == 0 || (dst == src))
		return (dst);
	if (psrc < pdst)
	{
		while (len-- > 0)
			pdst[len] = psrc[len];
	}
	else
	{
		while (len > 0)
		{
			pdst[i] = psrc[i];
			i++;
			len--;
		}
	}
	return (dst);
}

/*int main() {
    char str[99] = "helloworldandearth";
   ft_memmove(str + 5, str, 10);
    printf("%s\n", str);
}*/