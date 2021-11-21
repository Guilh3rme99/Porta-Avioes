#ifndef UTIL_HPP_
#define UTIL_HPP_

#include <vector>

#include "abcg.hpp"

struct Vertex {
  glm::vec3 position{};

  bool operator==(const Vertex& other) const noexcept {
    return position == other.position;
  }
};

#endif