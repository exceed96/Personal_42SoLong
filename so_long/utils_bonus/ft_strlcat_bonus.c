/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:41:17 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/19 20:17:11 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

size_t	ft_strlcat(char *dst, char *src, size_t detsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlenn(src);
	dst_len = ft_strlenn(dst);
	if (!detsize)
		return (src_len);
	if (dst_len >= detsize)
		return (src_len + detsize);
	while (src[i] && dst_len + i < (detsize - 1))
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
}
