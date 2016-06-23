/*
 * Copyright (C) 2015  eBusiness Information
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef ARPIGL_MAPMANAGER_HPP
#define ARPIGL_MAPMANAGER_HPP

#include <string>
#include <memory>
#include <map>

#include "resource/Map.hpp"
#include "resource/GpuResourceManagerHandler.hpp"

namespace dma {

    class MapManager : public GpuResourceManagerHandler<Map> {

    public:
        MapManager(const std::string& localDir);
        MapManager(const MapManager&) = delete;
        MapManager& operator=(const MapManager&) = delete;

        bool hasResource(const std::string& sid) const;

    private:
        void load(std::shared_ptr<Map>, const std::string& sid);
    };
}

#endif //ARPIGL_MAPMANAGER_HPP
