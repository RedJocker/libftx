/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:09:08 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/12 20:33:53 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_stack.h"

void	ft_stack_destroy(t_stack stack)
{
	ft_arraylist_destroy(stack);
}

/* #include "ft_util.h" */
/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	t_stack s; */

/* 	s = ft_stack_new((void (*) (void *))ft_nop); */
/*     printf("hello"); */
/* 	ft_stack_destroy(s); */
/* 	return (0); */
/* } */
