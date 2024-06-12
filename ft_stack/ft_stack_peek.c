/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:20:00 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/12 20:34:11 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_stack.h"

void	*ft_stack_peek(t_stack stack)
{
	return (ft_arraylist_peek(stack));
}

/* #include "ft_util.h" */
/* #include <stdio.h> */
/* #include <assert.h> */
/* int main(void) */
/* { */
/* 	t_stack s; */
/* 	int		arr[10]; */
/* 	int		len; */
/* 	int		*ele; */

/* 	(void) len; */
/* 	s = ft_stack_new((void (*) (void *))ft_nop); */
/*     printf("hello"); */
/* 	arr[0] = 10; */
/* 	ft_stack_push(s, arr + 0); */
/* 	assert(ft_stack_len(s) == 1); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(*ele == 10); */
/* 	arr[1] = 100; */
/* 	ft_stack_push(s, arr + 1); */
/* 	assert(ft_stack_len(s) == 2); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(*ele == 100); */
/* 	ele = ft_stack_pop(s); */
/* 	assert(ft_stack_len(s) == 1); */
/* 	assert(*ele == 100); */
/* 	arr[2] = 111; */
/* 	ft_stack_push(s, arr + 2); */
/* 	assert(ft_stack_len(s) == 2); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(*ele == 111); */
/* 	ele = ft_stack_pop(s); */
/* 	assert(ft_stack_len(s) == 1); */
/* 	assert(*ele == 111); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(*ele == 10); */
/* 	ele = ft_stack_pop(s); */
/* 	assert(ft_stack_len(s) == 0); */
/* 	assert(*ele == 10); */
/* 	ft_arraylist_destroy(s); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(ele == NULL); */
/* 	ele = ft_stack_pop(s); */
/* 	assert(ele == NULL); */
/* 	return (0); */
/* } */
