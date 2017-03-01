#include <iostream>

class Neuron
{
private:
    float inputNumber;
	float threshold;
	int ans;
	float *input;
public:
	Neuron(int inputN, float threshold);
};