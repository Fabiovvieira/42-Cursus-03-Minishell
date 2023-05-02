/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:25:58 by kfaustin          #+#    #+#             */
/*   Updated: 2023/04/21 14:25:58 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

/*void	ft_parser(t_tokens *parser, char *str)
{
	int	i;

	i = 0;
	parser->tokens = ft_split(str, ' ');
	parser->cmd = parser->tokens[i++];
	parser->flag = parser->tokens[i++];
	parser->complement = parser->tokens[i];
}*/

void	ft_parser(char *input)
{
	int		i;
	int		n_pipes;
	char	**cmds;

	i = -1;
	n_pipes = 0;
	while (input[++i])
		if (input[i] == '|')
			n_pipes++;
	if (n_pipes >= 1)
		cmds = ft_split(input, '|');
}
