/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosi <acosi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:30:55 by acosi             #+#    #+#             */
/*   Updated: 2025/03/18 22:58:46 by acosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	if (!dst && !n)
		return (0);
	src_len = ft_strlen (src);
	dst_len = ft_strlen (dst);
	j = 0;
	if ((n == 0) || (n < dst_len))
		return (src_len + n);
	if (!src)
		return (dst_len);
	while (src[j] && (dst_len + j) < (n - 1))
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}
