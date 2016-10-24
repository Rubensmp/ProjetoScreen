#include "screen.h"
#include <iostream>
#include <vector>

Screen::Screen(int nlin, int ncol){
    vector< vector<char> > tela(nlin,vector<char>(ncol,' '));
    this->nlin=nlin;
    this->ncol=ncol;
    mat = tela;
}

void Screen::setPixel(int x, int y){
    mat[x][y]=brush;
}

void Screen::clear(){
    vector< vector<char> > clear(nlin,vector<char>(ncol,' '));
    mat = clear;
}

void Screen::setBrush(char brush){
    this->brush=brush;
}

ostream& operator<<(ostream &os, Screen &t){
  for(int i=0; i<t.nlin; i++){
    for(int j=0; j<t.ncol; j++){
      os << t.mat[i][j];
    }
    os << endl;
  }
  return os;
}
