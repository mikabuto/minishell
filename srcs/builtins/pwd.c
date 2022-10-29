/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:07:08 by mikabuto          #+#    #+#             */
/*   Updated: 2022/10/29 16:01:25 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/minishell.h" 

int	ft_pwd(void)
{
	char	cwd[MAX_PATH];

	if (getcwd(cwd, MAX_PATH))
	{
		ft_putendl_fd(cwd, 1);
		return (0);
	}
	return (1);
}
