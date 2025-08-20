#include "Fixed.hpp"

const int Fixed::bytewidth = 8;

Fixed::Fixed() : binary_point(0){
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed::Fixed(const int conv){
	this->setRawBits(conv << this->bytewidth);
}

Fixed::Fixed(const float conv){
	this->setRawBits(round(conv * (1 << this->bytewidth)));
}


Fixed &Fixed::operator=(const Fixed &src){
	if (this != &src)
		this->binary_point = src.binary_point;
	return *this;
}
std::ostream &operator<<(std::ostream &o, const Fixed &src){
	o << src.toFloat();
	return o;
}

bool	Fixed::operator<(const Fixed &b) const{
	return (this->toFloat() < b.toFloat());
}
bool	Fixed::operator>(const Fixed &b) const{
	return this->toFloat() > b.toFloat();
}
bool	Fixed::operator<=(const Fixed &b) const{
	return this->toFloat() <= b.toFloat();
}
bool	Fixed::operator>=(const Fixed &b) const{
	return this->toFloat() >= b.toFloat();
}
bool	Fixed::operator==(const Fixed &b) const{
	return this->toFloat() == b.toFloat();
}
bool	Fixed::operator!=(const Fixed &b) const{
	return this->toFloat() != b.toFloat();
}
float	Fixed::operator+(const Fixed &b) const{
	return this->toFloat() + b.toFloat();
}		
float	Fixed::operator-(const Fixed &b) const{
	return this->toFloat() - b.toFloat();
}		
float	Fixed::operator*(const Fixed &b) const{
	return this->toFloat() * b.toFloat();
}
float	Fixed::operator/(const Fixed &b) const{
	return this->toFloat() / b.toFloat();
}
Fixed	Fixed::operator++(){
	this->binary_point++;
	return *this;
}
Fixed	Fixed::operator--(){
	this->binary_point--;
	return *this;
}
Fixed	Fixed::operator++(int){
	Fixed tmp = *this;
	++this->binary_point;
	return tmp;
}
Fixed	Fixed::operator--(int){
	Fixed tmp = *this;
	--this->binary_point;
	return tmp;
}

int Fixed::getRawBits( void ){
	return this->binary_point;
}

void Fixed::setRawBits( int const toset ){
	this->binary_point = toset;
}

float Fixed::toFloat( void ) const {
	return ((float)this->binary_point / (float)(1 << this->bytewidth));
}

int Fixed::toInt( void ) const {
	return this->binary_point >> this->bytewidth;
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	if (a.toFloat() > b.toFloat())
		return b;
	return a;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	if (a.toFloat() > b.toFloat())
		return b;
	return a;
}
Fixed &Fixed::max(Fixed &a, Fixed &b){
	if (a.toFloat() < b.toFloat())
		return b;
	return a;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	if (a.toFloat() < b.toFloat())
		return b;
	return a;
}
