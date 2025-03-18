/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosi <acosi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:52:26 by acosi             #+#    #+#             */
/*   Updated: 2025/03/18 22:57:47 by acosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	count_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static char	*is_zero(char *str)
{
	str[0] = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	cpy;
	size_t			digits_nbr;

	digits_nbr = count_digits(n);
	cpy = n;
	if (n < 0)
	{
		cpy = -n;
		digits_nbr++;
	}
	str = (char *)malloc(sizeof(char) * (digits_nbr + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str [0] = '-';
	str[digits_nbr] = '\0';
	if (n == 0)
		return (is_zero(str));
	while (cpy > 0)
	{
		str[--digits_nbr] = (char)(cpy % 10 + '0');
		cpy /= 10;
	}
	return (str);
}
