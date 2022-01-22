/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:15:03 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 19:08:00 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	while (n > 0)
	{
		str[i] = '\0';
		n--;
		i++;
	}
}

/*int main()
{
	char a[] = "Bilgisayar";
	printf("%s", a);
	 ft_bzero(a,3);
	printf("%s",a );
}*/