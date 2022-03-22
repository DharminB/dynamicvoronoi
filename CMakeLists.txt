cmake_minimum_required(VERSION 2.8.3)
project(dynamicvoronoi)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES dynamicvoronoi
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_library(dynamicvoronoi
  src/bucketedqueue.cpp src/dynamicvoronoi.cpp
)

#############
## Testing ##
#############

add_executable(test_voronoi
    test/test_voronoi.cpp
)
target_link_libraries(test_voronoi
    ${catkin_LIBRARIES}
    dynamicvoronoi
)
