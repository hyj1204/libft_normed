/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 21:27:30 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:13:04 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dst = dst;
	ptr_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		*(ptr_dst + i) = *(ptr_src + i);
		if (*(ptr_src + i) == (unsigned char)c)
		{
			return (dst + 1 + i);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
