/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_handle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:37:33 by kfaustin          #+#    #+#             */
/*   Updated: 2023/04/29 18:43:41 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

char	*get_value_from_key(t_env *header, char *key)
{
	t_env	*tmp;
	char	*str;

	tmp = header;
	while (tmp)
	{
		if (ft_strncmp(tmp->key, key, (ft_strlen(key) + 1)) == 0)
		{
			str = ft_strdup(tmp->value);
			return (str);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

/* void	modify_value_from_key(t_env *header, char *key)
{
	t_env	*tmp;
	char	*str;

	tmp =
} */

void	export_new_node(t_root *root, char *key, char *value)
{
	t_env	*header;
	t_env	*node;
/* 	char	*str;

	str = get_value_from_key(root->list, key);
	if (str)
	{
		free (str);
	} */
	header = root->list;
	while (root->list->next)
		root->list = root->list->next;
	init_env_node(&node, key, value);
	root->list = header;
	stack_env_list(root, node);
}
