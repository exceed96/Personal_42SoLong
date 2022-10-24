/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:32:51 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/21 16:45:35 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

char	*ft_strrchr(char *s, int c)
{
	char	*str;

	str = 0;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			str = (char *)s;
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (str);
}
