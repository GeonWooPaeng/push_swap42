/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:07:46 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/02 13:15:28 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_stack *a)
{
	int	data;
	int	size;

	size = ft_size(a);
	if (size < 2)
		return ;
	data = a->next->next->data;
	a->next->next->data = a->next->data;
	a->next->data = data;
}

void	sb(t_stack *b)
{
	int	data;
	int	size;

	size = ft_size(b);
	if (size < 2)
		return ;
	data = b->next->next->data;
	b->next->next->data = b->next->data;
	b->next->data = data;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
