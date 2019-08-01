/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 14:50:28 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:37 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	else
	{
		str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	}
	if (!str)
		return (NULL);
	else
	{
		while (*(s + i))
		{
			*(str + i) = f(*(s + i));
			i++;
		}
	}
	*(str + i) = '\0';
	return (str);
}
