#include <iostream>
#include <fstream>

#include "animal_record.h"

int main(int argc, char **argv)
{
	if(argc != 2)
		exit(-1);

	std::ifstream ifs(argv[1], std::ifstream::binary);
	kaitai::kstream ks(&ifs);
	animal_record_t animal = animal_record_t(&ks);

	std::cout << "name:\t" << animal.name() << '\n';
	std::cout << "weight:\t" << animal.weight() << '\n';

	return 0;
}