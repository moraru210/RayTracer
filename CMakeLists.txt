cmake_minimum_required(VERSION 3.17)
project(RayTracing)

set(CMAKE_CXX_STANDARD 20)

add_executable(RayTracing main.cc common/color.h common/vec3.h common/ray.h hittable.h sphere.h hittable_list.h common/constants.h common/camera.h material.h)