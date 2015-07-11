/*
 * RectChannel.h
 *
 *  Created on: Jul 12, 2015
 *      Author: hamed
 */

#ifndef RECTCHANNEL_H_
#define RECTCHANNEL_H_

#include "Channel.h"

namespace obaidy {

/**
 * Channel with rectangular cross section
 */
class RectChannel: public Channel {
public:
	RectChannel();
	virtual ~RectChannel();
	double getBase() const;
	void setBase(double base);

private:
	double base;
};

} /* namespace obaidy */

#endif /* RECTCHANNEL_H_ */
