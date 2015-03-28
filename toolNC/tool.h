
#define TOOL_H_
#define PI 3.1415926

class tool
{
private:
	double measuring_position;       //测量轮廓时x轴的测量位置
	double rotation_angle;           //钻头总的旋转角度
	double rotation_speed;           //测量刃线时A轴旋转速度
public:
	void toolcircle(double mea_pos, double rev_spe, int frame);
	void toolcutlen(double helixAgl, double toolR, double cutEdgelen, int frame);
	void toolEdgecircle(double mea_pos, double toolR, int frame);
};