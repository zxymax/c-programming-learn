#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

// 对象定义
struct GameObject; 
struct Player;
struct Monster;
struct Ore;
struct Station;

// 主循环
void MainLoop() {

  Player& player = GetPlayer();

  // 检测附近怪物
  vector<Monster*> monsters = DetectMonsters();

  // 如果有怪物
  if (!monsters.empty()) {

    // 自动攻击第一个怪物
    AttackMonster(monsters[0]);

    // 检测死亡
    if (monsters[0]->IsDead()) {

      // 获取掉落物
      LootMonster(monsters[0]);

      // 删除对象指针
      delete monsters[0];

      // 继续下一个循环
      monsters.erase(monsters.begin());
    }
  }

  // 检测附近矿石
  vector<Ore*> ores = DetectOres();

  // 如果有矿石
  if (!ores.empty()) {

    // 自动采集第一个矿石
    MineOre(ores[0]);

    // 删除对象指针
    delete ores[0];

    // 继续下一个循环
    ores.erase(ores.begin());
  }

  // 检测附近玩家
  vector<Player*> players = DetectPlayers();

  // 如果有其他玩家
  if (!players.empty() && players[0] != &player) {

    // 自动规避
    FleeFromPlayer(players[0]);
  }

  // 检测是否在站点内
  if (player.InStation()) {

    // 如果在站点内,自动出站
    if (WantToLeaveStation()) {
      LeaveStation();
    }
  }
  else {

    // 如果不在站点内,自动进站  
    Station* station = GetClosestStation();
    if (station) {
      EnterStation(station);
    }
  }

  // 每秒执行一次循环
  Sleep(1000);
}

int main() {

  // 初始化玩家对象
  Player& player = InitPlayer();

  while(true) {
    MainLoop();
  }

  return 0;
}
