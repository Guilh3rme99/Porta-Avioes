#ifndef REX_HPP_
#define REX_HPP_

#include <vector>

#include "abcg.hpp"
#include "util.hpp"


class Rex {
 public:
  void initializeGL(GLuint program);
  void paintGL(GLint modelMatrixLoc, GLint colorLoc);
  void terminateGL();
  void loadFromFile(std::string_view path);

 private:
  GLuint m_VAO{};
  GLuint m_VBO{};
  GLuint m_EBO{};

  GLuint m_program{};

  std::vector<Vertex> m_vertices;
  std::vector<GLuint> m_indices;

  void update();
};

#endif