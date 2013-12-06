#pragma once
#include <stdint.h>
#include <cuda.h>
#include "glm/glm.hpp"

typedef struct
{
	/* Point location */
	glm::vec3 pos;
	/* RGB point color */
	glm::vec3 color;
	/* Normalized point normal vector */
	glm::vec3 normal;
} PointCloud;