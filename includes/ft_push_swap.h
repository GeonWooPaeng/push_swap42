/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:23:49 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/22 12:55:53 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_stack
{
	struct s_stack	*prev;
	int				data;
	struct s_stack	*next;
}					t_stack;

/*
** ft_utils.c
*/
int					ft_isspace(char c);
int					ft_error(int ret);
int					ft_check_arr(long long *arr, int arr_size);
long long			ft_atoll(char *str);

/*
** ft_lst.c
*/
void				ft_free_lst(t_stack *a, t_stack *b);
void				ft_make_lst(t_stack *stack, long long *arr, int cnt);
t_stack				*ft_find_last_lst(t_stack *stack);

/*
** ft_utils_split.c
*/
void				ft_free(char **s, int idx);
size_t				ft_cntword(char const *s, char c);
size_t				ft_lenword(char const *s, char c);
char				*ft_fd_strdup(const char *s, size_t lenword);
char				**ft_split(char const *s, char c);

/*
** ft_utils_arr.c
*/
int					ft_split_arr_size(char **split_arr);
int					ft_input_num(char **av, int ac);
void				free_str(char **str);

/*
** ft_stack.c
*/
void				ft_push_first(t_stack *stack, int data);
void				ft_pop(t_stack *head);
void				ft_pop_last(t_stack *head);
int					ft_size(t_stack *head);
void				ft_push_last(t_stack *head, int data);

/*
** ft_init.c
*/
t_stack				*ft_stack_init(void);
void				ft_init_arr(char **av, long long *int_arr,
									int ac, int arr_size);

/*
** function/ft_swap.c
*/
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);

/*
** function/ft_push.c
*/
void				pa(t_stack *a, t_stack *b, int *pa_cnt);
void				pb(t_stack *a, t_stack *b, int *pb_cnt);

/*
** function/ft_rotate.c
*/
void				ra(t_stack *a, int *ra_cnt);
void				rb(t_stack *b, int *rb_cnt);
void				rr(t_stack *a, t_stack *b);

/*
** function/ft_rrotate.c
*/
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);

/*
** sort/ft_sort_utils.c
*/
int					ft_find_max(t_stack *head);
int					ft_find_min(t_stack *head);
void				ft_swap(long long *arr, int idx, int l_idx);
void				ft_sort_arr(long long *arr, int cnt);
int					ft_find_pivot(t_stack *head, int cnt);

/*
** sort/ft_sort_two.c
*/
void				ft_factor_two(t_stack *head);
void				ft_factor_b_a(t_stack *a, t_stack *b, int cnt, int *pa_cnt);

/*
** sort/ft_sort_three.c
*/
void				ft_factor_three(t_stack *head);

/*
** sort/ft_sort_five.c
*/
void				ft_factor_five(t_stack *a, t_stack *b);
void				ft_m_change(t_stack *a, t_stack *b, int pb_cnt, int max_v);

/*
** sort/ft_sort_more.c
*/

void				ft_rr(t_stack *a, t_stack *b, int cnt, int type);
void				ft_a_b(t_stack *a, t_stack *b, int cnt);
void				ft_b_a(t_stack *a, t_stack *b, int cnt);

/*
** main.c
*/
void				ft_check_factor(t_stack *a, t_stack *b, int num);

#endif
