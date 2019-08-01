/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 23:33:53 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:35 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*src;
	char	*dst;
	size_t	i;
	int		len;

	len = ft_strlen(s1);
	src = (char *)s2;
	dst = s1;
	i = 0;
	while ((*(src + i) != '\0') && (i < n))
	{
		*(dst + len + i) = *(src + i);
		i++;
	}
	*(dst + len + i) = '\0';
	return (dst);
}
