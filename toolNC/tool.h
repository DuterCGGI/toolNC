
#define TOOL_H_
#define PI 3.1415926

class tool
{
private:
	double measuring_position;       //��������ʱx��Ĳ���λ��
	double rotation_angle;           //��ͷ�ܵ���ת�Ƕ�
	double rotation_speed;           //��������ʱA����ת�ٶ�
public:
	void toolcircle(double mea_pos, double rev_spe, int frame);
	void toolcutlen(double helixAgl, double toolR, double cutEdgelen, int frame);
	void toolEdgecircle(double mea_pos, double toolR, int frame);
};