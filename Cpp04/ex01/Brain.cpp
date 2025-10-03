#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called!\n";
	this->ideas = new std::string[100]; 
}

Brain::Brain(const Brain &cpy){
	std::cout << "Brain copy constructor called!\n";
	if (!cpy.ideas)return;
		this->ideas = new std::string[100];
	std::copy(cpy.ideas, cpy.ideas + 100, this->ideas);
}

Brain &Brain::operator=(Brain &op){
	std::cout << "Brain assigning operation called\n";
	if (this != &op)
			std::swap(this->ideas, op.ideas);
	return *this;
}

void Brain::swapOp(Brain &og, Brain &sw){
	std::swap(og.ideas, sw.ideas);
}

Brain::~Brain(){
	std::cout << "Brain destroyed!\n";
	if (ideas) delete [] ideas;
}

void Brain::getIdeas(int i, std::string dream){
	if (i > 99)	return;
	this->ideas[i] = dream;
}
std::string Brain::sayIdea(int i) const{
	if (i >99) return "";
	return this->ideas[i];
}