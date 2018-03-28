#include <iostream>
#include <fstream>
#include <string>

#include "png.h"

int main(int argc, char **argv)
{
	if(argc != 2)
		exit(-1);

	std::ifstream ifs(argv[1], std::ifstream::binary);
	kaitai::kstream ks(&ifs);
	png_t png = png_t(&ks);



	std::string magic = png.magic();
	std::cout << magic;

	png_t::ihdr_chunk_t* ihdr = png.ihdr();

	std::cout << ihdr->width() << " x " << ihdr->height() << ", bitdepth: " << std::to_string(ihdr->bit_depth()) << '\n';


	return 0;
}