void Tutorial12(){

 TCanvas *c1 = new TCanvas();
 
 TF1 *func = new TF1("func","exp(-[1]*x)*[0]*sin(x)",0,10*TMath::Pi()); //Funcion y rango

 func->SetTitle("");

 func->SetParameter(0,1);
 func->SetParameter(1,0.1);
 func->Draw();
}
