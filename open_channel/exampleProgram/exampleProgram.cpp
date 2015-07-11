/*
 ============================================================================
 Name        : exampleProgram.c
 Author      : Hamed Mohammdi
 Version     :
 Copyright   : GNU General Public Lisence V2
 Description : Uses shared library to print greeting
               To run the resulting executable the LD_LIBRARY_PATH must be
               set to ${project_loc}/libOpenChannel/.libs
               Alternatively, libtool creates a wrapper shell script in the
               build directory of this program which can be used to run it.
               Here the script will be called exampleProgram.
 ============================================================================
 */

#include <iostream>

#include "Channel.h"
#include "RectChannel.h"

using namespace obaidy;

int main() {
  Channel channel;
  double y = channel.compute_normal_depth();

  std::cout << "Normal depth: " << y << std::endl;

  RectChannel rect;
  rect.setBase(10.0);
  std::cout << "Rectangular channel with base width = " << rect.getBase() << std::endl;

  return 0;
}
