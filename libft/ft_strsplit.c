/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 00:57:28 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:27 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		num;
	int		len;
	char	**str;

	i = 0;
	j = 0;
	num = ft_words_count(s, c);
	if (!(str = (char**)ft_strnew((num + 1) * sizeof(char*))))
		return (NULL);
	else if (num == 0)
		return (str);
	while (num--)
	{
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		len = ft_word_len((s + i), c);
		if (!(str[j] = ft_strsub((s + i), 0, len)))
			return (NULL);
		i = i + len;
		j++;
	}
	str[j] = NULL;
	return (str);
}
