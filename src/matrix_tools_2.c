/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_tools_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikverhoeven <rikverhoeven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:29:32 by rverhoev          #+#    #+#             */
/*   Updated: 2024/08/19 09:42:53 by rikverhoeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_math.h"

void	print_matrix_1_3(t_vec4f m)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		printf("%f\t", m[i]);
		i++;
	}
	printf("\n");
}

void	print_matrix_3_3(t_vec4f m[3])
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			printf("%f\t", m[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}
