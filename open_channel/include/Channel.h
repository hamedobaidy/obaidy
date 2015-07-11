/*
 * Channel.h
 *
 *  Created on: Jul 11, 2015
 *      Author: hamed
 */

#ifndef CHANNEL_H_
#define CHANNEL_H_

namespace obaidy {

/**
 * General Channel class
 */
class Channel {
public:
	Channel();
	virtual ~Channel();

	virtual double compute_normal_depth();
	virtual double compute_critical_depth();

	double getArea() const;
	void setArea(double area);
	double getSlope() const;
	void setSlope(double slope);
	double getTopWidth() const;
	void setTopWidth(double topWidth);
	double getWettedPerimeter() const;
	void setWettedPerimeter(double wettedPerimeter);

private:
	double area;
	double wettedPerimeter;
	double topWidth;
	double slope;
};

} /* namespace obaidy */

#endif /* CHANNEL_H_ */
