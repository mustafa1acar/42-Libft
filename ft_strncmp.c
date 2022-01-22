/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:12:12 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 13:06:30 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0 && (unsigned char)s1[i] != 0 && (unsigned char)s2[i] != 0)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main()
{
	const char *cp1 = "abcdef";
    const char *cp2 = "abcdefghijklmnop";
    int ret;
const char *cp11 = "abcdef";
    const char *cp12 = "abcdefghijklmnop";
    int ret1;

    ret = strncmp(cp1, cp2, 6);
    ret1 = ft_strncmp(cp11, cp12, 6);
	printf("orj: %d ben: %d", ret, ret1);
}*/
