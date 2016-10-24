#include <iostream>
#include <screen.h>
#include <figurageometrica.h>
#include <reta.h>
#include <retangulo.h>
#include <circulo.h>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>


using namespace std;

int main(){
    ifstream in;
    string l;
    stringstream ss;
    ofstream out;

    vector <FiguraGeometrica*>  figs;

    int nlin, ncol, x0, y0, x1, y1, xret, yret, altura, largura, xcirc, ycirc, raio, fillmode;
    char brush;

    in.open("in.txt");
        if(!in.is_open()){
            cout << "Erro\n";
    }

    while(in.good()){
        getline(in, l);
        if(in.good()){
            ss.clear();
            ss.str(l);
            while(ss.good()){
                ss >> l;
                if(l.compare(string("dim"))==0){
                    ss >> nlin >> ncol;
                }
                if(l.compare(string("brush"))==0){
                    ss >> brush;
                }
                if(l.compare(string("line"))==0){
                    ss >> x0 >> y0 >> x1 >> y1;
                    figs.push_back(new Reta(x0,y0,x1,y1));
                }
                if(l.compare(string("circle"))==0){
                    ss >> xcirc >> ycirc >> raio >> fillmode;
                    figs.push_back(new Circulo(xcirc,ycirc,raio,fillmode));
                }
                if(l.compare(string("retangle"))==0){
                    ss >> xret >> yret >> largura >> altura;
                    figs.push_back(new Retangulo(xret,yret,largura,altura));
                }

            }
        }
    }


    Screen tela(nlin,ncol);
    for(int i=0; i<figs.size(); i++){
           tela.setBrush(brush);
           figs[i]->draw(tela);
    }

    cout << tela;
    out.open("out.txt");
    if(!out.is_open()){
        cout << "Erro\n";
    }
    if(out.is_open()){
        out << tela;
    }
    out.close();

}
