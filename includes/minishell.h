/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:29:44 by kfaustin          #+#    #+#             */
/*   Updated: 2023/04/28 10:41:02 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

// * Includes *
# include "./libft/libft.h"
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <stdbool.h>
# include <unistd.h>

// * Includes Header *
# include "parser.h"

// * Macros *
typedef struct s_env	t_env;

struct s_env
{
	char	*key;
	char	*value;
	t_env	*next;
};

typedef struct s_root
{
	char	*prompt;
	char	*user;
	char	*s_manager;
	char	*home;
	char	*path;
	t_env	*list;
}		t_root;

// *** Functions ***
void	ft_parser(char *input);
// * env_list.c
void	env_to_list(t_root *root, char **env);
void	init_env_node(t_env **node, char *key, char *value);
void	stack_env_list(t_root *root, t_env *node);
// * list_handle.c
char	*get_value_from_key(t_env *header, char *key);
// * utils.c
void	putstring_exit(char *str, int flag);
char	*display_prompt(t_root *root);
void	free_t_env(t_env *list);
void	free_t_root(t_root *root);
bool	check_syntax_prompt(char *input);
#endif
