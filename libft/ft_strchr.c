/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 12:54:16 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:47 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char*)s;
	i = 0;
	if ((char)c == '\0')
	{
		while (*(ptr + i) != '\0')
			i++;
		return (ptr + i);
	}
	else
	{
		while (*(ptr + i))
		{
			if (*(ptr + i) == (char)c)
			{
				return (ptr + i);
			}
			i++;
		}
	}
	return (NULL);
}
