/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosi <acosi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:09:52 by acosi             #+#    #+#             */
/*   Updated: 2025/03/18 22:58:07 by acosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == NULL || src == NULL)
	{
		if (dst == NULL && src == NULL)
			return (NULL);
		else
			ft_strlen (dst);
	}
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (n--)
			*(d + n) = *(s + n);
		return (dst);
	}
	while (n--)
		*d++ = *s++;
	return (dst);
}
