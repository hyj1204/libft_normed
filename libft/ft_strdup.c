/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:58:18 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:44 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr_s1;
	size_t	i;

	i = 0;
	ptr_s1 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ptr_s1 == NULL)
		return (NULL);
	while (*(s1 + i))
	{
		*(ptr_s1 + i) = *(s1 + i);
		i++;
	}
	*(ptr_s1 + i) = '\0';
	return (ptr_s1);
}
