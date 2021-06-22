#include "Gauss.h"

using namespace std;

Gauss::Gauss() {
	m_mu=0; //mean
	m_sigma=0;
}

Gauss::Gauss(double mu, double sigma) {
	m_mu=mu;
	m_sigma=sigma;
}

Gauss::~Gauss() { }
