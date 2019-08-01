/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_del.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 23:59:17 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:40 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin_del(char *s1, char *s2, int i)
{
	char *tmp;

	tmp = ft_strjoin(s1, s2);
	if (i == 1)
		ft_strdel(&s1);
	if (i == 2)
		ft_strdel(&s2);
	if (i == 3)
	{
		ft_strdel(&s1);
		ft_strdel(&s2);
	}
	return (tmp);
}
