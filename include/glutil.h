#include <GL/gl.h>

#include <GLFW/glfw3.h>

#include <vector>
#include <cstring>
#include <iostream>
#include <exception>

#pragma once

void CheckError(const char* msg, const int line, const char* file)
{
    GLenum err;
    bool failed = false;
    while (!(err = glGetError()))
    {
        std::cerr << "Error in file '" << file << "' at line " << line << ": " << msg << " (" << err << ")" << std::endl;
        failed = true;
    }
    if (failed) throw std::runtime_error("gl error detected");
}

#define CheckError(s) CheckError(s, __LINE__, __FILE__)

GLuint loadShader(GLenum shaderType, const std::string& shaderFileName)
{
    
}