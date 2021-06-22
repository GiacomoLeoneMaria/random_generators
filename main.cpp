#include "Random.h"
#include "TApplication.h"
#include "TH1F.h"
#include "TCanvas.h"

using namespace std;

int main() {

TApplication app("app",0,0);
TH1F isto1("AcceptReject mean=0, sigma=2","AcceptReject mean=0, sigma=2",100,-5,5);
TH1F isto2("AcceptReject mean=1, sigma=1","AcceptReject mean=1, sigma=1",100,-5,5);

Random rand(2);

for(int i=0; i<10000000; i++) {
	double tmp1=rand.AcceptReject(5,0,2);
	double tmp2=rand.AcceptReject(5,1,1);
	isto1.Fill(tmp1);
	isto2.Fill(tmp2);
	}

TCanvas *myCanvas=new TCanvas("c1","c2",1);
myCanvas->Divide(1,2);
myCanvas->cd(1);
isto1.Draw("AL*");
myCanvas->cd(2);
isto2.Draw("AL*");

app.Run();

return 0;
}	

