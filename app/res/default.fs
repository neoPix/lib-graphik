#version 120

varying vec2 texCoord0;
varying vec3 normal0;

uniform sampler2D diffuse;
uniform vec4 ambiant;

void main()
{
    gl_FragColor = ambiant * texture2D(diffuse, texCoord0);
}
