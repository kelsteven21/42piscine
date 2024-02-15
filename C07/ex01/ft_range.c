/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:01:04 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/12 19:06:48 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr_range;
	int	range;

	if (min >= max)
		return (NULL);
	range = max - min;
	arr_range = malloc(sizeof(int) * range);
	if (!arr_range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr_range[i] = min;
		min++;
		i++;
	}
	return (arr_range);
}

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*result_arr;

	i = -1;
	min = 1;
	max = 10;
	result_arr = ft_range(min, max);
	while (++i < max - min)
		printf("%i\n", result_arr[i]);
	free(result_arr);
	return (0);
}
