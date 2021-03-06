#pragma once

#define VERTEXBUFFER_H_

#include "../CompiledHeaders.h"
#include "../Type/Vertex.h"

namespace ParticleSystem
{
	class VertexBuffer : public DynamicObject<GLuint>
	{
	public:
		void load(Vertex const & vertex);
		void generate_buffers();
		void bind();
		void unbind() const;

		virtual ~VertexBuffer();
	private:
		DynamicObject<Vertex> cache;
	};
}
