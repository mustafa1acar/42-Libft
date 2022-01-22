/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:17:10 by macar             #+#    #+#             */
/*   Updated: 2022/01/07 18:03:01 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*y;

	y = (unsigned char *)b;
	while (len > 0)
	{
		*y = (unsigned char) c;
		y++;
		len--;
	}
	return (b);
}
/*
int main(void)
{
	    char cdizi[] = "Bilgisayar";
		char ddizi[] = "BenimBilgisayar";

    printf("cdizi bellek içeriği: %s\n", cdizi);

    memset(cdizi, 'x', 5);

    printf("cdizi bellek içeriği: %s", cdizi);

    printf("ddizi bellek içeriği: %s\n", ddizi);

    ft_memset(ddizi, 'x', 5);

    printf("cdizi bellek içeriği: %s", ddizi);

    return 0;
}



*/
