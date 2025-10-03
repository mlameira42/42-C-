#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
class Brain{
	private:
		std::string *ideas;
	public:
	Brain();
	Brain(const Brain &cpy);
	Brain &operator=(Brain &op);
	virtual ~Brain();
	void swapOp(Brain &og, Brain &sw);
	void getIdeas(int i, std::string dream);
	std::string sayIdea(int i) const;
};

#endif