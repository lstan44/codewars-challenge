#include<vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  //your code here
  int geton=0;
  int getoff=0;
  for(int i=0; i<busStops.size(); i++){
  //total num of people getting on the bus
    geton += busStops[i].first;
    //total people of people getting off the bus
    getoff +=busStops[i].second;
  }
  //geton - getoff returns the number of people who stay in the bus
  return geton-getoff;
}
