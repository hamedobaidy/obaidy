/*
 * Channel.cpp
 *
 *  Created on: Jul 11, 2015
 *      Author: hamed
 */

#include "Channel.h"

namespace obaidy {

/**
 * General Channel class, default constructor
 */
Channel::Channel() {
	area = 0.0;
	wettedPerimeter = 0.0;
	topWidth = 0.0;
	slope = 0.0;
}

Channel::~Channel() {
	// TODO Auto-generated destructor stub
}

double Channel::compute_normal_depth() {
	return 0.0;
}

double Channel::getArea() const {
	return area;
}

void Channel::setArea(double area) {
	this->area = area;
}

double Channel::getSlope() const {
	return slope;
}

void Channel::setSlope(double slope) {
	this->slope = slope;
}

double Channel::getTopWidth() const {
	return topWidth;
}

void Channel::setTopWidth(double topWidth) {
	this->topWidth = topWidth;
}

double Channel::getWettedPerimeter() const {
	return wettedPerimeter;
}

void Channel::setWettedPerimeter(double wettedPerimeter) {
	this->wettedPerimeter = wettedPerimeter;
}

} /* namespace obaidy */

double obaidy::Channel::compute_critical_depth() {
	return 0.0;
}
