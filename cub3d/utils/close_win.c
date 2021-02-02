/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_win.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <fngoc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:31:17 by fngoc             #+#    #+#             */
/*   Updated: 2021/02/02 13:07:39 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

/*
** close_win: закрытие окна и выход из программы.
*/

int	close_win(t_cub *cub)
{
	mlx_destroy_window(cub->mlx, cub->mlx_win);
	system("killall afplay");
	exit(0);
	return (0);
}