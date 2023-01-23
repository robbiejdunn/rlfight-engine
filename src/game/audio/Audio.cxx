#include "Audio.h"
#include <assert.h> 

void Audio::init()
{
    numPending_ = 0;
}

void Audio::playSound(std::string id, int volume)
{
    assert(numPending_ < MAX_PENDING);
    pending_[numPending_].id = id;
    pending_[numPending_].volume = volume;
    numPending_++;
}

void Audio::update()
{
    for (int i = 0; i < numPending_; i++)
    {
        
    }
}