/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 02:22:59 by yijhuang          #+#    #+#             */
/*   Updated: 2019/06/07 15:36:04 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		conv_c(va_list *ap, t_spec *spec)
{
	char	*str;
	int		len;

	str = (char *)ft_memalloc(sizeof(char) * 2);
	str[0] = va_arg(*ap, int);
	if (str[0] == 0)
	{
		spec->isnull = 1;
		spec->width = spec->width != -1 ? spec->width - 1 : -1;
	}
	width_s(&str, spec);
	len = ft_strlen(str) + spec->isnull;
	ft_putstr(str);
	free(str);
	if (spec->isnull)
		ft_putchar(0);
	return (len);
}
