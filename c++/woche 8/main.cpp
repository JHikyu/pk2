#include <iostream>

class Vektor {
private:
    int dimension;
    double* zahlen;

public:
    Vektor(int dim);
    void setValue(int dim, double value);
    Vektor operator*(const Vektor& rechts); // Operator overloading
    double getValue(int dim) const;
};

Vektor::Vektor(int dim) {
    this->dimension = dim;
    this->zahlen = new double[dim];
}

void Vektor::setValue(int dim, double value) {
    if (dim >= 0 && dim < this->dimension)
        *(this->zahlen + dim) = value;
}

double Vektor::getValue(int dim) const {
    if (dim >= 0 && dim < this->dimension)
        return *(this->zahlen + dim);

    return -1;
}

Vektor Vektor::operator*(const Vektor& rechts) const {
    Vektor newVektor(this->dimension);

    for (int i = 0; i < this->dimension; i++) {
        double value = *(this->zahlen + i) * rechts.getValue(i);
        newVektor.setValue(i, value);
    }

    return newVektor;
}

int main() {
    Vektor v1(2);
    v1.setValue(0, 5);
    v1.setValue(1, 7);

    Vektor v2(2);
    v2.setValue(0, 5);
    v2.setValue(1, 7);

    Vektor result = v1 * v2;

    std::cout << result.getValue(0) << std::endl;

    return 0;
}
