#version 120

attribute vec3 position;
attribute vec3 normal;
attribute vec2 texCoord;

varying vec2 texCoord0;
varying vec4 normal0;

uniform mat4 transform;
uniform mat4 camera;

void main()
{
    gl_Position = camera * transform * vec4(position, 1.0);
    texCoord0 = texCoord;
    normal0 = camera * transform * vec4(normal, 0.0);
}
