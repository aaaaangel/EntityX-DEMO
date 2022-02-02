//
// Created by aaaaangel on 2022/2/2.
//
#include "DebugLogSystem.h"

void DebugLogSystem::configure(entityx::EntityManager& entities, entityx::EventManager& events) {
  std::cout << "========== DebugLogSystem::configure ==========" << std::endl;
  BaseSystem::configure(entities, events);
  auto entity = entities.create();
  entity.assign<Component>(1,2,1);
  std::cout << "========== DebugLogSystem::configure ==========" << std::endl;
}

void DebugLogSystem::update(entityx::EntityManager &entities, entityx::EventManager &events, entityx::TimeDelta dt) {
  std::cout << "========== DebugLogSystem::update ==========" << std::endl;
  entities.each<Component>([](entityx::Entity entity, Component &component) {
    std::cout << "Entity.id(): " << entity.id() << std::endl;
    std::cout << "Component id: " << component.component_id_ << std::endl;
    std::cout << "Entity id: " << component.entity_id_ << std::endl;
    std::cout << "Enabled: " << component.enabled_ << std::endl;
  });
  std::cout << "========== DebugLogSystem::update ==========" << std::endl;
}
