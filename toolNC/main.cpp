#include <iostream>
#include "tool.h"

int main()
{
	double mea_pos = 10;
	double rev_spe = 34;
	double helixAgl = 45;
	double toolR = 6;
	double cutEdgelen = 24;
	int frame = 6;

	tool circle;
	circle.toolcircle(mea_pos, rev_spe, frame);
	circle.toolcutlen(helixAgl, toolR, cutEdgelen, frame);
	circle.toolEdgecircle(mea_pos, toolR, frame);
	return 0; 
}