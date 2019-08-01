/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 11:11:16 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:29 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	h;
	char	*ptr;

	n = 0;
	h = 0;
	ptr = (char*)haystack;
	if (*(needle + n))
	{
		while (*(ptr + h) && (h < len))
		{
			while (h + n < len && (*(ptr + h + n) == *(needle + n)))
			{
				if (*(needle + n))
					n++;
				if (*(needle + n) == '\0')
					return (ptr + h);
			}
			h++;
		}
		return (NULL);
	}
	return (ptr);
}
