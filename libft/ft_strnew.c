/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 15:52:06 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:30 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char*)malloc(size + 1);
	if (ptr)
	{
		while (i < (size + 1))
		{
			*(ptr + i) = '\0';
			i++;
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
