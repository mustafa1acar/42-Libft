/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:53:04 by macar             #+#    #+#             */
/*   Updated: 2022/01/07 19:47:49 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	count;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	count = 0;
	while (src[count] && len_dst + count + 1 < dstsize)
	{
		dst[len_dst + count] = src[count];
		count++;
	}
	dst[len_dst + count] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[count]));
}
/*int main()
{
	char p[23] = "bilgisayar";
   char l[23] = "oyunlar";
   char k[23] = "bilgisayar";
  char s[23] = "oyunlar"; 
	printf(":> orj: %lu", strlcat(p,l,12));   
	printf(":> ben: %lu", ft_strlcat(k,s,12));
	//printf("uzu: %zu",ft_strlen(k));
}*/