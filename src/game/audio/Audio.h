#pragma once

#include <iostream>

struct PlayMessage
{
  std::string id;
  int volume;
};

class Audio
{
public:
    static void init();
    static void playSound(std::string id, int volume);
    static void update();

private:
    // max pending audio play requests
    static const int MAX_PENDING = 16;
    static PlayMessage pending_[MAX_PENDING];
    static int numPending_;
};
