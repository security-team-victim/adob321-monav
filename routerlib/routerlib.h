#pragma once

extern "C" {
    enum RoutingResult {
        ROUTING_OK = 0,
        ROUTING_FROM_NOT_FOUND,
        ROUTING_TO_NOT_FOUND,
        ROUTING_PATH_NOT_FOUND,
        ROUTING_ERROR
    };
    
    int init(const char *path);
    int route(double from_lat, double from_lng, double to_lat, double to_lng,
              int *time, int *distance);
}