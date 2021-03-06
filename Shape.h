#ifndef __SHAPE_H__
#define __SHAPE_H__

#include "Colour.h"

namespace typing
{
    void DrawPyramid(const ColourRGBA& faceColour);
    void DrawPyramid(const ColourRGBA& faceColour, const ColourRGBA& lineColour);
    void DrawCube(const ColourRGBA& faceColour);
    void DrawCube(const ColourRGBA& faceColour, const ColourRGBA& lineColour);
    void DrawDodecahedron(const ColourRGBA& faceColour, const ColourRGBA& lineColour);
    void DrawSphere(const ColourRGBA& colour);
}

#endif // __SHAPE_H__
