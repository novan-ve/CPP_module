#include "Pair.class.tpp"
#include <iostream>


int		main( void ) {

	Pair< int, int >			p1( 4, 2 );
	Pair< std::string, float >	p2( std::string( "Pi" ), 3.14f );
	Pair< float, bool >			p3( 4.2f, true );
	Pair< bool, bool >			p4( true, false );

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;

	return 0;
}

//Int partial specialization
//Generic template
//Generic template
//Bool/bool specialization
//Pair( 4, 2 )
//Pair( Pi, 3.14 )
//Pair( 4.2, 1 )
//Pair( true, false )
