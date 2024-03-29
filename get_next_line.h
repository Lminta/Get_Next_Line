/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:40:11 by lminta            #+#    #+#             */
/*   Updated: 2019/04/27 14:59:44 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 12
# include "libft/libft.h"
# include <fcntl.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	char			*buff;
	int				fd;
}					t_btree;

int					get_next_line(const int fd, char **line);

#endif
