/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:45:05 by gpaeng            #+#    #+#             */
/*   Updated: 2021/05/31 16:11:53 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"
#include <stdio.h>

int main(int argc, char *argv[])
{

	t_stack *a;
	int		tmp;
	int		argc_idx;
	
	argc_idx = argc - 1;
	ft_stack_init(&a);
	while (argc_idx > 0)
	{
		//숫자가 아닌것 return 
		tmp = ft_atoi(argv[argc_idx]);
		ft_push(a, tmp);
		argc_idx--;
	}
	ft_print_lst(&a);
	ft_free_lst(&a);
	return (0);
}