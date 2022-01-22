/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:09:30 by macar             #+#    #+#             */
/*   Updated: 2022/01/13 16:33:30 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*put_negative(char *k, int digit, long int sayi)
{
	int	i;

	i = 0;
	sayi = sayi * -1;
	k[0] = '-';
	k[digit + 1] = 0;
	if (digit == 1)
	{
		k[1] = sayi + 48;
		return (k);
	}
	while (sayi > 0 && digit >= 1)
	{
		k[digit] = sayi % 10 + 48;
		sayi = sayi / 10;
		digit--;
	}
	return (k);
}

int	learn_digit(int a)
{
	int			i;
	long int	c;

	i = 0;
	c = a;
	if (a == 0)
		return (i + 1);
	if (c < 0)
		c *= -1;
	while (c > 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_tek(int n, char *str)
{
	str[0] = n + 48;
	str[1] = 0;
	return (str);
}

char	*put_big(char *k, int digit, long int sayi)
{
	if (k == NULL)
		return (NULL);
	k[digit] = 0;
	digit--;
	while (sayi > 0 && digit >= 0)
	{
		k[digit] = sayi % 10 + 48;
		sayi = sayi / 10;
		digit--;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char	*nmr;
	int		digit;

	digit = learn_digit(n);
	if (n >= 0 && n <= 9)
	{
		nmr = malloc(1 + digit);
		if (nmr == NULL)
			return (NULL);
		nmr = ft_tek(n, nmr);
	}
	else if (n < 0)
	{
		nmr = malloc(digit + 2);
		if (nmr == NULL)
			return (NULL);
		nmr = put_negative(nmr, digit, (long int)(n));
	}
	else
	{
		nmr = malloc(digit + 1);
		nmr = put_big(nmr, digit, n);
	}
	return (nmr);
}

/*int main()
{
	printf("sayi: %s", ft_itoa(-2147483648));
	return 0;
}*/