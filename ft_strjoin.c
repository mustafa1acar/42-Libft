/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:25:42 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 13:51:08 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		i2;

	if (!s1 || !s2)
		return (0);
	p = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	i2 = 0;
	if (p == NULL)
		return (0);
	while (s1[i] != 0)
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[i2] != 0)
	{
		p[i] = s2[i2];
		i2++;
		i++;
	}
	p[i] = 0;
	return (p);
}
/*int main()
{
	printf("dizi: %s", ft_strjoin("ali", "ata"));
}*/