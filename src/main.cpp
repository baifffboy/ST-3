// Copyright 2026 Yakimov
#include <iostream>
#include <string>
#include <memory>

#include "../include/TimedDoor.h"

int main() {
  try {
    std::cout << "Creating door with 1 second timeout..." << std::endl;
    TimedDoor door(1000);

    std::cout << "Opening door..." << std::endl;
    door.unlock();
    
    std::cout << "Waiting 2 seconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
  } catch (const std::runtime_error& e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
