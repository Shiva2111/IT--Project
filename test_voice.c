#include <stdio.h>
#include <portaudio.h>

#define SAMPLE_RATE (44100)
#define FRAMES_PER_BUFFER (64)

static int callback(const void *inputBuffer, void *outputBuffer,
                    unsigned long framesPerBuffer,
                    const PaStreamCallbackTimeInfo* timeInfo,
                    PaStreamCallbackFlags statusFlags,
                    void *userData)
{
    float *out = (float*)outputBuffer;
    double phase = *(double*)userData;
    double phaseIncrement = 440.0 * 2 * 3.14159265 / SAMPLE_RATE;
    int i;
    for (i = 0; i < framesPerBuffer; i++)
    {
        *out++ = (float)sin(phase);
        phase += phaseIncrement;
        if (phase > 2 * 3.14159265)
            phase -= 2 * 3.14159265;
    }
    *(double*)userData = phase;
    return paContinue;
}

int main()
{
    PaStream *stream;
    PaError err;
    double phase = 0.0;

    err = Pa_Initialize();
    if (err != paNoError) goto error;

    err = Pa_OpenDefaultStream(&stream, 0, 1, paFloat32, SAMPLE_RATE,
                               FRAMES_PER_BUFFER, callback, &phase);
    if (err != paNoError) goto error;

    err = Pa_StartStream(stream);
    if (err != paNoError) goto error;

    printf("Press any key to exit...\n");
    getchar();

    err = Pa_StopStream(stream);
    if (err != paNoError) goto error;

    err = Pa_CloseStream(stream);
    if (err != paNoError) goto error;

    Pa_Terminate();
    return 0;

error:
    fprintf(stderr, "An error occurred: %s\n", Pa_GetErrorText(err));
    Pa_Terminate();
    return -1;
}
