/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:52:50 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/05 00:24:54 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HARL_HPP_
# define HARL_HPP_
# include <iostream>

class Harl {
public:
	void	complain(std::string level);

private:
	typedef void (Harl::*MemberFunction)(void);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};


#endif