#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// NPC类,存储任务NPC信息
class NPC {
public:
  string name;
  int hp;
  
  NPC(string n, int h) {
    name = n;
    hp = h; 
  }
};

// 任务目标类
class TaskTarget {
public:
  vector<NPC> targets;
  
  void addTarget(NPC npc) {
    targets.push_back(npc);
  }
};

// 玩家类
class Player {
public:
  int hp;
  int atk;
  
  Player(int h, int a) {
    hp = h;
    atk = a;
  }
  
  // 对目标攻击
  void attack(NPC& target) {
    target.hp -= atk;
    if(target.hp <= 0) {
      cout << target.name << "被击败!" << endl; 
    }
  }
};

int main() {

  // 创建任务目标
  TaskTarget task;
  
  // 添加任务NPC
  NPC monster1("怪物1", 100);
  NPC monster2("怪物2", 80);
  task.addTarget(monster1);
  task.addTarget(monster2);

  // 创建玩家
  Player player(1000, 50);

  // 开始自动战斗
  for(NPC& target: task.targets) {
    while(target.hp > 0) {
      player.attack(target);  
    }
  }

  cout << "任务完成!" << endl;

  return 0;
}
