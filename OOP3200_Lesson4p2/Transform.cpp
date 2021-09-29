#include "Transform.h"

std::string Transform::ToString() const
{
	std::string output_string;

	output_string += "Position: " + position.ToString() + "\n";
	output_string += "Rotation: " + rotation.ToString() + "\n";
	output_string += "Scale   : " + scale.ToString();

	return output_string;
}
