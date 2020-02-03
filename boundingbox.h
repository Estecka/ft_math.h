/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boundingbox.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaur <abaur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 16:12:50 by abaur             #+#    #+#             */
/*   Updated: 2020/01/31 16:31:45 by abaur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOUNDINGBOX_H
# define BOUNDINGBOX_H

# include "vector.h"
# include "figure.h"

typedef struct s_bbox	t_bbox;
struct s_bbox {
	union u_v3	min;
	union u_v3	max;
}

void	bbinit(struct s_bbox *this, t_v3 point);
void	bbpoint(struct s_bbox *this, t_v3 point);

void	bbtri(struct s_bbox *this, t_tri triangle);
void	bbquad(struct s_bbox *this, t_quad quadrilater);

short	bbcontain(struct s_bbox *this, t_v3 point);
short	bbinter(struct s_bbox *box1, struct s_bbox *box2);

#endif
