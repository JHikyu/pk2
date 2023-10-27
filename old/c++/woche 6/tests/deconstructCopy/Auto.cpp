#include "Auto.h"
#include <iostream>

Auto::Auto(int reifen, int fenster, int ps) {
  this->reifen = reifen;
  this->fenster = fenster;
  this->ps = ps;
}

Auto::~Auto() {
  std::cout << "Auto destructored" << std::endl;
}

int Auto::getReifen() {
  return reifen;
}

int Auto::getFenster() {
  return fenster;
}

int Auto::getPs() {
  return ps;
}

void Auto::setReifen(int reifen) {
  this->reifen = reifen;
}

void Auto::setFenster(int fenster) {
  this->fenster = fenster;
}

void Auto::setPs(int ps) {
  this->ps = ps;
}

void Auto::print() {
  std::cout << "Auto: " << this->reifen << " Reifen, " << this->fenster << " Fenster, " << this->ps << " PS." << std::endl;
}