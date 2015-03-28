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

	NCtool::toolcircle(mea_pos, rev_spe, frame, "toolcircle.txt");
	NCtool::toolcutlen(helixAgl, toolR, cutEdgelen, frame, "toolcutlen.txt");
	NCtool::toolEdgecircle(mea_pos, toolR, frame, "toolEdgecircle.txt");
	return 0; 
}