/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:41:56 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/07 19:20:13 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[count] == s2[count] && (s1[count] != '\0') && (count < n))
	{
		count++;
	}
	if (count == n)
	{
		return (0);
	}
	return (s1[count] - s2[count]);
}

/* int	main(void)
{
	printf("%d", ft_strncmp("test1", "test1", 4));
	return (0);
}
 */
