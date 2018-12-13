/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_blocks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:25:12 by pdeguing          #+#    #+#             */
/*   Updated: 2018/09/24 15:02:31 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

t_block		*get_blocks(char *input)
{
	t_block		**head;
	int			i;
	int			len;

	head = NULL;
	i = 0;
	b = ft_strlen(input) * 8;
	if (b <= 448)
	{
		block->w_lst = get_words(input + *i);
		return ;
	}
}
