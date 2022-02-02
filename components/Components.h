//
// Created by aaaaangel on 2022/2/2.
//

#ifndef ENTITYX_DEMO_COMPONENTS_H
#define ENTITYX_DEMO_COMPONENTS_H

class Component {
public:
  Component() : enabled_(true) {};
  Component(int com_id, int ent_id, bool enabled) : component_id_(com_id), entity_id_(ent_id), enabled_(enabled) {};
  int component_id_;
  int entity_id_;
  bool enabled_;
};

#endif //ENTITYX_DEMO_COMPONENTS_H
