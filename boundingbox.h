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

typedef struct s_bbox	t_bbox;
struct	s_bbox {
	struct s_v3	min;
	struct s_v3	max;
};

void	bbinit(t_bbox *this, const t_v3 *point);
void	bbpoint(t_bbox *this, const t_v3 *point);

short	bbcontain(t_bbox *this, const t_v3 *point);
short	bbinter(const t_bbox *box1, const t_bbox *box2);
void	bbclip(t_bbox *this, const t_bbox *box1, const t_bbox *box2);

short	bbisvalid(t_bbox *this);
short	bbisvalid2d(t_bbox *this);

typedef struct s_bbox2	t_bbox2;
struct	s_bbox2
{
	struct s_v2	min;
	struct s_v2	max;
};

void	bb2init(t_bbox2 *this, const t_v2 *point);
void	bb2expand(t_bbox2 *this, const t_v2 *point);
short	bb2contain(t_bbox2 *this, const t_v2 *p);

short	bb2inter(const t_bbox2 *box1, const t_bbox2 *box2);
void	bb2clip(t_bbox2 *this, const t_bbox2 *box1, const t_bbox2 *box2);

short	bb2isvalid(t_bbox2 *this);

#endif
