/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:37:07 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 15:48:46 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*int main()
{
	char *s1 = "aataamustafataa";
	char *s2 = "a";
	printf(":> %s", ft_strtrim(s1, s2));
	return 0;
}*/

/*

int	ft_checker(char c, char const *p)
{
	int	i;

	i = 0;
	while (p[i] != '\0')
	{
		if (c == p[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_returned(int bas, int len, char *str, char const *s2)
{
	int	i;

	i = 0;
	while (bas <= len)
	{
		str[i] = s2[bas];
		bas++;
		i++;
	}
	str[i] = 0;
	return (str);
}
int	ft_checker(char c, char const *p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		if (p[i] == c)
			return (0);
	i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		i2;

	p = malloc(ft_strlen(s1) * sizeof(char));
	i = 0;
	i2 = 0;
	if (p == NULL || s1 == NULL || set == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		if (ft_checker(s1[i], set) == 1)
		{
			p[i2] = s1[i];
			i2++;
		}
		i++;
	}
	p[i2] = 0;
	return (p);
}

*/