//
// Created by aaaaangel on 2022/2/2.
//

#ifndef ENTITYX_DEMO_APPLICATION_H
#define ENTITYX_DEMO_APPLICATION_H
#include <iostream>
#include <entityx/entityx.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "systems/DebugLogSystem.h"
#include "components/Components.h"

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

class Application : public entityx::EntityX {
public:
  // 初始化
  explicit Application();

  // 渲染循环
  void update(entityx::TimeDelta dt);

  // process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
  void processInput(GLFWwindow *window);

  // glfw: whenever the window size changed (by OS or user resize) this callback function executes
  // ---------------------------------------------------------------------------------------------
  static void framebuffer_size_callback(GLFWwindow* window, int width, int height);

private:
  GLFWwindow* window_; //
};

#endif //ENTITYX_DEMO_APPLICATION_H
