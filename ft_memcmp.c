/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:11:52 by macar             #+#    #+#             */
/*   Updated: 2022/01/07 21:22:57 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if ((unsigned char)ps1[i] != (unsigned char)ps2[i])
			return ((unsigned char)ps1[i] - (unsigned char)ps2[i]);
		i++;
		n--;
	}
	return ((unsigned char)ps1[i - 1] - (unsigned char)ps2[i - 1]);
}

/*int main()
{
    const char *cp1 = "Bi\200lgisayar";
    const char *cp2 = "Bi\0gileri";
    int ret;
    ret = memcmp(cp1, cp2, 3);
	const char *cp11 = "Bi\200gisayar";
    const char *cp12 = "Bi\0gileri";
    int ret1;

    ret1 = ft_memcmp(cp11, cp12, 3);
	printf(":> orj :%d ben: %d", ret, ret1);

}*/
