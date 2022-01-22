/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:13:34 by macar             #+#    #+#             */
/*   Updated: 2022/01/07 20:31:00 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
/*int main(void)
{
	char s[14]= "bilgisayar";
	char t[12]= "elbise";
	char k[14]= "bilgisayar";
	char l[12]= "elbise";
	printf("orj:%lu\n", strlcpy(s,t,0));
	printf("ben:%lu", ft_strlcpy(k,l,0));
}*/
