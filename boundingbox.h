/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boundingbox.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:12:50 by abaur             #+#    #+#             */
/*   Updated: 2020/02/03 11:43:39 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOUNDINGBOX_H
# define BOUNDINGBOX_H

# include "vector.h"
# include "figure.h"

typedef struct s_bbox	t_bbox;
struct	s_bbox {
	struct s_v3	min;
	struct s_v3	max;
};

void	bbinit(t_bbox *this, const t_v3 *point);
void	bbpoint(t_bbox *this, const t_v3 *point);

void	bbtri(t_bbox *this, t_tri triangle);
void	bbquad(t_bbox *this, t_quad quadrilater);

short	bbcontain(t_bbox *this, const t_v3 *point);
short	bbinter(const t_bbox *box1, const t_bbox *box2);
void	bbclip(t_bbox *this, const t_bbox *box1, const t_bbox *box2);

short	bbisvalid(t_bbox *this);
short	bbisvalid2d(t_bbox *this);

#endif
