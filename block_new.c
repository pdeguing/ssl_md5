/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:15:06 by pdeguing          #+#    #+#             */
/*   Updated: 2018/09/24 14:25:06 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

t_block		*block_new(void)
{
	t_block		*new;

	new = (t_block *)malloc(sizeof(t_block));
	if (new == NULL)
		return (NULL);
	new.word = ft_strnew(16 + 1);
	if (new.word == NULL)
	{
		free(&new);
		return (NULL);
	}
	new.next = NULL;
}
