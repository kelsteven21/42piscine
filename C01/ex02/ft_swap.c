/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- < rbomfim-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:42:04 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/01/31 16:35:27 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	cup;

	cup = *a;
	*a = *b;
	*b = cup;
}

/* int main()
{
	int a;
	int b;

	a = 2;
	b = 4;

	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
} */
