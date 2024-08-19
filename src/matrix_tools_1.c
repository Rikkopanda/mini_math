/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_tools_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikverhoeven <rikverhoeven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:29:32 by rverhoev          #+#    #+#             */
/*   Updated: 2024/08/19 09:42:53 by rikverhoeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_math.h"

void	init_comp_m(t_vec4f comp[3])
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 4)
		{
			comp[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	compilation_matrix(t_vec4f comp[3], t_vec4f R[3], t_vec4f R3[3])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	init_comp_m(comp);
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			k = 0;
			while (k < 3)
			{
				comp[i][j] += R[i][k] * R3[k][j];
				k++;
			}
			j++;
		}
		i++;
	}
}

void	matrix_multiply_1x3_3x3(t_vec4f *m1, t_vec4f m2[3], t_vec4f *result_m)
{
	int	i;
	int	j;

	*result_m = (t_vec4f){0, 0, 0, 0};
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			(*result_m)[i]
				+= (*m1)[j]
				* m2[j][i];
			j++;
		}
		i++;
	}
}
