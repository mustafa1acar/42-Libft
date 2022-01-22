/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:10:33 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 14:56:19 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*r;
	int		i;

	if (s)
	{
		i = 0;
		len = ft_strlen(s);
		r = malloc(sizeof(char) * len + 1);
		if (r == NULL)
			return (0);
		while (s[i] != 0)
		{
			r[i] = f(i, s[i]);
			i++;
		}
		r[i] = 0;
		return (r);
	}
	return (0);
}
/*char f(unsigned int a, char b)
{
    a = a +1;
    b = b - 32;
    return b;
}
int main()
{
    char const *a = "abc";
    char *p;
    p = ft_strmapi(a, f);
    printf(":> %s", p);
}*/