/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikverhoeven <rikverhoeven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:17:07 by rikverhoeve       #+#    #+#             */
/*   Updated: 2024/08/19 10:08:09 by rikverhoeve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmini_math.h"

float	ft_rad_to_degr(float x)
{
	if (x == 0)
		return (0);
	x = (x / (2 * M_PI)) * (float)360;
	return (x);
}

float	ft_degr_to_rad(float x)
{
	if (x == 0)
		return (0);
	x = (x * M_PI) / (float)180;
	return (x);
}
