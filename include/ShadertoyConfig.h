#pragma once

#define SHADERTOY_MAX_CHANNELS 4

#define SHADERTOY_KEYMAPS_COUNT 256

#define SHADERTOY_SOUND_AUDIO_CHANNELS 2
#define SHADERTOY_SOUND_FREQUENCY 44100
#define SHADERTOY_SOUND_PLAYTIME 60
#define SHADERTOY_SOUND_BUFFERS_COUNT 2
#define SHADERTOY_SOUND_TEXTURE_WIDTH 512
#define SHADERTOY_SOUND_TEXTURE_HEIGHT 512
#define SHADERTOY_SOUND_BLOCK_SIZE (SHADERTOY_SOUND_TEXTURE_WIDTH * SHADERTOY_SOUND_TEXTURE_HEIGHT)

#define SHADERTOY_AUDIO_TEXTURE_WIDTH 512
#define SHADERTOY_AUDIO_FFT_SIZE 2048
#define SHADERTOY_AUDIO_SMOOTHING_CONSTANT 0.8
#define SHADERTOY_AUDIO_MIN_DECIBELS -100
#define SHADERTOY_AUDIO_MAX_DECIBELS -30