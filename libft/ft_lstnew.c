/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 15:31:08 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:13:05 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tl;

	tl = (t_list*)malloc(sizeof(t_list));
	if (tl == NULL)
		return (NULL);
	if (content == NULL)
	{
		tl->content = NULL;
		tl->content_size = 0;
	}
	else
	{
		if (!(tl->content = malloc(content_size)))
		{
			free(tl);
			return (NULL);
		}
		ft_memcpy((tl->content), content, content_size);
		tl->content_size = content_size;
	}
	tl->next = NULL;
	return (tl);
}
