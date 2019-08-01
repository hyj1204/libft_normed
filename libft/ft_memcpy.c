/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 20:55:55 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:56 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*ptr_src;
	char	*ptr_dst;
	size_t	i;

	ptr_dst = dst;
	ptr_src = (char*)src;
	i = 0;
	while (i < n)
	{
		*(ptr_dst + i) = *(ptr_src + i);
		i++;
	}
	return (dst);
}
