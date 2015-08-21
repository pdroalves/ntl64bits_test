
#include <NTL/ZZ.h>

NTL_CLIENT

int main(){

	int N = 128;

	uint64_t Puint64 = 18446744069414584321;
	uint64_t kuint64 = (Puint64-1)/N;
	uint64_t wNuint64 = NTL::PowerMod(7,kuint64,Puint64);

	std::cout << "It fails: " << std::endl;
	std::cout << "P: " << Puint64 << std::endl;
	std::cout << "k: " << kuint64 << std::endl;
	std::cout << "wN: " << wNuint64 << std::endl;

	std::cout << std::endl;

	ZZ P = conv<ZZ>("18446744069414584321");
	uint64_t k = conv<uint64_t>(P-1)/N;
	ZZ wN = NTL::PowerMod(ZZ(7),k,P);
	uint64_t wNuint64t = conv<uint64_t>(wN);

	std::cout << "It works: " << std::endl;
	std::cout << "P: " << P << std::endl;
	std::cout << "k: " << k << std::endl;
	std::cout << "wN: " << wN << std::endl;
	std::cout << "wNuint64t: " << wNuint64t << std::endl;

	return 0;
}
