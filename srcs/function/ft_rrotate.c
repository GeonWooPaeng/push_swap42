/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:07:27 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/04 12:23:01 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_push_swap.h"

void	rra(t_stack *a)
{
	t_stack *last_a;
	int		adata;

	last_a = ft_find_last_lst(a);
	adata = last_a->data;
	ft_pop_last(a);
	ft_push_first(a, adata);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	t_stack *last_b;
	int		bdata;

	last_b = ft_find_last_lst(b);
	bdata = last_b->data;
	ft_pop_last(b);
	ft_push_first(b, bdata);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
