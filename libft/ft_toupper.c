/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 19:35:04 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/16 17:12:23 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (c - 32);
	}
	else
		return (c);
}
