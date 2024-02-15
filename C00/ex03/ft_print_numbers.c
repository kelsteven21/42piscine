/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- < rbomfim-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:09:56 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/01/26 12:55:00 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(char i)
{
	write(1, &i, 1);
}

void	ft_print_numbers(void)
{
	int	r;

	r = 0;
	while (r <= 9)
	{
		ft_print_number(r + '0');
		r = r + 1;
	}
}
