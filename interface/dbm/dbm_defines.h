//
// Created by redbean on 22. 8. 24.
//

#ifndef DISTORTION_BROWN_MODEL_DBM_DEFINES_H
#define DISTORTION_BROWN_MODEL_DBM_DEFINES_H

struct dbm_vec2
{
    float x;
    float y;
};

struct dbm_vec3
{
    float x;
    float y;
    float z;
};

struct dbm_vec4
{
    float x;
    float y;
    float z;
    float w;
};

struct dbm_radial
{
    float K[7];
};


#endif //DISTORTION_BROWN_MODEL_DBM_DEFINES_H
