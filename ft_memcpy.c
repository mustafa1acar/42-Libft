/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:36:39 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 12:53:44 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;
	size_t		i;

	i = 0;
	pdst = (char *) dst;
	psrc = (const char *) src;
	if (pdst == NULL && psrc == NULL)
		return (NULL);
	while (n > 0)
	{
		pdst[i] = psrc[i];
		n--;
		i++;
	}
	return (dst);
}

/*int main(void)
{
    const char *cp = "Bilgisayar&Programlama";
    char dest[40];

    ft_memcpy(dest, cp, 40);
    printf("%s\n", dest);

    return 0;
}*/