#include "Trigonometric_Equations_in_OpenGL.h"

//Objective: Understand the role of trigonometry in computer graphics, particularly in OpenGL.
//Key Concepts :
//Trigonometry basics : sine, cosine, tangent, and their inverse functions.
//How angles are used in rotation, scaling, and movement in 2D and 3D.
//Unit circle and how OpenGL uses angles in radians.

void BasicSineAndCoSine() 
{
	float angle = glfwGetTime(); // Gets time-based angle
	float x = sin(angle);        // Sine for horizontal movement
	float y = cos(angle);        // Cosine for vertical movement

	cout << angle << endl;
}

//Objective: Learn how to apply trigonometric equations to perform 2D and 3D rotations.
//Key Concepts :
//Rotation matrices in 2D and 3D.
//Using sine and cosine to compute the elements of a rotation matrix.
//Applying these matrices to objects in OpenGL for smooth rotation.

void TwoDRotation() 
{
	float angle = glfwGetTime();  // Angle in radians
	float rotationMatrix[4] = {
		cos(angle), -sin(angle),
		sin(angle), cos(angle)
	};
}

void ThreeDRotation() 
{
	float angle = glfwGetTime(); // Gets time-based angle
	glm::mat4 rotation = glm::rotate(glm::mat4(1.0f), angle, glm::vec3(0.0f, 0.0f, 1.0f));
}

//Objective: Use trigonometric functions to animate objects in circular motion.
//Key Concepts :
//Parametric equations for circular motion :𝑥=𝑟⋅cos(𝜃),𝑦=𝑟⋅sin⁡(𝜃).
//Controlling the speed and radius of circular motion.

void CircularMotion() 
{
	float radius = 1.0f;
	float speed = 1.0f; // Speed factor
	float angle = glfwGetTime() * speed; // Time-based angle

	float x = radius * cos(angle);
	float y = radius * sin(angle);
}

//Objective: Understand how trigonometric functions are used to create oscillating and wave - like effects.
//Key Concepts :
//Sinusoidal functions for oscillation :y = A⋅sin(f⋅t), where A is amplitude and f is frequency.
//Use cases : Animating bouncing objects, simulating wave - like effects.

void VerticalOscillation() 
{
	float amplitude = 0.5f;
	float frequency = 2.0f; // Number of oscillations per second
	float y = amplitude * sin(frequency * glfwGetTime());
}

//Objective: Combine trigonometric functions with multiple transformations like rotation and translation.
//Key Concepts :
//Using rotation and translation together for complex motion.
//Understanding transformation matrices and how they are multiplied together in OpenGL.

void CombiningRotationAndTranslation() 
{
	float radius = 1.0f;
	float speed = 1.0f; // Speed factor
	float angle = glfwGetTime() * speed; // Time-based angle

	float x = radius * cos(angle);
	float y = radius * sin(angle);

	glm::mat4 model = glm::translate(glm::mat4(1.0f), glm::vec3(x, y, 0.0f));
	model = glm::rotate(model, angle, glm::vec3(0.0f, 0.0f, 1.0f));
}