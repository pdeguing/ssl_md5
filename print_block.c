/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_block.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:07:37 by pdeguing          #+#    #+#             */
/*   Updated: 2018/09/24 14:07:44 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

void	print_block(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_printf("%b", str[i]);
		i++;
		if (str[i])
			ft_printf(" ");
	}
}
