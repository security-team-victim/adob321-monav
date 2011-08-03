#pragma once


    enum RoutingResult {
        ROUTING_OK = 0,
        ROUTING_FROM_NOT_FOUND,
        ROUTING_TO_NOT_FOUND,
        ROUTING_PATH_NOT_FOUND,
        ROUTING_ERROR
    };
    
extern "C" int init(const char *path);
extern "C" int route(double from_lat, double from_lng, double to_lat, double to_lng,
              double *time, double *distance);
