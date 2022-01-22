/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:16:21 by macar             #+#    #+#             */
/*   Updated: 2022/01/07 17:50:56 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int nm)
{
	if ((nm >= 48 && nm <= 57)
		|| (nm >= 65 && nm <= 90) || (nm >= 97 && nm <= 122))
		return (1);
	return (0);
}
