
#include<iostream>
#include<fstream>
#include<string>
#include "tool.h"

using namespace std;

void tool::toolcircle(double mea_pos, double rev_spe, int frame)
{

	const char * file = "toolcircle.txt";

	measuring_position = -mea_pos;
	rotation_speed = 45 * frame;

	ofstream fout(file, ios_base::out | ios_base::trunc);

	fout << "N10 G91" << endl;
	fout << "N20 G00 X" << measuring_position << endl;
	fout << "N30 G01 A360 F" << rotation_speed << endl;
	fout << "N40 G00 X" << -measuring_position << " A" << -360 << endl;
	fout << "N50 M30" << endl;
	fout.close();
} 
void tool::toolcutlen(double helixAgl,double toolR,double cutEdgelen,int frame)
{

	const char * file = "toolcutlen.txt";

	rotation_angle = (cutEdgelen * tan(helixAgl)) / (2 * PI * toolR) * 360;
	rotation_speed = 45 * frame;

	ofstream fout(file, ios_base::out | ios_base::trunc);

	fout << "N10 G91" << endl;
	fout << "N20 #5=0" << endl;
	fout << "N30 WHILE[[#5*90] LT 360] DO" << endl;
	fout << "N40 G00 A90" << endl;
	fout << "N50 G01 X" << -cutEdgelen << " A" << rotation_angle << " F" << rotation_speed << endl;
	fout << "N60 G00 X" << cutEdgelen << " A" << -rotation_angle << endl;
	fout << "N70 #5 = #5 + 1" << endl;
	fout << "N80 ENDWHILE" << endl;
	fout << "N90 G00 A-360" << endl;
	fout << "N90 M30" << endl;
	fout.close();

}

void tool::toolEdgecircle(double mea_pos, double toolR, int frame)
{
	const char * file = "toolEdgecircle.txt";

	measuring_position = -mea_pos;
	rotation_speed = 45 * frame;
	
	ofstream fout(file, ios_base::out | ios_base::trunc);

	fout << "N10 G91" << endl;
	fout << "N20 G00 X" << mea_pos << " Y" << -toolR << " Z" << -toolR << endl;
	fout << "N30 G01 A360 F" << rotation_speed << endl;
	fout << "N40 G00 X" << -mea_pos << " Y" << toolR << " Z" << toolR  << endl;
	fout << "N50 M30" << endl;

	fout.close();
}