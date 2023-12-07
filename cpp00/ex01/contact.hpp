/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:25:55 by aminoru-          #+#    #+#             */
/*   Updated: 2023/10/19 12:11:06 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact{
	public:
		Contact(void);
		~Contact(void);
		
		std::string getFirstName(void) const;
		void setFirstName(std::string firstName);
		
		std::string getLastName(void) const;
		void setLastName(std::string lastName);
		
		std::string getNickName(void) const;
		void setNickName(std::string nickName);
		
		std::string getPhoneNumber(void) const;
		void setPhoneNumber(std::string phoneNumber);
		
		std::string getSecretCode(void) const;
		void setSecretCode(std::string secretCode);
	
	private:
		std::string _firstName;	
		std::string _lastName;	
		std::string _nickName;	
		std::string _phoneNumber;	
		std::string _secretCode;	
};

#endif
