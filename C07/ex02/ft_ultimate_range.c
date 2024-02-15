/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:25:26 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/12 20:47:36 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_size;
	int	i;

	range_size = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range_size = max - min;
	*range = malloc(sizeof(int) * range_size);
	if (!*range)
		return (-1);
	i = -1;
	while (min < max)
	{
		(*range)[++i] = min;
		min++;
	}
	return (range_size);
}

int	main(void)
{
	int	result;
	int	*ultimate_arr;
	int	min;
	int	max;

	min = 25;
	max = 20;
	result = ft_ultimate_range(&ultimate_arr, min, max);
	printf("%i\n", result);
	return (0);
}
