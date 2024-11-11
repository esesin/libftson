/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eysevinc <eysevinc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:05:25 by eysevinc          #+#    #+#             */
/*   Updated: 2024/11/04 17:29:28 by eysevinc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	t;
	size_t	neg;

	t = 0;
	neg = 1;
	while ((*str <= 13 && *str >= 9) || *str == 32)
	{
		str++;
	}
	if (*str == '-')
	{
		neg = neg * -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		t = (t * 10) + (*str - '0');
		str++;
	}
	return (t * neg);
}
