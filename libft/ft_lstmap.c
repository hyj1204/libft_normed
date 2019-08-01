/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 17:31:40 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:13:06 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *begin_list;

	if (!lst)
		return (NULL);
	new = f(lst);
	lst = lst->next;
	begin_list = new;
	while (lst)
	{
		new->next = f(lst);
		new = new->next;
		lst = lst->next;
	}
	return (begin_list);
}
