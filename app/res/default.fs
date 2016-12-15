#version 120

varying vec2 texCoord0;
varying vec4 normal0;

uniform sampler2D diffuse;
uniform vec4 ambiant;

void main()
{
    gl_FragColor = ambiant * texture2D(diffuse, texCoord0) * 
	clamp(dot(-vec4(0,0,1,0), normal0), 0.0, 1.0);
}
