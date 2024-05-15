#include "AveragingFilter.h"

void AveragingFilter::init(int fixedSampleNum){
  sampleNum = fixedSampleNum;
  ctAvg = 0;
  flag_rotation = false;
  data = new float[sampleNum];
  for (int ctInit=0; ctInit<sampleNum; ctInit++){
    data[ctInit] = 0;
  }
}

void AveragingFilter::storeMeasuredData(float input){
  if (ctAvg == sampleNum){
    ctAvg = 0;
    flag_rotation = true;
  }
  data[ctAvg] = input;
  ctAvg++;
}

float AveragingFilter::outputAveragingData(){
  float output = 0;
  for(int ctSum=0; ctSum<sampleNum; ctSum++){
    output += data[ctSum];
  }
  if (!flag_rotation) {
    output = output / ctAvg;
  } else {
    output = output / sampleNum;
  }
  return output;
}
