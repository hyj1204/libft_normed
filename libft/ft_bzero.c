/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 18:38:07 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:09:49 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	if (n == 0)
		return ;
	else
	{
		ptr = s;
		i = 0;
		while (i < n)
		{
			*(ptr + i) = 0;
			i++;
		}
	}
}
