/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:00:55 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:28 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = (int)ft_strlen(s) + 1;
	ptr = (char*)s;
	while (i--)
	{
		if (*(ptr + i) == (char)c)
		{
			return (ptr + i);
		}
	}
	return (NULL);
}
