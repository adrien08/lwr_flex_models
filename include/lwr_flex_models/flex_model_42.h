#ifndef __FLEX_MODEL42_HPP__
#define __FLEX_MODEL42_HPP__

#include <lwr_flex_models/flex_model.h>

class flexmod42: public FlexModel{

public:
  flexmod42(){}
  void compute(const Eigen::Matrix<double,7,1> &pos_ang,const Eigen::Matrix<double,6,1> & effort,Eigen::Matrix<double,7,1> &correction_pos_ang);
};

#endif
