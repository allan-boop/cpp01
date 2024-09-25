#pragma once
#include <iostream>

typedef std::string str;

class Harl
{
	public:
		void complain( str level );

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};