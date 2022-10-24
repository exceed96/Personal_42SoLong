/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:57:23 by sangyeki          #+#    #+#             */
/*   Updated: 2022/05/19 20:18:30 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

char	*ft_strdup(char *s)
{
	char	*str;
	int		size;
	int		i;

	str = 0;
	size = ft_strlenn(s);
	i = 0;
	str = malloc(size + 1);
	if (!(str))
		return (0);
	while (s[i] && s[i] != '\n')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
