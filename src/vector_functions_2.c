/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_functions_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikverhoeven <rikverhoeven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:19:24 by rverhoev          #+#    #+#             */
/*   Updated: 2024/08/19 09:42:53 by rikverhoeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_math.h"

float	dot3(t_vec4f vec_A, t_vec4f vec_B)
{
	return ((vec_A[0] * vec_B[0]) + \
		(vec_A[1] * vec_B[1]) + (vec_A[2] * vec_B[2]));
}

t_vec4f	cross3(t_vec4f vec_A, t_vec4f vec_B)
{
	return ((t_vec4f){
		(vec_A[1] * vec_B[2]) - (vec_B[1] * vec_A[2]), \
		(vec_A[2] * vec_B[0]) - (vec_B[2] * vec_A[0]), \
		(vec_A[0] * vec_B[1]) - (vec_B[0] * vec_A[1]), 0});
}

float	vector_length(t_vec4f v)
{
	return (sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]));
}

void	vector_scaling(t_vec4f *v, float scale)
{
	*v = *v * scale;
}
