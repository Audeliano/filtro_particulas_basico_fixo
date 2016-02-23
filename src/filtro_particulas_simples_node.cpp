#include "filtro_particulas_simples.h"

int main (int argc, char** argv)
{
	ros::init( argc, argv, "filtro_particulas_simples_node" );

	ros::NodeHandle n;

	Filtro_Particulas_Simples fps(n);

	fps.spin();

	return 0;

}
