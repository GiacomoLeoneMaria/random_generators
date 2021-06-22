#ifndef _Gauss_h_
#define _Gauss_h_
#include <cmath>
#include "FunzioneBase.h"

class Gauss:public FunzioneBase {
	
	public:
	Gauss();
	Gauss(double mu, double sigma);
	~Gauss();

	double Eval(double x) const {return 1./(m_sigma*sqrt(2*M_PI))*exp(-pow(x-m_mu,2)/(2*pow(m_sigma,2)));}

	private:
	double m_sigma;
	double m_mu;
};

#endif
