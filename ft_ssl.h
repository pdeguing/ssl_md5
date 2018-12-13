/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 13:26:06 by pdeguing          #+#    #+#             */
/*   Updated: 2018/09/24 15:24:11 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_H
# define FT_SSL_H
# include "libft/includes/libft.h"

typedef struct		s_block
{
	char			*word;

	struct s_block	*next;
}					t_block;

t_block				*block_new(void);
t_block				*get_blocks(char *input);

void				print_block(char *str);

#endif
