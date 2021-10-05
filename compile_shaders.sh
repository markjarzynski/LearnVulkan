#!/bin/bash

GLSLC=/usr/bin/glslc

if [ "$(name)" == "Darwin"]; then
    GLSLC=/usr/local/bin/glslc
fi

$(GLSLC) Shaders/simple.vert -o Shaders/simple.vert.spv
$(GLSLC) Shaders/simple.frag -o Shaders/simple.frag.spv