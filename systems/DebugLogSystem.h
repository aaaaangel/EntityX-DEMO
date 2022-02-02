//
// Created by aaaaangel on 2022/2/2.
//

#ifndef ENTITYX_DEMO_DEBUGLOGSYSTEM_H
#define ENTITYX_DEMO_DEBUGLOGSYSTEM_H
#include <entityx/entityx.h>
#include <components/Components.h>


class DebugLogSystem : public entityx::System<DebugLogSystem> {
public:
  void configure(entityx::EntityManager& entities, entityx::EventManager& events) override;
  void update(entityx::EntityManager &entities, entityx::EventManager &events, entityx::TimeDelta dt) override;
};

#endif //ENTITYX_DEMO_DEBUGLOGSYSTEM_H
