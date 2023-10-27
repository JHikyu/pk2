#include "Matrix.h"
#include <iostream>

Matrix::Matrix() {
  this->vektors = new Vektor[1];
}

void resize(const Vektor& vektor) {

}
 
void Matrix::addVektor(const Vektor& vektor) {
  // check if this->vektors is full
  int lastIndex = sizeof(this->vektors) / sizeof(this->vektors[0]) - 1;
  if(this->vektors[lastIndex]->x == -1) {
    resize(this->vektors);
  }


}