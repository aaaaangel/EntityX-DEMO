//
// Created by aaaaangel on 2022/2/2.
//
#include <iostream>
#include <entityx/entityx.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "systems/DebugLogSystem.h"
#include "components/Components.h"
#include "Application.h"

int main() {
  Application app;
  int T = 1000000;
  while (T--) {
    app.update(T);
  }

  // glfw: terminate, clearing all previously allocated GLFW resources.
  // ------------------------------------------------------------------
  glfwTerminate();
}
