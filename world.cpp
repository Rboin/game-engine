//
// Created by Erik on 3/10/2016.
//

#include "world.h"

void World::update (int time_elapsed) {
    // update obstacles
    for(std::vector<Obstacle *>::iterator it = m_obstacles.begin(); it != m_obstacles.end(); ++it) {
        (*it)->update(time_elapsed);
    }
    // update vehicles
    for(std::vector<Vehicle *>::iterator it = m_vehicles.begin(); it != m_vehicles.end(); ++it) {
        (*it)->update(time_elapsed);
    }
}

void World::render () {
    // render obstacles
    for(std::vector<Obstacle *>::iterator it = m_obstacles.begin(); it != m_obstacles.end(); ++it) {
        (*it)->render();
    }
    // render vehicles
    for(std::vector<Vehicle *>::iterator it = m_vehicles.begin(); it != m_vehicles.end(); ++it) {
        (*it)->render();
    }
}

void World::reset() {
//    m_vehiclesobstacles.clear();
//    m_vehicles.clear();
}

void World::add_vehicle (Vehicle *vehicle) {
    m_vehicles.push_back(vehicle);
}

void World::add_obstacle(Obstacle *obstacle) {
    m_obstacles.push_back(obstacle);
}

World::World () {
}