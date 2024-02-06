#include <iostream>
using namespace std;
#include <unistd.h>

enum LightState {
  RED, 
  YELLOW,
  GREEN
};

class TrafficLight {
public:
  void run();

private:
  LightState state;

  void changeState();
  void display();
};

void TrafficLight::run() {
  while(true) {
    changeState();
    display();
    sleep(10);// 每10秒改变一次
  }
}

void TrafficLight::changeState() {
  switch(state) {
    case RED: 
      state = YELLOW;
      break;
    case YELLOW:
      state = GREEN;  
      break;
    case GREEN:
      state = RED;
      break;
  }
}

void TrafficLight::display() {
  switch(state) {
    case RED:
      cout << "红灯亮" << endl;
      break;
    case YELLOW:  
      cout << "黄灯亮" << endl;
      break;
    case GREEN:
      cout << "绿灯亮" << endl; 
      break;
  }
}

int main() {
  TrafficLight light;
  light.run();
  
  return 0;
}
