/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef CUBEMAP_DOWNSAMPLER_RASTER_GLSL_GEN_H_RD
#define CUBEMAP_DOWNSAMPLER_RASTER_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class CubemapDownsamplerRasterShaderRD : public ShaderRD {

public:

	CubemapDownsamplerRasterShaderRD() {

		static const char _vertex_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,117,105,110,116,32,102,97,99,101,95,115,105,122,101,59,10,9,117,105,110,116,32,102,97,99,101,95,105,100,59,32,10,125,10,112,97,114,97,109,115,59,10,10,35,100,101,102,105,110,101,32,77,95,80,73,32,51,46,49,52,49,53,57,50,54,53,51,53,57,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,48,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,49,46,48,59,10,9,100,105,114,91,49,93,32,61,32,118,59,10,9,100,105,114,91,50,93,32,61,32,45,117,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,49,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,45,49,46,48,59,10,9,100,105,114,91,49,93,32,61,32,118,59,10,9,100,105,114,91,50,93,32,61,32,117,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,50,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,117,59,10,9,100,105,114,91,49,93,32,61,32,49,46,48,59,10,9,100,105,114,91,50,93,32,61,32,45,118,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,51,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,117,59,10,9,100,105,114,91,49,93,32,61,32,45,49,46,48,59,10,9,100,105,114,91,50,93,32,61,32,118,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,52,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,117,59,10,9,100,105,114,91,49,93,32,61,32,118,59,10,9,100,105,114,91,50,93,32,61,32,49,46,48,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,53,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,45,117,59,10,9,100,105,114,91,49,93,32,61,32,118,59,10,9,100,105,114,91,50,93,32,61,32,45,49,46,48,59,10,125,10,10,102,108,111,97,116,32,99,97,108,99,87,101,105,103,104,116,40,102,108,111,97,116,32,117,44,32,102,108,111,97,116,32,118,41,32,123,10,9,102,108,111,97,116,32,118,97,108,32,61,32,117,32,42,32,117,32,43,32,118,32,42,32,118,32,43,32,49,46,48,59,10,9,114,101,116,117,114,110,32,118,97,108,32,42,32,115,113,114,116,40,118,97,108,41,59,10,125,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,50,32,98,97,115,101,95,97,114,114,91,51,93,32,61,32,118,101,99,50,91,93,40,118,101,99,50,40,45,49,46,48,44,32,45,49,46,48,41,44,32,118,101,99,50,40,45,49,46,48,44,32,51,46,48,41,44,32,118,101,99,50,40,51,46,48,44,32,45,49,46,48,41,41,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,99,52,40,98,97,115,101,95,97,114,114,91,103,108,95,86,101,114,116,101,120,73,110,100,101,120,93,44,32,48,46,48,44,32,49,46,48,41,59,10,9,117,118,95,105,110,116,101,114,112,32,61,32,99,108,97,109,112,40,103,108,95,80,111,115,105,116,105,111,110,46,120,121,44,32,118,101,99,50,40,48,46,48,44,32,48,46,48,41,44,32,118,101,99,50,40,49,46,48,44,32,49,46,48,41,41,32,42,32,50,46,48,32,42,32,102,108,111,97,116,40,112,97,114,97,109,115,46,102,97,99,101,95,115,105,122,101,41,59,32,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,0
		};
		static const char _fragment_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,117,105,110,116,32,102,97,99,101,95,115,105,122,101,59,10,9,117,105,110,116,32,102,97,99,101,95,105,100,59,32,10,125,10,112,97,114,97,109,115,59,10,10,35,100,101,102,105,110,101,32,77,95,80,73,32,51,46,49,52,49,53,57,50,54,53,51,53,57,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,48,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,49,46,48,59,10,9,100,105,114,91,49,93,32,61,32,118,59,10,9,100,105,114,91,50,93,32,61,32,45,117,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,49,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,45,49,46,48,59,10,9,100,105,114,91,49,93,32,61,32,118,59,10,9,100,105,114,91,50,93,32,61,32,117,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,50,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,117,59,10,9,100,105,114,91,49,93,32,61,32,49,46,48,59,10,9,100,105,114,91,50,93,32,61,32,45,118,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,51,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,117,59,10,9,100,105,114,91,49,93,32,61,32,45,49,46,48,59,10,9,100,105,114,91,50,93,32,61,32,118,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,52,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,117,59,10,9,100,105,114,91,49,93,32,61,32,118,59,10,9,100,105,114,91,50,93,32,61,32,49,46,48,59,10,125,10,10,118,111,105,100,32,103,101,116,95,100,105,114,95,53,40,111,117,116,32,118,101,99,51,32,100,105,114,44,32,105,110,32,102,108,111,97,116,32,117,44,32,105,110,32,102,108,111,97,116,32,118,41,32,123,10,9,100,105,114,91,48,93,32,61,32,45,117,59,10,9,100,105,114,91,49,93,32,61,32,118,59,10,9,100,105,114,91,50,93,32,61,32,45,49,46,48,59,10,125,10,10,102,108,111,97,116,32,99,97,108,99,87,101,105,103,104,116,40,102,108,111,97,116,32,117,44,32,102,108,111,97,116,32,118,41,32,123,10,9,102,108,111,97,116,32,118,97,108,32,61,32,117,32,42,32,117,32,43,32,118,32,42,32,118,32,43,32,49,46,48,59,10,9,114,101,116,117,114,110,32,118,97,108,32,42,32,115,113,114,116,40,118,97,108,41,59,10,125,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,67,117,98,101,32,115,111,117,114,99,101,95,99,117,98,101,109,97,112,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,10,9,10,9,102,108,111,97,116,32,102,97,99,101,95,115,105,122,101,32,61,32,102,108,111,97,116,40,112,97,114,97,109,115,46,102,97,99,101,95,115,105,122,101,41,59,10,9,102,108,111,97,116,32,105,110,118,95,102,97,99,101,95,115,105,122,101,32,61,32,49,46,48,32,47,32,102,97,99,101,95,115,105,122,101,59,10,9,118,101,99,50,32,105,100,32,61,32,102,108,111,111,114,40,117,118,95,105,110,116,101,114,112,41,59,10,10,9,102,108,111,97,116,32,117,49,32,61,32,40,105,100,46,120,32,42,32,50,46,48,32,43,32,49,46,48,32,43,32,48,46,55,53,41,32,42,32,105,110,118,95,102,97,99,101,95,115,105,122,101,32,45,32,49,46,48,59,10,9,102,108,111,97,116,32,117,48,32,61,32,40,105,100,46,120,32,42,32,50,46,48,32,43,32,49,46,48,32,45,32,48,46,55,53,41,32,42,32,105,110,118,95,102,97,99,101,95,115,105,122,101,32,45,32,49,46,48,59,10,10,9,102,108,111,97,116,32,118,48,32,61,32,40,105,100,46,121,32,42,32,50,46,48,32,43,32,49,46,48,32,45,32,48,46,55,53,41,32,42,32,45,105,110,118,95,102,97,99,101,95,115,105,122,101,32,43,32,49,46,48,59,10,9,102,108,111,97,116,32,118,49,32,61,32,40,105,100,46,121,32,42,32,50,46,48,32,43,32,49,46,48,32,43,32,48,46,55,53,41,32,42,32,45,105,110,118,95,102,97,99,101,95,115,105,122,101,32,43,32,49,46,48,59,10,10,9,102,108,111,97,116,32,119,101,105,103,104,116,115,91,52,93,59,10,9,119,101,105,103,104,116,115,91,48,93,32,61,32,99,97,108,99,87,101,105,103,104,116,40,117,48,44,32,118,48,41,59,10,9,119,101,105,103,104,116,115,91,49,93,32,61,32,99,97,108,99,87,101,105,103,104,116,40,117,49,44,32,118,48,41,59,10,9,119,101,105,103,104,116,115,91,50,93,32,61,32,99,97,108,99,87,101,105,103,104,116,40,117,48,44,32,118,49,41,59,10,9,119,101,105,103,104,116,115,91,51,93,32,61,32,99,97,108,99,87,101,105,103,104,116,40,117,49,44,32,118,49,41,59,10,10,9,99,111,110,115,116,32,102,108,111,97,116,32,119,115,117,109,32,61,32,48,46,53,32,47,32,40,119,101,105,103,104,116,115,91,48,93,32,43,32,119,101,105,103,104,116,115,91,49,93,32,43,32,119,101,105,103,104,116,115,91,50,93,32,43,32,119,101,105,103,104,116,115,91,51,93,41,59,10,9,102,111,114,32,40,105,110,116,32,105,32,61,32,48,59,32,105,32,60,32,52,59,32,105,43,43,41,32,123,10,9,9,119,101,105,103,104,116,115,91,105,93,32,61,32,119,101,105,103,104,116,115,91,105,93,32,42,32,119,115,117,109,32,43,32,46,49,50,53,59,10,9,125,10,10,9,118,101,99,51,32,100,105,114,59,10,9,118,101,99,52,32,99,111,108,111,114,59,10,9,115,119,105,116,99,104,32,40,112,97,114,97,109,115,46,102,97,99,101,95,105,100,41,32,123,10,9,9,99,97,115,101,32,48,58,10,9,9,9,103,101,116,95,100,105,114,95,48,40,100,105,114,44,32,117,48,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,48,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,48,40,100,105,114,44,32,117,49,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,49,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,48,40,100,105,114,44,32,117,48,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,50,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,48,40,100,105,114,44,32,117,49,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,51,93,59,10,9,9,9,98,114,101,97,107,59,10,9,9,99,97,115,101,32,49,58,10,9,9,9,103,101,116,95,100,105,114,95,49,40,100,105,114,44,32,117,48,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,48,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,49,40,100,105,114,44,32,117,49,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,49,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,49,40,100,105,114,44,32,117,48,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,50,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,49,40,100,105,114,44,32,117,49,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,51,93,59,10,9,9,9,98,114,101,97,107,59,10,9,9,99,97,115,101,32,50,58,10,9,9,9,103,101,116,95,100,105,114,95,50,40,100,105,114,44,32,117,48,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,48,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,50,40,100,105,114,44,32,117,49,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,49,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,50,40,100,105,114,44,32,117,48,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,50,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,50,40,100,105,114,44,32,117,49,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,51,93,59,10,9,9,9,98,114,101,97,107,59,10,9,9,99,97,115,101,32,51,58,10,9,9,9,103,101,116,95,100,105,114,95,51,40,100,105,114,44,32,117,48,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,48,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,51,40,100,105,114,44,32,117,49,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,49,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,51,40,100,105,114,44,32,117,48,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,50,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,51,40,100,105,114,44,32,117,49,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,51,93,59,10,9,9,9,98,114,101,97,107,59,10,9,9,99,97,115,101,32,52,58,10,9,9,9,103,101,116,95,100,105,114,95,52,40,100,105,114,44,32,117,48,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,48,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,52,40,100,105,114,44,32,117,49,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,49,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,52,40,100,105,114,44,32,117,48,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,50,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,52,40,100,105,114,44,32,117,49,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,51,93,59,10,9,9,9,98,114,101,97,107,59,10,9,9,100,101,102,97,117,108,116,58,10,9,9,9,103,101,116,95,100,105,114,95,53,40,100,105,114,44,32,117,48,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,48,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,53,40,100,105,114,44,32,117,49,44,32,118,48,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,49,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,53,40,100,105,114,44,32,117,48,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,50,93,59,10,10,9,9,9,103,101,116,95,100,105,114,95,53,40,100,105,114,44,32,117,49,44,32,118,49,41,59,10,9,9,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,109,97,112,44,32,110,111,114,109,97,108,105,122,101,40,100,105,114,41,44,32,48,46,48,41,32,42,32,119,101,105,103,104,116,115,91,51,93,59,10,9,9,9,98,114,101,97,107,59,10,9,125,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,59,10,125,10,0
		};
		setup(_vertex_code, _fragment_code, nullptr, "CubemapDownsamplerRasterShaderRD");
	}
};

#endif
