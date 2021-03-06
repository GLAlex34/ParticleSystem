#pragma once

#define SHADER_H_

#include "CompiledHeaders.h"
#include "Math/UtilityFunctions.h"
#include "Math/Math.h"
#include "GlobalVariables.h"

namespace ParticleSystem
{
	enum
	{
		GL_VERTEX_POSITION,
		GL_VERTEX_COLOR
	};

	class Shader
	{
	public:
		Shader();

		void bind();
		void unbind();
		void load_shaders();
		void compile_shaders();
		void catch_shader_error(GLuint shader, GLuint flag, bool is_prog, std::string err);
		void set_uniform4f(std::string name, glm::vec4 const & col);
		void set_uniform_matrix4fv(std::string name, glm::mat4 const & mat);
		GLuint create_shader(std::string text, GLenum shader_type);

		void resize(int size);
		void insert(GLuint shader);

		GLuint get_program_handler();

		virtual ~Shader();
	private:
		const int default_capacity = 4;
		int capacity;

		GLuint shader_handler;

		GLuint size = 0;
		GLuint * shaders;

		GLuint get_uniform_location(std::string name);
	};
}