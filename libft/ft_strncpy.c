/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 22:44:27 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:32 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		if (*(src + i))
		{
			*(dst + i) = *(src + i);
		}
		else
		{
			while (i < len)
			{
				*(dst + i) = '\0';
				i++;
			}
		}
		i++;
	}
	return (dst);
}
