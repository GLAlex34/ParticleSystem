#pragma once

#include "CompiledHeaders.h"
#include "Macro.h"

namespace ParticleSystem
{
	static std::string model_extension[] =
	{
		".obj"
	};

	//===== Model file extension =====//
	enum ModelExtension
	{
		OBJ
	};

	class Global
	{
	public:
		SINGLETONIZE(Global)
		Global() {}
		unsigned int window_width = 1200;
		unsigned int window_height = 700;
		const char * window_title = "Particle System";
		const char* model_path = "Model";
		const char* shader_path = "Shader";
	};
}